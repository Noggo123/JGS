#pragma once

inline int32_t Rand() { return rand(); };
inline float FRand() { return Rand() / (float)RAND_MAX; };

namespace Replication
{
	inline static UChannel* (*CreateChannel)(UNetConnection*, int, bool, int32_t);
	inline static __int64 (*ReplicateActor)(UActorChannel*);
	inline static __int64 (*SetChannelActor)(UActorChannel*, AActor*);
	inline static void (*CallPreReplication)(AActor*, UNetDriver*);
	inline static void (*SendClientAdjustment)(APlayerController*);
	inline static void (*ActorChannelClose)(UActorChannel*);
	inline static bool (*IsNetRelevantFor)(AActor*, AActor*, AActor*, FVector&);

	FNetworkObjectList& GetNetworkObjectList(UNetDriver* Driver)
	{
		return *(*(TSharedPtr<FNetworkObjectList>*)(__int64(Driver) + (sizeof(UNetDriver) - (sizeof(int) * 2) - sizeof(TSharedPtr<FNetworkObjectList>))));
	}

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
		TArray<AActor*> OutActors;
		Globals::GPS->STATIC_GetAllActorsOfClass(Globals::World, AActor::StaticClass(), &OutActors);

		for (int i = 0; i < OutActors.Num(); i++)
		{
			auto Actor = OutActors[i];

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

				//Actor->NetCullDistanceSquared = Actor->NetCullDistanceSquared * 2.5;
				
				FNetworkObjectInfo* Info = new FNetworkObjectInfo();
				Info->Actor = Actor;

				OutConsiderList.push_back(Info);
			}
		}

		Free((void*)OutActors.Data);
		OutActors.Count = 0;
		OutActors.Max = 0;
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
				continue;

			if (!Connection->ViewTarget)
				continue;

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
					continue;

				if (!ActorInfo->Actor)
					continue;

				auto Actor = ActorInfo->Actor;

				auto Channel = FindChannel(Actor, Connection);

				const bool bIsRelevant = IsActorRelevantToConnection(ActorInfo->Actor, Connection);

				if (!Actor->bAlwaysRelevant && !Actor->bNetUseOwnerRelevancy && !Actor->bOnlyRelevantToOwner)
				{
					if (Connection && Connection->ViewTarget)
					{
						auto Viewer = Connection->ViewTarget;
						auto Loc = Viewer->K2_GetActorLocation();
						if (!IsNetRelevantFor(Actor, Viewer, Connection->ViewTarget, Loc))
						{
							if (Channel)
								ActorChannelClose(Channel);
							continue;
						}
					}
				}

				if (!Channel)
					Channel = ReplicateToClient(Actor, Connection);

				if (Channel)
					ReplicateActor(Channel);
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