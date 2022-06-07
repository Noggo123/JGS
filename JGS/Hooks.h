#pragma once

namespace Hooks
{
	bool bSTWMode = true;

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
					if (bSTWMode)
					{
						NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::STWWeapons[rand() % Globals::STWWeapons.size()];
						NewFortPickup->PrimaryPickupItemEntry.Durability = 1000000;
					}
					else {
						NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::RangedWeapons[rand() % Globals::RangedWeapons.size()];
					}
				}
				else {
					NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::Consumables[rand() % Globals::Consumables.size()];
				}
				NewFortPickup->OnRep_PrimaryPickupItemEntry();

				NewFortPickup->TossPickup(SpawnLoc, nullptr, 1);

				//LOG("Spawned Pickup: " << NewFortPickup->GetName() << " With weapon definition: " << NewFortPickup->PrimaryPickupItemEntry.ItemDefinition->GetName());
			}
		}
	}

	FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystem, FGameplayAbilitySpecHandle Handle)
	{
		for (int i = 0; i < AbilitySystem->ActivatableAbilities.Items.Num(); i++)
		{
			auto Spec = AbilitySystem->ActivatableAbilities.Items[i];

			if (Spec.Handle.Handle == Handle.Handle)
			{
				return &Spec;
			}
		}

		return nullptr;
	}

	bool (*InternalTryActivateAbilityLong)(UAbilitySystemComponent* AbilitySystemComp, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData);

	bool InternalTryActivateAbility(UAbilitySystemComponent* AbilitySystemComp, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey = FPredictionKey(), UGameplayAbility** OutInstancedAbility = nullptr, void* OnGameplayAbilityEndedDelegate = nullptr, const FGameplayEventData* TriggerEventData = nullptr)
	{
		return InternalTryActivateAbilityLong(AbilitySystemComp, AbilityToActivate, InPredictionKey, OutInstancedAbility, OnGameplayAbilityEndedDelegate, TriggerEventData);
	}

	bool bIsReady = false;
	bool bHasSpawned = false;
	bool bIsInGame = false;
	bool bHasInitedTheBeacon = false;

	LPVOID(*ProcessEvent)(void*, void*, void*);
	LPVOID ProcessEventHook(UObject* pObject, UFunction* pFunction, LPVOID pParams)
	{
		auto ObjName = pObject->GetName();
		auto FuncName = pFunction->GetName();

		if (FuncName.contains("Tick"))
		{
			if (GetAsyncKeyState(VK_F1) & 1)
			{
				SpawnFloorLoot();
			}

			if (GetAsyncKeyState(VK_F2) & 1)
			{
				if (Beacons::Beacon->BeaconState == 0)
					Beacons::Beacon->BeaconState = 1;
				else
					Beacons::Beacon->BeaconState = 0;
			}
		}

		if (FuncName.find("AircraftExitedDropZone") != std::string::npos)
		{
			for (int i = 0; i < Beacons::Beacon->NetDriver->ClientConnections.Num(); i++)
			{
				auto Connection = Beacons::Beacon->NetDriver->ClientConnections[i];

				if (Connection && Connection->PlayerController)
				{
					auto FortPlayerController = (AFortPlayerControllerAthena*)(Connection->PlayerController);

					if (FortPlayerController->IsInAircraft() && FortPlayerController->Pawn /*Check if the pawn is still on spawn island if its not than they are dead!*/)
					{
						FortPlayerController->ServerAttemptAircraftJump({});
					}
				}
			}
		}

		if (FuncName.contains("ReadyToStartMatch"))
		{
			if (!bHasInitedTheBeacon) {
				Globals::FortEngine = UObject::FindObject<UFortEngine>("FortEngine_");
				Globals::World = Globals::FortEngine->GameViewport->World;
				Globals::PC = reinterpret_cast<AFortPlayerController*>(Globals::FortEngine->GameInstance->LocalPlayers[0]->PlayerController);

				Beacons::InitHooks(); //Sets up the beacon and inits replication for use!

				bHasInitedTheBeacon = true;

				Globals::World->AuthorityGameMode->GameSession->MaxPlayers = 50;
				((AFortGameModeAthena*)Globals::World->AuthorityGameMode)->bAlwaysDBNO = true;
				((AGameMode*)Globals::World->AuthorityGameMode)->StartMatch();

				Discord::UpdateStatus("Server is now up and joinable!");

				StaticLoadObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");
			}
		}

		if (pFunction->FunctionFlags & 0x01000000 || pFunction->FunctionFlags & 0x00200000 &&
			!FuncName.contains("UpdateCamera") &&
			!FuncName.contains("NoBase"))
		{
			if (!FuncName.contains("ClientAckGoodMove") &&
				!FuncName.contains("ServerMove") &&
				!FuncName.contains("ClientAdjustPosition"))
			{
				//LOG("RPC: " << FuncName);
			}
		}

		/////////// RPCS ////////////

		//My shitty attempt at getting gameplay abilities working
		if (FuncName.contains("ServerTryActivateAbility"))
		{
			auto Params = (UAbilitySystemComponent_ServerTryActivateAbility_Params*)pParams;
			auto AbilitySystemComp = (UAbilitySystemComponent*)pObject;

			auto AbilityToActivate = Params->AbilityToActivate;
			auto PredictionKey = Params->PredictionKey;

			UGameplayAbility* InstancedAbility = nullptr;

			InternalTryActivateAbilityLong(AbilitySystemComp, AbilityToActivate, PredictionKey, &InstancedAbility, nullptr, nullptr);

			return NULL;
		}

		if (FuncName.contains("ServerReadyToStartMatch"))
		{
			auto PC = (AFortPlayerController*)pObject;
			PC->bReadyToStartMatch = true;
		}

		if (FuncName.contains("ServerClientPawnLoaded"))
		{
			auto PC = (AFortPlayerController*)pObject;
			auto Params = (AFortPlayerController_ServerClientPawnLoaded_Params*)pParams;
			PC->bClientPawnIsLoaded = Params->bIsPawnLoaded;
		}

		if (FuncName.contains("ServerSetClientHasFinishedLoading"))
		{
			auto PC = (AFortPlayerController*)pObject;
			auto Params = (AFortPlayerController_ServerSetClientHasFinishedLoading_Params*)pParams;
			PC->bHasClientFinishedLoading = Params->bInHasFinishedLoading;
		}

		if (FuncName.contains("ServerExecuteInventoryItem"))
		{
			auto PC = (AFortPlayerController*)pObject;
			auto Params = (AFortPlayerController_ServerExecuteInventoryItem_Params*)pParams;

			if (PC)
			{
				FindInventory(PC)->ExecuteInventoryItem(Params->ItemGuid);
			}
		}

		if (FuncName.contains("ServerReturnToMainMenu"))
		{
			auto PC = (AFortPlayerController*)pObject;
			PC->ClientTravel(L"/Game/Maps/Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());
		}

		if (FuncName.contains("ServerHandlePickup"))
		{
			auto Pawn = (AFortPlayerPawn*)pObject;
			auto Params = (AFortPlayerPawn_ServerHandlePickup_Params*)pParams;

			if (Pawn)
			{
				auto PC = (AFortPlayerController*)Pawn->Controller;
				if (PC)
				{
					auto WorldInventory = reinterpret_cast<InventoryPointer*>(PC)->WorldInventory;
					if (WorldInventory)
					{
						auto PickupEntry = Params->Pickup->PrimaryPickupItemEntry;
						auto PickupDef = PickupEntry.ItemDefinition;
						auto NewPickupWorldItem = (UFortWorldItem*)PickupDef->CreateTemporaryItemInstanceBP(PickupEntry.Count, 1);
						NewPickupWorldItem->ItemEntry = PickupEntry;

						WorldInventory->Inventory.ItemInstances.Add(NewPickupWorldItem);
						WorldInventory->Inventory.ReplicatedEntries.Add(NewPickupWorldItem->ItemEntry);

						FindInventory((AFortPlayerController*)PC)->UpdateInventory();
					}
				}
			}
		}

		if (FuncName.contains("ServerSpawnInventoryDrop"))
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;
			auto Params = (AFortPlayerController_ServerSpawnInventoryDrop_Params*)pParams;

			if (PC->IsInAircraft())
				return NULL;

			if (PC)
			{
				auto WorldInventory = reinterpret_cast<InventoryPointer*>(PC)->WorldInventory;
				if (WorldInventory)
				{
					auto ItemInstances = WorldInventory->Inventory.ItemInstances;
					for (int i = 0; i < ItemInstances.Num(); i++)
					{
						auto ItemInstance = ItemInstances[i];
						if (Util::AreGuidsTheSame(ItemInstance->GetItemGuid(), Params->ItemGuid))
						{
							auto Entry = ItemInstance->ItemEntry;
							auto ItemDefintion = ItemInstance->GetItemDefinitionBP();

							int Count = 0;

							if (Params->Count == Entry.Count) //Remove it from the array
							{
								ItemInstances.Remove(i);

								for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
								{
									auto Entry = WorldInventory->Inventory.ReplicatedEntries[j];

									Count = Entry.Count;

									if (Util::AreGuidsTheSame(Entry.ItemGuid, Params->ItemGuid))
									{
										WorldInventory->Inventory.ReplicatedEntries.Remove(j);
									}
								}
							} else {
								ItemInstance->ItemEntry.Count = Entry.Count - Params->Count;
								Count = Params->Count;
							}

							auto NewFortPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), PC->Pawn->K2_GetActorLocation(), FRotator()));

							NewFortPickup->PrimaryPickupItemEntry.Count = Count;
							NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDefintion;
							NewFortPickup->OnRep_PrimaryPickupItemEntry();

							NewFortPickup->TossPickup(PC->Pawn->K2_GetActorLocation(), nullptr, 1);

							FindInventory(PC)->UpdateInventory();
						}
					}
				}
			}
		}

		if (FuncName.contains("ServerAttemptAircraftJump"))
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;

			if (PC->Pawn)
				PC->Pawn->K2_DestroyActor(); //Destroy old pawn on spawn island

			auto NewPawn = (APlayerPawn_Athena_C*)(Util::SpawnActor(APlayerPawn_Athena_C::StaticClass(), ((AFortGameStateAthena*)Globals::World->GameState)->GetAircraft()->K2_GetActorLocation(), {}));
			if (NewPawn) {
				PC->Possess(NewPawn);
				auto HealthSet = NewPawn->HealthSet;
				HealthSet->CurrentShield.Minimum = 0;
				HealthSet->CurrentShield.Maximum = 100;
				HealthSet->CurrentShield.BaseValue = 100;
				HealthSet->Shield.Minimum = 0;
				HealthSet->Shield.Maximum = 100;
				HealthSet->Shield.BaseValue = 100;
				HealthSet->OnRep_Shield();
				HealthSet->OnRep_CurrentShield();
			}
		}

		if (FuncName.contains("ServerAbilityRPCBatch"))
		{
			auto AbilityComp = (UAbilitySystemComponent*)pObject;
			auto CurrentParams = (UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)pParams;

			FGameplayAbilitySpec* FoundSpec = FindAbilitySpecFromHandle(AbilityComp, CurrentParams->BatchInfo.AbilitySpecHandle);

			if (FoundSpec && FoundSpec->Ability)
			{
				if (FoundSpec->Ability->GetName().contains("GenericDamage"))
				{
					UGameplayAbility* InstancedAbility = nullptr;
					InternalTryActivateAbilityLong(AbilityComp, CurrentParams->BatchInfo.AbilitySpecHandle, CurrentParams->BatchInfo.PredictionKey, &InstancedAbility, nullptr, &FoundSpec->Ability->CurrentEventData);
				}
			}
		}

		if (FuncName.contains("ServerLoadingScreenDropped"))
		{
			auto PC = (AFortPlayerController*)pObject;
			auto Pawn = (APlayerPawn_Athena_C*)PC->Pawn;

			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Beacons::GrantGameplayAbilities, Pawn, 0, 0);
		}

		if (FuncName.contains("ServerAttemptInteract"))
		{
			auto PlayerController = (AFortPlayerControllerAthena*)pObject;
			auto CurrentParams = (AFortPlayerController_ServerAttemptInteract_Params*)pParams;

			auto ReceivingActor = CurrentParams->ReceivingActor;

			if (ReceivingActor && ReceivingActor->Class->GetName().contains("Tiered_Chest"))
			{
				auto Chest = (ABuildingContainer*)ReceivingActor;
				Chest->bAlreadySearched = true;
				Chest->OnSetSearched();
				Chest->OnRep_bAlreadySearched();

				auto Location = ReceivingActor->K2_GetActorLocation();

				auto NewFortPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup->PrimaryPickupItemEntry.Count = 1;
				if (bSTWMode)
				{
					NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::STWWeapons[rand() % Globals::STWWeapons.size()];
					NewFortPickup->PrimaryPickupItemEntry.Durability = 1000000;
				}
				else {
					NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = Globals::RangedWeapons[rand() % Globals::RangedWeapons.size()];
				}
				NewFortPickup->OnRep_PrimaryPickupItemEntry();
				NewFortPickup->TossPickup(Location, nullptr, 1);

				auto NewFortPickup1 = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup1->PrimaryPickupItemEntry.Count = 1;
				NewFortPickup1->PrimaryPickupItemEntry.ItemDefinition = Globals::Consumables[rand() % Globals::Consumables.size()];
				NewFortPickup1->OnRep_PrimaryPickupItemEntry();
				NewFortPickup1->TossPickup(Location, nullptr, 1);

				return NULL;
			}
		}

		if (FuncName.contains("ReceiveDestroyed") && Beacons::Beacon)
		{
			auto Actor = (AActor*)pObject;

			if (Beacons::NotifyActorDestroyed && Beacons::Beacon->NetDriver)
				Beacons::NotifyActorDestroyed(Beacons::Beacon->NetDriver, Actor, false);
		}

		/////////// RPCS ////////////

		return ProcessEvent(pObject, pFunction, pParams);
	}

	void Init()
	{
		auto FEVFT = *reinterpret_cast<void***>(Globals::FortEngine);
		auto PEAddr = FEVFT[62];

		MH_CreateHook(reinterpret_cast<LPVOID>(PEAddr), ProcessEventHook, reinterpret_cast<LPVOID*>(&ProcessEvent));
		MH_EnableHook(reinterpret_cast<LPVOID>(PEAddr));
	}
}