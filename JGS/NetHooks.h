#pragma once

#include "Inventory.h"

namespace Beacons
{
	AOnlineBeaconHost* Beacon;

	bool (*InitHost)(AOnlineBeaconHost*);
	__int64(*WelcomePlayer)(UWorld* This, UNetConnection* NetConnection);
	APlayerController* (*SpawnPlayActor)(UWorld* a1, UPlayer* a2, ENetRole a3, FURL a4, void* a5, FString& Src, uint8_t a7);
	void(*UWorld_NotifyControlMessage)(UWorld* World, UNetConnection* NetConnection, uint8_t a3, void* a4);

	void (*TickFlush)(UNetDriver*, float DeltaSeconds);
	void (*NotifyActorDestroyed)(UNetDriver*, AActor*, bool);

	FVector GetPlayerStart()
	{
		TArray<AActor*> OutActors;
		Globals::GPS->STATIC_GetAllActorsOfClass(Globals::World, APlayerStart::StaticClass(), &OutActors);
		return OutActors[rand() % OutActors.Num()]->K2_GetActorLocation();
	}

	void __fastcall AOnlineBeaconHost_NotifyControlMessageHook(AOnlineBeaconHost* BeaconHost, UNetConnection* NetConnection, uint8_t a3, void* a4)
	{
		if (std::to_string(a3) == "4") {
			NetConnection->CurrentNetSpeed = 30000;
			return;
		}

		LOG("AOnlineBeaconHost::NotifyControlMessage Called! " << std::to_string(a3).c_str());
		LOG("Channel Count " << std::to_string(NetConnection->OpenChannels.Num()).c_str());
		return UWorld_NotifyControlMessage(Globals::World, NetConnection, a3, a4);
	}

	void NotifyActorDestroyedHook(UNetDriver* NetDriver, AActor* Actor, bool IsSeamlessTravel)
	{
		LOG("Trying to destroy actor: " << Actor->GetName());

		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			auto Connection = NetDriver->ClientConnections[i];

			if (Connection)
			{
				auto ActorChannel = Replication::FindChannel(Actor, Connection);
				if (!ActorChannel)
					return;

				if (ActorChannel)
				{
					Replication::ActorChannelClose(ActorChannel);
				}
			}
		}

