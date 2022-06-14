#pragma once

#include "Inventory.h"
#include <fstream>

namespace Beacons
{
	bool bSetupCharPartArray = false;
	bool bSetupFloorLoot = false;
	bool bHasBattleBusStarted = false;

	AOnlineBeaconHost* Beacon;

	bool (*InitHost)(AOnlineBeaconHost*);
	__int64(*WelcomePlayer)(UWorld* This, UNetConnection* NetConnection);
	APlayerController* (*SpawnPlayActor)(UWorld* a1, UPlayer* a2, ENetRole a3, FURL a4, void* a5, FString& Src, uint8_t a7);
	void(*UWorld_NotifyControlMessage)(UWorld* World, UNetConnection* NetConnection, uint8_t a3, void* a4);

	void (*TickFlush)(UNetDriver*, float DeltaSeconds);
	void (*NotifyActorDestroyed)(UNetDriver*, AActor*, bool);
	bool (*DestroyActor)(UWorld*, AActor*, bool, bool);

	static void SpawnFloorLoot()
	{
		TArray<AActor*> OutActors;
		Globals::GPS->STATIC_GetAllActorsOfClass(Globals::World, UObject::FindClass("BlueprintGeneratedClass Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C"), &OutActors);

		for (int i = 0; i < OutActors.Num(); i++)
		{
			bool bShouldSpawn = Globals::MathLib->STATIC_RandomBoolWithWeight(0.6f);
			bool bIsConsumable = !Globals::MathLib->STATIC_RandomBoolWithWeight(0.2f);

			auto Actor = OutActors[i];

			if (Actor && bShouldSpawn)
			{
				auto SpawnLoc = Actor->K2_GetActorLocation();

				auto NewFortPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), SpawnLoc, FRotator()));

				NewFortPickup->PrimaryPickupItemEntry.Count = 1;
				if (bIsConsumable)
				{
					bool bEpicOrLeg = Globals::MathLib->STATIC_RandomBoolWithWeight(0.07);

					int Index = 0;

					if (bEpicOrLeg)
					{
						Index = Globals::MathLib->STATIC_RandomIntegerInRange(3, 4);
					}
					else {
						Index = Globals::MathLib->STATIC_RandomIntegerInRange(0, 2);
					}

					LOG("Index: " << Index);

					auto WeaponRarity = std::string(Globals::WeaponArrays.at(Index).c_str());

					if (WeaponRarity == "Common")
					{
						NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::CommonWeapons[rand() % Globals::CommonWeapons.size()];
					}

					if (WeaponRarity == "UnCommon")
					{
						NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::UnCommonWeapons[rand() % Globals::UnCommonWeapons.size()];
					}

					if (WeaponRarity == "Rare")
					{
						NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::RareWeapons[rand() % Globals::RareWeapons.size()];
					}

					if (WeaponRarity == "Epic")
					{
						NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::EpicWeapons[rand() % Globals::EpicWeapons.size()];
					}

					if (WeaponRarity == "Legendary")
					{
						NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::LegendaryWeapons[rand() % Globals::LegendaryWeapons.size()];
					}
				}
				else {
					NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::Consumables[rand() % Globals::Consumables.size()];
				}
				NewFortPickup->OnRep_PrimaryPickupItemEntry();
				NewFortPickup->TossPickup(SpawnLoc, nullptr, 1, true);

