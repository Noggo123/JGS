#pragma once

inline int32_t Rand() { return rand(); };
inline float FRand() { return Rand() / (float)RAND_MAX; };

//(*(float (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 616i64))(a1, a2, 0i64); getmaxtickrate

namespace Replication
{
	static std::vector<FNetworkObjectInfo*> NetworkObjectList{};

	inline static UChannel* (*CreateChannel)(UNetConnection*, int, bool, int32_t);
	inline static __int64 (*ReplicateActor)(UActorChannel*);
	inline static __int64 (*SetChannelActor)(UActorChannel*, AActor*);
	inline static void (*CallPreReplication)(AActor*, UNetDriver*);
	inline static void (*SendClientAdjustment)(APlayerController*);
	inline static void (*ActorChannelClose)(UActorChannel*, __int64 /*Not used*/, __int64 /*Not used*/, __int64 /*Used once for getname so i will just use the actor*/);
	inline static bool (*IsNetRelevantFor)(AActor*, AActor*, AActor*, FVector&);

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

	int32 ServerReplicateActors_PrepConnections(UNetDriver* NetDriver, float DeltaSeconds)
	{
		int32 NumClientsToTick = NetDriver->ClientConnections.Num();

		bool bFoundReadyConnection = false;

		for (int32 ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
			if (!Connection) continue;

			AActor* OwningActor = Connection->OwningActor;
			if (OwningActor != NULL && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))
			{
				bFoundReadyConnection = true;

				Connection->ViewTarget = Connection->PlayerController ? Connection->PlayerController->GetViewTarget() : OwningActor;

				for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
				{
					UNetConnection* Child = Connection->Children[ChildIdx];
					APlayerController* ChildPlayerController = Child->PlayerController;
					if (ChildPlayerController != NULL)
					{
						Child->ViewTarget = ChildPlayerController->GetViewTarget();
					}
					else
					{
						Child->ViewTarget = NULL;
					}
				}
			}
			else
			{
				Connection->ViewTarget = NULL;
				for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
				{
					Connection->Children[ChildIdx]->ViewTarget = NULL;
				}
			}
		}

