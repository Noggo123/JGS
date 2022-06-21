#pragma once

#include "Inventory.h"
#include <fstream>

namespace Beacons
{
	bool bSetupCharPartArray = false;
	bool bSetupFloorLoot = false;

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

	PVOID(*CollectGarbageInternal)(uint32_t, bool) = nullptr;
	PVOID CollectGarbageInternalHook(uint32_t KeepFlags, bool bPerformFullPurge)
	{
		return NULL;
	}

	void InitHooks()
	{
		Replication::InitOffsets();

		auto pCollectGarbageInternalAddress = Util::FindPattern("\x48\x8B\xC4\x48\x89\x58\x08\x88\x50\x10", "xxxxxxxxxx");
		MH_CreateHook(static_cast<LPVOID>(pCollectGarbageInternalAddress), CollectGarbageInternalHook, reinterpret_cast<LPVOID*>(&CollectGarbageInternal));
		MH_EnableHook(static_cast<LPVOID>(pCollectGarbageInternalAddress));

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