				if (bIsConsumable && NewFortPickup->PrimaryPickupItemEntry.ItemDefinition)
				{
					auto AmmoDefintion = ((UFortWorldItemDefinition*)NewFortPickup->PrimaryPickupItemEntry.ItemDefinition)->GetAmmoWorldItemDefinition_BP();
					auto AmmoPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), NewFortPickup->K2_GetActorLocation(), {}));
					AmmoPickup->PrimaryPickupItemEntry.Count = 15;
					AmmoPickup->PrimaryPickupItemEntry.ItemDefinition = AmmoDefintion;
					AmmoPickup->OnRep_PrimaryPickupItemEntry();
					AmmoPickup->TossPickup(SpawnLoc, nullptr, 999, true);
				}

				Actor->K2_DestroyActor();
				//LOG("Spawned Pickup: " << NewFortPickup->GetName() << " With weapon definition: " << NewFortPickup->PrimaryPickupItemEntry.ItemDefinition->GetName());
			}
		}
	}

	FVector GetPlayerStart()
	{
		TArray<AActor*> OutActors;
		Globals::GPS->STATIC_GetAllActorsOfClass(Globals::World, APlayerStart::StaticClass(), &OutActors);
		return OutActors[rand() % OutActors.Num()]->K2_GetActorLocation();
	}

	void __fastcall AOnlineBeaconHost_NotifyControlMessageHook(AOnlineBeaconHost* BeaconHost, UNetConnection* NetConnection, uint8_t a3, void* a4)
	{
		if (bHasBattleBusStarted)
		{
			return;
		}

		if (std::to_string(a3) == "4") {
			NetConnection->CurrentNetSpeed = 30000;
			return;
		}

		LOG("AOnlineBeaconHost::NotifyControlMessage Called! " << std::to_string(a3).c_str());
		LOG("Channel Count " << std::to_string(NetConnection->OpenChannels.Num()).c_str());
		return UWorld_NotifyControlMessage(Globals::World, NetConnection, a3, a4);
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

	void GrantGameplayAbilities(APlayerPawn_Athena_C* InPawn)
	{
		static auto AbilitySet = FindObjectFast<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

		for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
		{
			auto Ability = AbilitySet->GameplayAbilities[i];

			Abilities::GrantGameplayAbility(InPawn, Ability);
		}

		static auto ShootingAbility = FindObjectFast<UClass>("/Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C");
		if (ShootingAbility)
		{
			Abilities::GrantGameplayAbility(InPawn, ShootingAbility);
		}
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
			SpawnFloorLoot();
			bSetupFloorLoot = true;
		}

		auto PlayerController = (AFortPlayerControllerAthena*)SpawnPlayActor(Globals::World, Connection, NetRole, a4, a5, Src, a7);
		Connection->PlayerController = PlayerController;
		PlayerController->NetConnection = Connection;
		Connection->OwningActor = PlayerController;

		auto Pawn = (APlayerPawn_Athena_C*)(Util::SpawnActor(APlayerPawn_Athena_C::StaticClass(), GetPlayerStart(), {}));
		Pawn->bCanBeDamaged = false;
		Pawn->SetOwner(PlayerController);
		PlayerController->Possess(Pawn);

		Pawn->SetMaxHealth(100);
		Pawn->SetHealth(100);
		auto HealthSet = Pawn->HealthSet;
		HealthSet->CurrentShield.Minimum = 0;
		HealthSet->CurrentShield.Maximum = 100;
		HealthSet->CurrentShield.BaseValue = 0;
		HealthSet->Shield.Minimum = 0;
		HealthSet->Shield.Maximum = 100;
		HealthSet->Shield.BaseValue = 100;
		HealthSet->OnRep_Shield();
		HealthSet->OnRep_CurrentShield();

		PlayerController->ClientForceProfileQuery();

		auto RandomParts = Globals::CharacterParts[rand() % Globals::CharacterParts.size()];

		if (RandomParts.HeadPart)
		{
			Pawn->ServerChoosePart(EFortCustomPartType::Head, RandomParts.HeadPart);
		}

		if (RandomParts.BodyPart)
		{
			Pawn->ServerChoosePart(EFortCustomPartType::Body, RandomParts.BodyPart);
		}

		if (RandomParts.HatPart)
		{
			Pawn->ServerChoosePart(EFortCustomPartType::Hat, RandomParts.HatPart);
		}

		((AFortPlayerState*)Pawn->PlayerState)->OnRep_CharacterParts();

		Pawn->CharacterMovement->bReplicates = true;
		Pawn->SetReplicateMovement(true);
		Pawn->OnRep_ReplicatedBasedMovement();

		Pawn->OnRep_ReplicatedMovement();

		PlayerController->bHasServerFinishedLoading = true;
		PlayerController->OnRep_bHasServerFinishedLoading();

		auto PlayerState = (AFortPlayerStateAthena*)(PlayerController->PlayerState);

#ifdef DUOS
		auto TeamIndex = ((uint8_t)PlayerState->TeamIndex.GetValue() % 2 == 0) ? (uint8_t)PlayerState->TeamIndex.GetValue() - 1 : (uint8_t)PlayerState->TeamIndex.GetValue();
		PlayerState->TeamIndex = (EFortTeam)TeamIndex;
#endif

#ifdef SAME_TEAM
		PlayerState->TeamIndex = EFortTeam::HumanPvP_Team69;
#endif
		PlayerState->OnRep_TeamIndex();

		PlayerState->bHasFinishedLoading = true;
		PlayerState->bHasStartedPlaying = true;
		PlayerState->bIsGameSessionAdmin = true;
		PlayerState->bIsGameSessionOwner = true;
		PlayerState->bIsWorldDataOwner = true;
		PlayerState->bIsReadyToContinue = true;
		PlayerState->OnRep_bHasStartedPlaying();
		PlayerState->OnRep_CharacterParts();

		auto NewCheatManager = (UFortCheatManager*)(Globals::GPS->STATIC_SpawnObject(UFortCheatManager::StaticClass(), PlayerController));
		PlayerController->CheatManager = NewCheatManager;
		NewCheatManager->BackpackSetSize(5);

		auto NewInv = CreateInventoryForPlayerController(PlayerController);
		NewInv->SetupInventory();
		NewInv->CreateBuildPreviews();
		NewInv->UpdateInventory();

		PlayerState->OnRep_HeroType();
		PlayerState->OnRep_PlayerTeam();

		return PlayerController;
	}

	PVOID(*CollectGarbageInternal)(uint32_t, bool) = nullptr;
	PVOID CollectGarbageInternalHook(uint32_t KeepFlags, bool bPerformFullPurge)
	{
		return NULL;
	}

	__int64 (*OnReload)(UObject* a1, unsigned int a2);
	__int64 __fastcall OnReloadHook(AFortWeapon* Weapon, unsigned int a2)
	{
		if (Weapon)
		{
			auto ItemDefiniton = (UFortWeaponItemDefinition*)Weapon->WeaponData;
			auto AmmoDef = ItemDefiniton->GetAmmoWorldItemDefinition_BP();
			
			if (AmmoDef == nullptr)
				AmmoDef = ItemDefiniton;

			LOG("Reload Cost ItemDef: " << AmmoDef->GetName());
			LOG("Removing " << a2 << " Ammo!");

			auto Pawn = (APawn*)Weapon->Owner;
			auto Controller = (AFortPlayerController*)Pawn->Controller;
			auto WorldInventory = reinterpret_cast<InventoryPointer*>(Controller)->WorldInventory;

			for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
			{
				auto ItemInstance = WorldInventory->Inventory.ItemInstances[i];

				if (ItemInstance->GetItemDefinitionBP() == AmmoDef)
				{
					int newCount = ItemInstance->ItemEntry.Count - a2;

					WorldInventory->Inventory.ItemInstances.Remove(i);

					for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
					{
						auto Entry = WorldInventory->Inventory.ReplicatedEntries[j];

						if (Entry.ItemDefinition == AmmoDef)
						{
							WorldInventory->Inventory.ReplicatedEntries.Remove(j);
						}
					}

					if (newCount != 0)
					{
						auto NewWorldItem = (UFortWorldItem*)(AmmoDef->CreateTemporaryItemInstanceBP(newCount, 1));

						WorldInventory->Inventory.ReplicatedEntries.Add(NewWorldItem->ItemEntry);
						WorldInventory->Inventory.ItemInstances.Add(NewWorldItem);
					}
				}
			}

			FindInventory(Controller)->UpdateInventory();
		}
		return OnReload(Weapon, a2);
	}

	__int64 (*OnBuild)(UObject*, void*);
	__int64 __fastcall OnBuildHook(AFortPlayerController* Controller, void* a2)
	{
		if (Controller)
		{
			UFortResourceItemDefinition* ResourceDef = nullptr;

			if (Controller->CurrentResourceType == EFortResourceType::Wood)
				ResourceDef = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

			if (Controller->CurrentResourceType == EFortResourceType::Stone)
				ResourceDef = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");

			if (Controller->CurrentResourceType == EFortResourceType::Metal)
				ResourceDef = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

			if (ResourceDef)
			{
				auto WorldInventory = reinterpret_cast<InventoryPointer*>(Controller)->WorldInventory;

				for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
				{
					auto ItemInstance = WorldInventory->Inventory.ItemInstances[i];

					if (ItemInstance->GetItemDefinitionBP() == ResourceDef)
					{
						int newCount = ItemInstance->ItemEntry.Count - 10;

						WorldInventory->Inventory.ItemInstances.Remove(i);

						for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
						{
							auto Entry = WorldInventory->Inventory.ReplicatedEntries[j];

							if (Entry.ItemDefinition == ResourceDef)
							{
								WorldInventory->Inventory.ReplicatedEntries.Remove(j);
							}
						}

						if (newCount != 0)
						{
							auto NewWorldItem = (UFortWorldItem*)(ResourceDef->CreateTemporaryItemInstanceBP(newCount, 1));

							WorldInventory->Inventory.ReplicatedEntries.Add(NewWorldItem->ItemEntry);
							WorldInventory->Inventory.ItemInstances.Add(NewWorldItem);
						}
					}
				}

				FindInventory(Controller)->UpdateInventory();
			}
		}

		return OnBuild(Controller, a2);
	}

	__int64 (*OnRepair)(UObject* a1, int);
	__int64 OnRepairHook(UObject* a1, int a2)
	{
		LOG("Shit: " << a1->GetFullName());
		return OnRepair(a1, a2);
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
		NotifyActorDestroyed = decltype(NotifyActorDestroyed)(BaseAddr + Offsets::NotifyActorDestroyed);

		MH_CreateHook((void*)(AOnlineBeaconHost_NotifyControlMessageAddr), AOnlineBeaconHost_NotifyControlMessageHook, nullptr);
		MH_EnableHook((void*)(AOnlineBeaconHost_NotifyControlMessageAddr));
		MH_CreateHook((void*)(WelcomePlayerAddr), WelcomePlayerHook, (void**)(&WelcomePlayer));
		MH_EnableHook((void*)(WelcomePlayerAddr));
		MH_CreateHook((void*)(SpawnPlayActorAddr), SpawnPlayActorHook, (void**)(&SpawnPlayActor));
		MH_EnableHook((void*)(SpawnPlayActorAddr));
		MH_CreateHook((void*)(BaseAddr + Offsets::KickPatch), KickPatch, nullptr);
		MH_EnableHook((void*)(BaseAddr + Offsets::KickPatch));

		auto pCollectGarbageInternalAddress = Util::FindPattern("\x48\x8B\xC4\x48\x89\x58\x08\x88\x50\x10", "xxxxxxxxxx");
		MH_CreateHook(static_cast<LPVOID>(pCollectGarbageInternalAddress), CollectGarbageInternalHook, reinterpret_cast<LPVOID*>(&CollectGarbageInternal));
		MH_EnableHook(static_cast<LPVOID>(pCollectGarbageInternalAddress));

		MH_CreateHook((void*)(BaseAddr + Offsets::OnReload), OnReloadHook, (void**)(&OnReload));
		MH_EnableHook((void*)(BaseAddr + Offsets::OnReload));
		MH_CreateHook((void*)(BaseAddr + Offsets::OnBuild), OnBuildHook, (void**)(&OnBuild));
		MH_EnableHook((void*)(BaseAddr + Offsets::OnBuild));

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

			LOG("Server is now listening!");
		}
	}
}