#pragma once

struct FNetworkObjectInfo
{
	AActor* Actor;
	double NextUpdateTime;
	double LastNetReplicateTime;
	float OptimalNetUpdateDelta;
	float LastNetUpdateTime;
	uint32_t bPendingNetUpdate : 1;
	uint32_t bForceRelevantNextUpdate : 1;
	std::vector<UNetConnection*> DormantConnections;
	std::vector<UNetConnection*> RecentlyDormantConnections;
};

inline int32_t Rand() { return rand(); };
inline float FRand() { return Rand() / (float)RAND_MAX; };

namespace Replication
{
	inline static UChannel* (*CreateChannel)(UNetConnection*, int, bool, int32_t);
	inline static __int64 (*ReplicateActor)(UActorChannel*);
	inline static __int64 (*SetChannelActor)(UActorChannel*, AActor*);
	inline static void (*CallPreReplication)(AActor*, UNetDriver*);
	inline static void (*SendClientAdjustment)(APlayerController*);
	inline static void (*ActorChannelClose)(UActorChannel*, __int64 /*Not used*/, __int64 /*Not used*/, __int64 /*Used once for getname so i will just use the actor*/);
	inline static bool (*IsNetRelevantFor)(AActor*, AActor*, AActor*, FVector&);

	UActorChannel* ReplicateToClient(AActor* InActor, UNetConnection* InConnection)
	{
		if (InActor->IsA(APlayerController::StaticClass()) && InActor != InConnection->PlayerController)
			return nullptr;

		auto Channel = (UActorChannel*)(CreateChannel(InConnection, 2, true, -1));

		if (Channel) {
			SetChannelActor(Channel, InActor);
			Channel->Connection = InConnection;

			return Channel;
		}

		return NULL;
	}

	int PrepConnections(UNetDriver* NetDriver)
	{
		int ReadyConnections = 0;

		for (int ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
			if (!Connection) continue;

			AActor* OwningActor = Connection->OwningActor;

			if (OwningActor)
			{
				ReadyConnections++;
				AActor* DesiredViewTarget = OwningActor;

				if (Connection->PlayerController)
				{
					if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
					{
						DesiredViewTarget = ViewTarget;
					}
				}

				Connection->ViewTarget = DesiredViewTarget;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
				{
					UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
					{
						ChildConnection->ViewTarget = DesiredViewTarget;
					}
				}
			}
			else
			{
				Connection->ViewTarget = nullptr;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
				{
					UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
					{
						ChildConnection->ViewTarget = nullptr;
					}
				}
			}
		}

		return ReadyConnections;
	}

	UActorChannel* FindChannel(AActor* Actor, UNetConnection* Connection)
	{
		for (int i = 0; i < Connection->OpenChannels.Num(); i++)
		{
			auto Channel = Connection->OpenChannels[i];

			if (Channel && Channel->Class)
			{
				if (Channel->Class == UActorChannel::StaticClass())
				{
					if (((UActorChannel*)Channel)->Actor == Actor)
						return ((UActorChannel*)Channel);
				}
			}
		}

		return NULL;
	}

	UNetConnection* GetOwningConnection(AActor* Actor)
	{
		for (auto Owner = Actor; Actor; Actor = Actor->GetOwner())
		{
			if (Actor->IsA(APlayerController::StaticClass()))
			{
				return ((APlayerController*)Actor)->NetConnection;
			}
		}
	}

