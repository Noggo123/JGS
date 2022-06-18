#pragma once

struct FNetworkObjectInfo
{
public:
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

UChannel* (*CreateChannel)(UNetConnection*, int, bool, int32_t);
__int64(*SetChannelActor)(UActorChannel*, AActor*);
void(*CallPreReplication)(AActor*, UNetDriver*);
bool(*ReplicateActor)(UActorChannel*);
void(*SendClientAdjustment)(AActor*);
static void* (*AddNetworkActor)(UWorld*, AActor*);
static char (*IsNetRelevantFor)(AActor*, AActor*, AActor*, FVector&);
void (*ActorChannelClose)(UActorChannel*, __int64, __int64, __int64);

std::vector<FNetworkObjectInfo*> PrivateObjectList;

UActorChannel* ReplicateToClient(AActor* InActor, UNetConnection* InConnection)
{
	if (InActor->IsA(APlayerController::StaticClass()) && InActor != InConnection->PlayerController)
		return nullptr;

	auto Channel = (UActorChannel*)(CreateChannel(InConnection, 2, true, -1));

	if (Channel) {
		SetChannelActor(Channel, InActor);
		Channel->Connection = InConnection;
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

std::vector<FNetworkObjectInfo*>& GetNetworkObjectList()
{
	return PrivateObjectList;
}

void BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList, float ServerTickTime)
{
	auto World = NetDriver->World;

	if (!World)
		return;

	auto TimeSeconds = Globals::GPS->STATIC_GetTimeSeconds(World);

	for (auto ActorInfo : GetNetworkObjectList())
	{
		if (!ActorInfo)
		{
			continue;
		}

		if (!ActorInfo->bPendingNetUpdate && TimeSeconds <= ActorInfo->NextUpdateTime)
			continue;

		auto Actor = ActorInfo->Actor;

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

		if (ActorInfo->LastNetReplicateTime == 0)
		{
			ActorInfo->LastNetReplicateTime = TimeSeconds;
			ActorInfo->OptimalNetUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
		}

		const float ScaleDownStartTime = 2.0f;
		const float ScaleDownTimeRange = 5.0f;

		const float LastReplicateDelta = TimeSeconds - ActorInfo->LastNetReplicateTime;

		if (LastReplicateDelta > ScaleDownStartTime)
		{
			if (Actor->MinNetUpdateFrequency == 0.0f)
			{
				Actor->MinNetUpdateFrequency = 2.0f;
			}

			const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;									  // Don't go faster than NetUpdateFrequency
			const float MaxOptimalDelta = Globals::MathLib->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta); // Don't go slower than MinNetUpdateFrequency (or NetUpdateFrequency if it's slower)

			const float Alpha = Globals::MathLib->STATIC_Clamp((LastReplicateDelta - ScaleDownStartTime) / ScaleDownTimeRange, 0.0f, 1.0f);
			ActorInfo->OptimalNetUpdateDelta = Globals::MathLib->STATIC_Lerp(MinOptimalDelta, MaxOptimalDelta, Alpha);
		}

		if (!ActorInfo->bPendingNetUpdate)
		{
			const float NextUpdateDelta = true ? ActorInfo->OptimalNetUpdateDelta : 1.0f / Actor->NetUpdateFrequency;

			ActorInfo->NextUpdateTime = TimeSeconds + Globals::MathLib->STATIC_RandomFloat() * ServerTickTime + NextUpdateDelta;
			ActorInfo->LastNetUpdateTime = NetDriver->Time;
		}

		ActorInfo->bPendingNetUpdate = false;

		if (Actor && NetDriver && &OutConsiderList && Actor->Name.ComparisonIndex != 0 && ActorInfo)
		{
			CallPreReplication(Actor, NetDriver);
			OutConsiderList.push_back(ActorInfo);
		}
	}
}

void ReplicateActors(UNetDriver* NetDriver)
{
	++*(DWORD*)(__int64(NetDriver) + 648);

	auto NumClientsToTick = PrepConnections(NetDriver);

	if (NumClientsToTick == 0)
		return;

	auto DeltaSeconds = Globals::GPS->STATIC_GetWorldDeltaSeconds(Globals::World);

	bool bCPUSaturated = false;
	float ServerTickTime = (*(float(__fastcall**)(UEngine*, __int64, __int64))(*(__int64*)__int64(Globals::FortEngine) + 632))(Globals::FortEngine, 0, 0);
	if (ServerTickTime == 0.f)
	{
		ServerTickTime = DeltaSeconds;
	}
	else
	{
		ServerTickTime = 1.f / ServerTickTime;
		bCPUSaturated = DeltaSeconds > 1.2f * ServerTickTime;
	}

	auto TimeSeconds = Globals::GPS->STATIC_GetTimeSeconds(Globals::World);

	std::vector<FNetworkObjectInfo*> ConsiderList = std::vector<FNetworkObjectInfo*>();
	BuildConsiderList(NetDriver, ConsiderList, ServerTickTime);

	for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
	{
		auto Connection = NetDriver->ClientConnections[i];

		if (!Connection)
			continue;

		if (i >= NumClientsToTick)
			break; // Only tick on ready connections

		if (Connection->PlayerController)
			SendClientAdjustment(Connection->PlayerController);

		for (auto ActorInfo : ConsiderList)
		{
			if (!ActorInfo)
				continue;

			if (!ActorInfo->Actor)
				continue;

			auto Channel = FindChannel(ActorInfo->Actor, Connection);

			if (!Channel)
				Channel = ReplicateToClient(ActorInfo->Actor, Connection);

			if (!ActorInfo->Actor->bAlwaysRelevant && Connection->PlayerController && !ActorInfo->Actor->bNetUseOwnerRelevancy && !ActorInfo->Actor->bOnlyRelevantToOwner)
			{
				auto Viewer = Connection->PlayerController->Pawn ? (AActor*)Connection->PlayerController->Pawn : Connection->PlayerController;
				auto Loc = Viewer->K2_GetActorLocation();
				if (!IsNetRelevantFor(ActorInfo->Actor, Viewer, Connection->ViewTarget, Loc))
				{
					continue;
				}
			}

			if (Channel)
			{
				if (ReplicateActor(Channel))
				{
					const float MinOptimalDelta = 1.0f / ActorInfo->Actor->NetUpdateFrequency;
					const float MaxOptimalDelta = Globals::MathLib->STATIC_Max(1.0f / ActorInfo->Actor->MinNetUpdateFrequency, MinOptimalDelta);
					const float DeltaBetweenReplications = (TimeSeconds - ActorInfo->LastNetReplicateTime);

					ActorInfo->OptimalNetUpdateDelta = Globals::MathLib->STATIC_Clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
					ActorInfo->LastNetReplicateTime = TimeSeconds;
				}
			}
		}
	}

	ConsiderList.empty();
	ConsiderList.clear();
}

static void* AddNetworkActorHook(UWorld* World, AActor* Actor)
{
	if (Actor)
	{
		auto ObjectInfo = new FNetworkObjectInfo();
		ObjectInfo->Actor = Actor;
		GetNetworkObjectList().push_back(ObjectInfo);
	}

	return AddNetworkActor(World, Actor);
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