		return;
	}

	void TickFlushHook(UNetDriver* NetDriver, float DeltaSeconds)
	{
		Replication::ReplicateActors(NetDriver);

		return TickFlush(NetDriver, DeltaSeconds);
	}

	__int64 KickPatch(__int64, __int64)
	{
		return 0;
	}

	__int64 __fastcall WelcomePlayerHook(UWorld*, UNetConnection* NetConnection)
	{
		LOG("Welcoming Player!");
		return WelcomePlayer(Globals::World, NetConnection);
	}

	APlayerController* SpawnPlayActorHook(UWorld*, UNetConnection* Connection, ENetRole NetRole, FURL a4, void* a5, FString& Src, uint8_t a7)
	{
		auto PlayerController = (AFortPlayerControllerAthena*)SpawnPlayActor(Globals::World, Connection, NetRole, a4, a5, Src, a7);
		Connection->PlayerController = PlayerController;
		PlayerController->NetConnection = Connection;
		Connection->OwningActor = PlayerController;

		auto Pawn = (APlayerPawn_Athena_C*)(Util::SpawnActor(APlayerPawn_Athena_C::StaticClass(), GetPlayerStart(), {}));
		Pawn->SetOwner(PlayerController);
		PlayerController->Possess(Pawn);

		PlayerController->ClientForceProfileQuery();
		Pawn->OnRep_CustomizationLoadout();

		Pawn->ServerChoosePart(EFortCustomPartType::Head, Globals::HeadPart);
		Pawn->ServerChoosePart(EFortCustomPartType::Body, Globals::BodyPart);
		((AFortPlayerStateAthena*)Pawn)->OnRep_CharacterParts();

		Pawn->CharacterMovement->bReplicates = true;
		Pawn->SetReplicateMovement(true);
		Pawn->OnRep_ReplicatedBasedMovement();

		Pawn->OnRep_ReplicatedMovement();

		PlayerController->bHasServerFinishedLoading = true;
		PlayerController->OnRep_bHasServerFinishedLoading();

		auto PlayerState = (AFortPlayerStateAthena*)(PlayerController->PlayerState);

		PlayerState->TeamIndex = EFortTeam::HumanPvP_Team69;
		PlayerState->SquadId = 70;
		PlayerState->OnRep_SquadId();
		PlayerState->OnRep_PlayerTeam();

		PlayerState->bHasFinishedLoading = true;
		PlayerState->bHasStartedPlaying = true;
		PlayerState->OnRep_bHasStartedPlaying();
		PlayerState->OnRep_CharacterParts();

		auto NewCheatManager = (UFortCheatManager*)(Globals::GPS->STATIC_SpawnObject(UFortCheatManager::StaticClass(), PlayerController));
		PlayerController->CheatManager = NewCheatManager;

		Inventory::SetupInventory(PlayerController);
		Inventory::UpdateInventory(PlayerController);

		PlayerState->OnRep_HeroType();

		PlayerController->ClientRestart(Pawn);

		return PlayerController;
	}

	void InitHooks()
	{
		Replication::InitOffsets();

		auto BaseAddr = Util::BaseAddress();

		UWorld_NotifyControlMessage = decltype(UWorld_NotifyControlMessage)(BaseAddr + Offsets::WorldNotifyControlMessage);

		auto AOnlineBeaconHost_NotifyControlMessageAddr = BaseAddr + Offsets::BeaconNotifyControlMessage;

		auto WelcomePlayerAddr = BaseAddr + Offsets::WelcomePlayer;
		auto SpawnPlayActorAddr = BaseAddr + Offsets::SpawnPlayActor;
		auto TickFlushAddr = BaseAddr + Offsets::TickFlush;

		InitHost = decltype(InitHost)(BaseAddr + Offsets::InitHost);
		TickFlush = decltype(TickFlush)(TickFlushAddr);
		SpawnPlayActor = decltype(SpawnPlayActor)(SpawnPlayActorAddr);

		MH_CreateHook((void*)(AOnlineBeaconHost_NotifyControlMessageAddr), AOnlineBeaconHost_NotifyControlMessageHook, nullptr);
		MH_EnableHook((void*)(AOnlineBeaconHost_NotifyControlMessageAddr));
		MH_CreateHook((void*)(WelcomePlayerAddr), WelcomePlayerHook, (void**)(&WelcomePlayer));
		MH_EnableHook((void*)(WelcomePlayerAddr));
		MH_CreateHook((void*)(SpawnPlayActorAddr), SpawnPlayActorHook, (void**)(&SpawnPlayActor));
		MH_EnableHook((void*)(SpawnPlayActorAddr));
		MH_CreateHook((void*)(BaseAddr + Offsets::KickPatch), KickPatch, nullptr);
		MH_EnableHook((void*)(BaseAddr + Offsets::KickPatch));

		Beacon = (AOnlineBeaconHost*)(Util::SpawnActor(AOnlineBeaconHost::StaticClass(), {}, {}));
		Beacon->ListenPort = 7777;
		if (InitHost(Beacon))
		{
			Beacon->NetDriver->World = Globals::World;
			Globals::World->LevelCollections[0].NetDriver = Beacon->NetDriver;
			Globals::World->LevelCollections[1].NetDriver = Beacon->NetDriver;

			((AOnlineBeacon*)Beacon)->BeaconState = 0;

			MH_CreateHook((void*)(TickFlushAddr), TickFlushHook, (void**)(&TickFlush));
			MH_EnableHook((void*)(TickFlushAddr));
			MH_CreateHook((void*)(BaseAddr + Offsets::NotifyActorDestroyed), NotifyActorDestroyedHook, (void**)(&NotifyActorDestroyed));
			MH_EnableHook((void*)(BaseAddr + Offsets::NotifyActorDestroyed));

			LOG("Server is now listening!");
		}
	}
}