		return bFoundReadyConnection ? NumClientsToTick : 0;
	}

	void ServerReplicateActors_BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList, float ServerTickTime)
	{
		int32 NumInitiallyDormant = 0;

		LOG("ServerReplicateActors_BuildConsiderList, Building ConsiderList " << Globals::GPS->STATIC_GetTimeSeconds(Globals::World));

		std::vector<AActor*> ActorsToRemove;

		for (auto ActorInfo : NetworkObjectList)
		{
			if (!ActorInfo) continue;
			if (!ActorInfo->Actor) continue;

			if (!ActorInfo->bPendingNetUpdate && Globals::GPS->STATIC_GetTimeSeconds(Globals::World) <= ActorInfo->NextUpdateTime) continue;

			AActor* Actor = ActorInfo->Actor;

			if (Actor->IsPendingKill())
			{
				ActorsToRemove.push_back(Actor);
				continue;
			}

			if (Actor->RemoteRole == ENetRole::ROLE_None) continue;
			if (!Actor->bActorInitialized) continue;

			if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
			{
				NumInitiallyDormant++;
				ActorsToRemove.push_back(Actor);
				continue;
			}

			if (ActorInfo->LastNetReplicateTime == 0)
			{
				ActorInfo->LastNetReplicateTime = Globals::GPS->STATIC_GetTimeSeconds(Globals::World);
				ActorInfo->OptimalNetUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
			}

			const float ScaleDownStartTime = 2.0f;
			const float ScaleDownTimeRange = 5.0f;

			const float LastReplicateDelta = Globals::GPS->STATIC_GetTimeSeconds(Globals::World) - ActorInfo->LastNetReplicateTime;

			if (LastReplicateDelta > ScaleDownStartTime)
			{
				if (Actor->MinNetUpdateFrequency == 0.0f)
				{
					Actor->MinNetUpdateFrequency = 2.0f;
				}

				const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
				const float MaxOptimalDelta = Globals::MathLib->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);

				const float Alpha = Globals::MathLib->STATIC_Clamp((LastReplicateDelta - ScaleDownStartTime) / ScaleDownTimeRange, 0.0f, 1.0f);
				ActorInfo->OptimalNetUpdateDelta = Globals::MathLib->STATIC_Lerp(MinOptimalDelta, MaxOptimalDelta, Alpha);
			}

			if (Actor->NetDriverName.ComparisonIndex != 0)
			{
				if (!ActorInfo->bPendingNetUpdate)
				{
					const float NextUpdateDelta = 1.0f / Actor->NetUpdateFrequency;

					ActorInfo->NextUpdateTime = Globals::GPS->STATIC_GetTimeSeconds(Globals::World) + Globals::MathLib->STATIC_RandomFloat() * ServerTickTime + NextUpdateDelta;

					ActorInfo->LastNetUpdateTime = NetDriver->Time;
				}

				ActorInfo->bPendingNetUpdate = false;

				OutConsiderList.push_back(ActorInfo);

				if (CallPreReplication && Actor && NetDriver)
					CallPreReplication(Actor, NetDriver);
			}
		}

		for (auto Actor : ActorsToRemove)
		{
			//TODO
		}
	}

	bool IsActorRelevantToConnection(AActor* Actor, std::vector<::FNetViewer>& ConnectionViewers)
	{
		for (int32 viewerIdx = 0; viewerIdx < ConnectionViewers.size(); viewerIdx++)
		{
			if (IsNetRelevantFor(Actor, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
			{
				return true;
			}
		}

		return false;
	}

	int32_t ServerReplicateActors_PrioritizeActors(UNetDriver* NetDriver, UNetConnection* Connection, std::vector<::FNetViewer>& ConnectionViewers, std::vector<FNetworkObjectInfo*> ConsiderList, bool bCPUSaturated, std::vector<FActorPriority*>& OutPriorityList)
	{
		NetDriver->NetTag++;
		Connection->TickCount++;

		for (int32 j = 0; j < Connection->SentTemporaries.Num(); j++)
		{
			Connection->SentTemporaries[j]->NetTag = NetDriver->NetTag;
		}

		int32 FinalSortedCount = 0;
		int32 DeletedCount = 0;

		const int32 MaxSortedActors = ConsiderList.size() + NetDriver->DestroyedStartupOrDormantActors.Num();
		if (MaxSortedActors > 0)
		{
			for (auto ActorInfo : ConsiderList)
			{
				AActor* Actor = ActorInfo->Actor;

				UActorChannel* Channel = FindChannel(Actor, Connection);

				UNetConnection* PriorityConnection = Connection;

				if (Actor->bOnlyRelevantToOwner)
				{
					//TODO
				}

				if (!Channel)
				{
					if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
					{
						// If not relevant (and we don't have a channel), skip
						continue;
					}
				}

				if (Actor->NetTag != NetDriver->NetTag)
				{
					Actor->NetTag = NetDriver->NetTag;

					FActorPriority* ActorPriority = new FActorPriority;
					ActorPriority->ActorInfo = ActorInfo;
					ActorPriority->Channel = Channel;

					OutPriorityList.push_back(ActorPriority);

					FinalSortedCount++;
				}
			}
		}

		LOG("ServerReplicateActors_PrioritizeActors: Potential " << MaxSortedActors << " ConsiderList " << ConsiderList.size() << " FinalSortedCount " << FinalSortedCount);

		return FinalSortedCount;
	}

	int32_t ServerReplicateActors_ProcessPrioritizedActors(UNetDriver* NetDriver, UNetConnection* Connection, std::vector<::FNetViewer>& ConnectionViewers, std::vector<FActorPriority*> PriorityActors, int32 FinalSortedCount, int32& OutUpdated)
	{
		int32 ActorUpdatesThisConnection = 0;
		int32 ActorUpdatesThisConnectionSent = 0;
		int32 FinalRelevantCount = 0;

		for (int32 j = 0; j < FinalSortedCount; j++)
		{
			UActorChannel* Channel = PriorityActors[j]->Channel;
			LOG(" Maybe Replicate " << PriorityActors[j]->ActorInfo->Actor->GetName());
			if (!Channel || Channel->Actor) //make sure didn't just close this channel
			{
				AActor* Actor = PriorityActors[j]->ActorInfo->Actor;
				bool bIsRelevant = false;

				if (!Actor->bTearOff && (!Channel || NetDriver->Time - Channel->RelevantTime > 1.f))
				{
					if (IsActorRelevantToConnection(Actor, ConnectionViewers))
					{
						bIsRelevant = true;
					}
				}

				const bool bIsRecentlyRelevant = bIsRelevant || (Channel && NetDriver->Time - Channel->RelevantTime < NetDriver->RelevantTimeout);

				if (bIsRecentlyRelevant)
				{
					FinalRelevantCount++;

					if (Channel == NULL)
					{
						Channel = (UActorChannel*)CreateChannel(Connection, 2, 1, -1);
						if (Channel)
						{
							SetChannelActor(Channel, Actor);
						}

						if (Actor->NetUpdateFrequency < 1.0f)
						{
							LOG("Unable to replicate " << Actor->GetName());
							PriorityActors[j]->ActorInfo->NextUpdateTime = Globals::GPS->STATIC_GetTimeSeconds(Globals::World) + 0.2f * FRand();
						}
					}

					if (Channel)
					{
						if (bIsRelevant)
						{
							Channel->RelevantTime = NetDriver->Time + 0.5f * Globals::MathLib->STATIC_RandomFloat();

							LOG("- Replicate " << Actor->GetName() << ". " << PriorityActors[j]->Priority);

							if (ReplicateActor(Channel))
							{
								ActorUpdatesThisConnectionSent++;

								const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
								const float MaxOptimalDelta = Globals::MathLib->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
								const float DeltaBetweenReplications = (Globals::GPS->STATIC_GetTimeSeconds(Globals::World) - PriorityActors[j]->ActorInfo->LastNetReplicateTime);

								PriorityActors[j]->ActorInfo->OptimalNetUpdateDelta = Globals::MathLib->STATIC_Clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
								PriorityActors[j]->ActorInfo->LastNetReplicateTime = Globals::GPS->STATIC_GetTimeSeconds(Globals::World);
							}
							ActorUpdatesThisConnection++;
							OutUpdated++;
						}
					}
				}

				if ((!bIsRecentlyRelevant || Actor->bTearOff) && Channel != NULL)
				{
					// Non startup (map) actors have their channels closed immediately, which destroys them.
					// Startup actors get to keep their channels open.

					// Fixme: this should be a setting
					if (!Actor->bNetStartup)
					{
						LOG("- Closing channel for no longer relevant actor " << Actor->GetName());
						ActorChannelClose(Channel, 0, 0, 0);
					}
				}
			}
		}

		return FinalSortedCount;
	}

	int32_t ServerReplicateActors(UNetDriver* NetDriver, float DeltaSeconds)
	{
		if (NetDriver->ClientConnections.Num() == 0)
		{
			return 0;
		}

		int32 Updated = 0;

		NetDriver->ReplicationFrame++;

		const int32 NumClientsToTick = ServerReplicateActors_PrepConnections(NetDriver, DeltaSeconds);

		if (NumClientsToTick == 0)
		{
			// No connections are ready this frame
			return 0;
		}

		AWorldSettings* WorldSettings = Globals::World->PersistentLevel->WorldSettings;

		bool bCPUSaturated = false;
		float ServerTickTime = (*(float(__fastcall**)(__int64, __int64, __int64))(*(__int64*)Globals::FortEngine + __int64(616)))(__int64(Globals::FortEngine), DeltaSeconds, __int64(0));
		if (ServerTickTime == 0.f)
		{
			ServerTickTime = DeltaSeconds;
		}
		else
		{
			ServerTickTime = 1.f / ServerTickTime;
			bCPUSaturated = DeltaSeconds > 1.2f * ServerTickTime;
		}

		std::vector<FNetworkObjectInfo*> ConsiderList;

		ServerReplicateActors_BuildConsiderList(NetDriver, ConsiderList, ServerTickTime);

		for (int32 i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[i];
			if (!Connection) continue;

			if (i >= NumClientsToTick)
			{
				for (int32 ConsiderIdx = 0; ConsiderIdx < ConsiderList.size(); ConsiderIdx++)
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
				std::vector<::FNetViewer> ConnectionViewers;
				ConnectionViewers.push_back(::FNetViewer(Connection, DeltaSeconds));

				if (Connection->PlayerController)
				{
					SendClientAdjustment(Connection->PlayerController);
				}

				for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
				{
					if (Connection->Children[ChildIdx]->PlayerController != NULL)
					{
						SendClientAdjustment(Connection->Children[ChildIdx]->PlayerController);
					}
				}

				std::vector<FActorPriority*> PriorityActors;
				const int32 FinalSortedCount = ServerReplicateActors_PrioritizeActors(NetDriver, Connection, ConnectionViewers, ConsiderList, bCPUSaturated, PriorityActors);
				const int32 LastProcessedActor = ServerReplicateActors_ProcessPrioritizedActors(NetDriver, Connection, ConnectionViewers, PriorityActors, FinalSortedCount, Updated);

				for (int32 k = LastProcessedActor; k < FinalSortedCount; k++)
				{
					if (!PriorityActors[k]->ActorInfo)
					{
						continue;
					}

					AActor* Actor = PriorityActors[k]->ActorInfo->Actor;

					UActorChannel* Channel = PriorityActors[k]->Channel;

					LOG("Saturated. " << Actor->GetName());
					if (Channel != NULL && NetDriver->Time - Channel->RelevantTime <= 1.f)
					{
						LOG(" Saturated. Mark " << Actor->GetName() << " NetUpdateTime to be checked for next tick")
						PriorityActors[k]->ActorInfo->bPendingNetUpdate = true;
					}
					else if (IsActorRelevantToConnection(Actor, ConnectionViewers))
					{
						LOG(" Saturated. Mark " << Actor->GetName() << " NetUpdateTime to be checked for next tick")
						PriorityActors[k]->ActorInfo->bPendingNetUpdate = true;
						if (Channel != NULL)
						{
							Channel->RelevantTime = NetDriver->Time + 0.5f * Globals::MathLib->STATIC_RandomFloat();
						}
					}
				}
				ConnectionViewers.empty();
				ConnectionViewers.clear();
			}
		}

		if (NumClientsToTick < NetDriver->ClientConnections.Num())
		{
			int32 NumConnectionsToMove = NumClientsToTick;
			while (NumConnectionsToMove > 0)
			{
				UNetConnection* Connection = NetDriver->ClientConnections[0];
				NetDriver->ClientConnections.RemoveAt(0, 1);
				NetDriver->ClientConnections.Add(Connection);
				NumConnectionsToMove--;
			}
		}

		return Updated;
	}

	//We hook these for our own NetworkObjectList
	void (*AddNetworkActor)(UWorld*, AActor*);
	void (*RemoveNetworkActor)(UWorld*, AActor*);

	void AddNetworkActorHook(UWorld* World, AActor* Actor)
	{
		if (Actor)
		{
			FNetworkObjectInfo* ActorInfo = new FNetworkObjectInfo;
			ActorInfo->Actor = Actor;
			ActorInfo->bPendingNetUpdate = true;

			NetworkObjectList.push_back(ActorInfo);
		}

		return AddNetworkActor(World, Actor);
	}

	void RemoveNetworkActorHook(UWorld* World, AActor* Actor)
	{
		if (Actor)
		{
			for (auto ActorInfo : NetworkObjectList)
			{
				if (ActorInfo->Actor == Actor)
				{

				}
			}
		}

		return RemoveNetworkActor(World, Actor);
	}

	FNetworkObjectInfo* GetNetworkObjectInfoForActor(AActor* Actor)
	{
		for (auto ActorInfo : NetworkObjectList)
		{
			if (ActorInfo->Actor == Actor)
			{
				return ActorInfo;
			}
		}

		return nullptr;
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

		MH_CreateHook((LPVOID)(BaseAddress + Offsets::AddNetworkActor), AddNetworkActorHook, (LPVOID*)(&AddNetworkActor));
		MH_EnableHook((LPVOID)(BaseAddress + Offsets::AddNetworkActor));
		MH_CreateHook((LPVOID)(BaseAddress + Offsets::RemoveNetworkActor), RemoveNetworkActorHook, (LPVOID*)(&RemoveNetworkActor));
		MH_EnableHook((LPVOID)(BaseAddress + Offsets::RemoveNetworkActor));
	}
}