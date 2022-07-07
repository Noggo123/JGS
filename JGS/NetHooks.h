#pragma once

#include "Inventory.h"
#include <fstream>

namespace Beacons
{
	bool bSetupCharPartArray = false;
	bool bSetupFloorLoot = false;
	bool bMadeEverythingSearched = false;

	bool (*InitHost)(AOnlineBeaconHost*);
	APlayerController* (*SpawnPlayActor)(UWorld* a1, UPlayer* a2, ENetRole a3, FURL a4, void* a5, FString& Src, uint8_t a7);
	void (*TickFlush)(UNetDriver*, float DeltaSeconds);
	void (*SetWorld)(UNetDriver*, UWorld*);

	void TickFlushHook(UNetDriver* NetDriver, float DeltaSeconds)
	{
		Replication::ReplicateActors(NetDriver);

		return TickFlush(NetDriver, DeltaSeconds);
	}

	APlayerController* SpawnPlayActorHook(UWorld*, UNetConnection* Connection, ENetRole NetRole, FURL a4, void* a5, FString& Src, uint8_t a7)
	{
		if (!bSetupCharPartArray)
		{
			LoadCharacterParts();
			bSetupCharPartArray = true;
		}

		if (!bSetupFloorLoot)
		{
			GPFuncs::SpawnFloorLoot();
			bSetupFloorLoot = true;
		}

		if (!bMadeEverythingSearched)
		{
			//GPFuncs::MakeEverythingSearched();
			bMadeEverythingSearched = true;
		}

		auto PlayerController = (AFortPlayerControllerAthena*)SpawnPlayActor(Globals::World, Connection, NetRole, a4, a5, Src, a7);
		Connection->PlayerController = PlayerController;
		PlayerController->NetConnection = Connection;
		Connection->OwningActor = PlayerController;

		GPFuncs::SpawnPlayer(PlayerController);

		return PlayerController;
	}

	int64_t KickPatch()
	{
		return 0;
	}

	void InitHooks()
	{
		auto BaseAddr = Util::BaseAddress();
		InitHost = decltype(InitHost)(BaseAddr + Offsets::InitHost);
		SetWorld = decltype(SetWorld)(BaseAddr + Offsets::SetWorld);

		auto Beacon = (AOnlineBeaconHost*)(Util::SpawnActor(AOnlineBeaconHost::StaticClass(), {}, {}));
		Beacon->ListenPort = 7777;

		if (!InitHost(Beacon))
		{
			LOG("InitHost failed!");
			return;
		}

		Globals::World->NetDriver = Beacon->NetDriver;
		SetWorld(Globals::World->NetDriver, Globals::World);
		Globals::World->NetDriver->NetDriverName.ComparisonIndex = 282;
		Globals::World->LevelCollections[0].NetDriver = Globals::World->NetDriver;
		Globals::World->LevelCollections[1].NetDriver = Globals::World->NetDriver;

		MH_CreateHook((LPVOID)(BaseAddr + Offsets::TickFlush), TickFlushHook, (LPVOID*)(&TickFlush));
		MH_EnableHook((LPVOID)(BaseAddr + Offsets::TickFlush));
		MH_CreateHook((LPVOID)(BaseAddr + Offsets::SpawnPlayActor), SpawnPlayActorHook, (LPVOID*)(&SpawnPlayActor));
		MH_EnableHook((LPVOID)(BaseAddr + Offsets::SpawnPlayActor));
		MH_CreateHook((LPVOID)(BaseAddr + Offsets::KickPatch), KickPatch, nullptr);
		MH_EnableHook((LPVOID)(BaseAddr + Offsets::KickPatch));

		Misc::Init();
	}
}