	void BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList)
	{
		TArray<AActor*> Actors;
		Globals::GPS->STATIC_GetAllActorsOfClass(Globals::World, AActor::StaticClass(), &Actors);

		for (int i = 0; i < Actors.Num(); i++)
		{
			auto Actor = Actors[i];

			if (!Actor)
				continue;

			if (!Actor)
			{
				continue;
			}

			if (Actor->bActorIsBeingDestroyed)
			{
				continue;
			}

			if (Actor->RemoteRole == ENetRole::ROLE_None)
			{
				continue;
			}

			if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
			{
				continue;
			}

			if (Actor->Name.ComparisonIndex != 0)
			{
				if (CallPreReplication)
					CallPreReplication(Actor, NetDriver);

				FNetworkObjectInfo* Info = new FNetworkObjectInfo();
				Info->Actor = Actor;

				OutConsiderList.push_back(Info);
			}
		}

		FreeInternal((void*)Actors.Data);
		Actors.Data = 0;
		Actors.Count = 0;
		Actors.Max = 0;
	}

	bool IsActorRelevantToConnection(AActor* Actor, UNetConnection* NetConnection)
	{
		if (NetConnection)
		{
			if (NetConnection->ViewTarget)
			{
				auto ActorLocation = NetConnection->ViewTarget->K2_GetActorLocation();
				return IsNetRelevantFor(Actor, NetConnection->ViewTarget, NetConnection->ViewTarget, ActorLocation);
			}
		}

		return false; //Hope this fixs the damn issue
	}

	void ReplicateActors(UNetDriver* NetDriver)
	{
		++*(DWORD*)(__int64(NetDriver) + 648);

		float DeltaSeconds = Globals::GPS->STATIC_GetWorldDeltaSeconds(Globals::World);
		float TimeSeconds = Globals::GPS->STATIC_GetTimeSeconds(Globals::World);

		auto NumClientsToTick = PrepConnections(NetDriver);

		if (NumClientsToTick == 0)
			return;

		std::vector<FNetworkObjectInfo*> ConsiderList;
		BuildConsiderList(NetDriver, ConsiderList);

		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			auto Connection = NetDriver->ClientConnections[i];

			if (!Connection)
				continue;

			if (i >= NumClientsToTick)
			{
				for (int32_t ConsiderIdx = 0; ConsiderIdx < ConsiderList.size(); ConsiderIdx++)
				{
					AActor* Actor = ConsiderList[ConsiderIdx]->Actor;

					if (Actor != NULL && !ConsiderList[ConsiderIdx]->bPendingNetUpdate)
					{
						UActorChannel* Channel = FindChannel(Actor, Connection);

						if (Channel != NULL && Channel->LastUpdateTime < ConsiderList[ConsiderIdx]->LastNetUpdateTime)
						{
							ConsiderList[ConsiderIdx]->bPendingNetUpdate = true;
						}
					}
				}
			}
			else if (Connection->ViewTarget)
			{
				if (Connection->PlayerController)
				{
					SendClientAdjustment(Connection->PlayerController);
				}

				for (int32_t ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
				{
					if (Connection->Children[ChildIdx]->PlayerController != NULL)
					{
						SendClientAdjustment(Connection->Children[ChildIdx]->PlayerController);
					}
				}

				for (auto ActorInfo : ConsiderList)
				{
					if (!ActorInfo)
					{
						continue;
					}

					AActor* Actor = ActorInfo->Actor;

					bool bIsRelevant = false;

					auto Channel = FindChannel(Actor, Connection);

					if (!Actor->bTearOff && (!Channel || Time - Channel->RelevantTime > 1.f))
					{
						if (IsActorRelevantToConnection(Actor, ConnectionViewers))
						{
							bIsRelevant = true;
						}
					}

					if (!Actor->bAlwaysRelevant && !Actor->bNetUseOwnerRelevancy && !Actor->bOnlyRelevantToOwner)
					{
						if (Connection && Connection->ViewTarget)
						{
							auto Viewer = Connection->ViewTarget;
							auto Loc = Viewer->K2_GetActorLocation();
							if (!IsNetRelevantFor(Actor, Viewer, Connection->ViewTarget, Loc))
							{
								if (Channel)
									ActorChannelClose(Channel, 0, 0, 0);
								continue;
							}
						}
					}

					if (!Channel) {
						Channel = ReplicateToClient(Actor, Connection);

						if (Actor->NetUpdateFrequency < 1.0f)
						{
							ActorInfo->NextUpdateTime = TimeSeconds + 0.2f * FRand();
						}
					}

					if (Channel)
					{
						if (bIsRelevant)
						{
							Channel->RelevantTime = NetDriver->Time + 0.5f * Globals::MathLib->STATIC_RandomFloat();
						}

						if (ReplicateActor(Channel))
						{
							const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
							const float MaxOptimalDelta = Globals::MathLib->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
							const float DeltaBetweenReplications = (TimeSeconds - ActorInfo->LastNetReplicateTime);

							ActorInfo->OptimalNetUpdateDelta = Globals::MathLib->STATIC_Clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
							ActorInfo->LastNetReplicateTime = TimeSeconds;
						}
					}

					if (Channel != NULL && NetDriver->Time - Channel->RelevantTime <= 1.f)
					{
						ActorInfo->bPendingNetUpdate = true;
					}
					else if (IsActorRelevantToConnection(Actor, Connection))
					{
						ActorInfo->bPendingNetUpdate = true;
						if (Channel != NULL)
						{
							Channel->RelevantTime = NetDriver->Time + 0.5f * Globals::MathLib->STATIC_RandomFloat();
						}
					}
				}
			}

		}

		ConsiderList.empty();
		ConsiderList.clear();
	}

	void InitOffsets()
	{
		auto BaseAddress = (uintptr_t)GetModuleHandle(NULL);

		CreateChannel = decltype(CreateChannel)(BaseAddress + Offsets::CreateChannel);
		SetChannelActor = decltype(SetChannelActor)(BaseAddress + Offsets::SetChannelActor);
		ReplicateActor = decltype(ReplicateActor)(BaseAddress + Offsets::ReplicateActor);
		CallPreReplication = decltype(CallPreReplication)(BaseAddress + Offsets::CallPreReplication);
		SendClientAdjustment = decltype(SendClientAdjustment)(BaseAddress + Offsets::SendClientAdjustment);
		ActorChannelClose = decltype(ActorChannelClose)(BaseAddress + Offsets::ActorChannelClose);
		IsNetRelevantFor = decltype(IsNetRelevantFor)(BaseAddress + Offsets::IsNetRelevantFor);
	}
}