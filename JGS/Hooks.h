#pragma once

#include <algorithm>
#include <time.h>
#include <vector>

#include "StringUtils.h"

namespace Hooks
{
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

	char (*InternalTryActivateAbilityLong)(UAbilitySystemComponent* AbilitySystemComp, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData);

	bool bIsReady = false;
	bool bHasSpawned = false;
	bool bIsInGame = false;
	bool bHasInitedTheBeacon = false;

	LPVOID(*ProcessEvent)(void*, void*, void*);
	LPVOID ProcessEventHook(UObject* pObject, UFunction* pFunction, LPVOID pParams)
	{
		auto ObjName = pObject->GetName();
		auto FuncName = pFunction->GetName();

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
				Globals::World->AuthorityGameMode->GameSession->MaxPlayers = 100;

#ifdef DUOS
				((AFortGameStateAthena*)Globals::World->GameState)->CurrentPlaylistId = 10;
#else
				((AFortGameStateAthena*)Globals::World->GameState)->CurrentPlaylistId = 2;
#endif

#ifdef DBNO_ENABLED
				((AFortGameModeAthena*)Globals::World->AuthorityGameMode)->bAlwaysDBNO = true;
#endif
				((AGameMode*)Globals::World->AuthorityGameMode)->StartMatch();

				Globals::PC->CheatManager->DestroyAll(APlayerController::StaticClass());

				Discord::UpdateStatus("Server is now up and joinable!");

				StaticLoadObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");
			}
		}

#ifdef LOG_RPCS
		if (pFunction->FunctionFlags & 0x01000000 || pFunction->FunctionFlags & 0x00200000 &&
			!FuncName.contains("UpdateCamera") &&
			!FuncName.contains("NoBase"))
		{
			if (!FuncName.contains("ClientAckGoodMove") &&
				!FuncName.contains("ServerMove") &&
				!FuncName.contains("ClientAdjustPosition"))
			{
				LOG("RPC: " << FuncName);
			}
		}
#endif

		/////////// RPCS ////////////

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
			auto PC = (AFortPlayerControllerAthena*)pObject;
			auto Params = (AFortPlayerController_ServerExecuteInventoryItem_Params*)pParams;

			if (PC->IsInAircraft())
				return ProcessEvent(pObject, pFunction, pParams);

			if (PC)
			{
				auto Inv = FindInventory(PC);
				if (Inv)
				{
					Inv->ExecuteInventoryItem(Params->ItemGuid);
				}
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
					auto QuickBars = reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars;
					if (WorldInventory)
					{
						auto PickupEntry = Params->Pickup->PrimaryPickupItemEntry;
						auto PickupDef = PickupEntry.ItemDefinition;

						int Count = 0;

						for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
						{
							auto ItemInstance = WorldInventory->Inventory.ItemInstances[i];

							if (ItemInstance->GetItemDefinitionBP() == PickupDef && !PickupDef->IsA(UFortWeaponItemDefinition::StaticClass()))
							{
								WorldInventory->Inventory.ItemInstances.Remove(i);

								for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
								{
									auto Entry = WorldInventory->Inventory.ReplicatedEntries[j];

									if (Entry.ItemDefinition == PickupDef && !PickupDef->IsA(UFortWeaponItemDefinition::StaticClass()))
									{
										WorldInventory->Inventory.ReplicatedEntries.Remove(j);
										Count = Entry.Count;
									}
								}
							}
						}

						auto NewPickupWorldItem = (UFortWorldItem*)PickupDef->CreateTemporaryItemInstanceBP(PickupEntry.Count + Count, 1);
						NewPickupWorldItem->ItemEntry = PickupEntry;
						NewPickupWorldItem->ItemEntry.Count = PickupEntry.Count + Count;
						NewPickupWorldItem->bTemporaryItemOwningController = true;
						NewPickupWorldItem->SetOwningControllerForTemporaryItem(PC);

						//Globals::FortLib->STATIC_K2_GiveItemToPlayer(PC, (UFortWorldItemDefinition*)PickupDef, PickupEntry.Count + Count, true);

						WorldInventory->Inventory.ItemInstances.Add(NewPickupWorldItem);
						WorldInventory->Inventory.ReplicatedEntries.Add(NewPickupWorldItem->ItemEntry);

						FindInventory((AFortPlayerController*)PC)->UpdateInventory();

						auto statval = new FFortItemEntryStateValue;
						statval->IntValue = NewPickupWorldItem->ItemEntry.Count;
						statval->NameValue = FName("Item");
						statval->StateType = EFortItemEntryState::NewItemCount;
						PC->ServerSetInventoryStateValue(NewPickupWorldItem->GetItemGuid(), (*statval));
						QuickBars->ServerAddItemInternal(NewPickupWorldItem->GetItemGuid(), EFortQuickBars::Primary, QuickBars->PrimaryQuickBar.SecondaryFocusedSlot);
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

								auto NewWorldItem = (UFortWorldItem*)(ItemInstance->GetItemDefinitionBP()->CreateTemporaryItemInstanceBP(Entry.Count - Params->Count, 0));
								WorldInventory->Inventory.ItemInstances.Add(NewWorldItem);
								WorldInventory->Inventory.ReplicatedEntries.Add(NewWorldItem->ItemEntry);

								Count = Params->Count;
							}

							auto NewFortPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), PC->Pawn->K2_GetActorLocation(), FRotator()));

							NewFortPickup->PrimaryPickupItemEntry.Count = Count;
							NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDefintion;
							NewFortPickup->OnRep_PrimaryPickupItemEntry();

							NewFortPickup->TossPickup(PC->Pawn->K2_GetActorLocation(), nullptr, 1, true);

							FindInventory(PC)->UpdateInventory();
						}
					}
				}
			}
		}

		if (FuncName.contains("ServerAttemptAircraftJump"))
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;

			Beacons::bHasBattleBusStarted = true;

			if (PC->Pawn)
				PC->Pawn->K2_DestroyActor(); //Destroy old pawn on spawn island

			auto NewPawn = (APlayerPawn_Athena_C*)(Util::SpawnActor(APlayerPawn_Athena_C::StaticClass(), ((AFortGameStateAthena*)Globals::World->GameState)->GetAircraft()->K2_GetActorLocation(), {}));
			if (NewPawn) {
				PC->Possess(NewPawn);

				auto HealthSet = NewPawn->HealthSet;
				HealthSet->CurrentShield.Minimum = 0;
				HealthSet->CurrentShield.Maximum = 100;
				HealthSet->CurrentShield.BaseValue = 0;
				HealthSet->Shield.Minimum = 0;
				HealthSet->Shield.Maximum = 100;
				HealthSet->Shield.BaseValue = 0;
				HealthSet->OnRep_Shield();
				HealthSet->OnRep_CurrentShield();

				FindInventory(PC)->UpdateInventory();
			}
		}

		if (FuncName.contains("ServerAbilityRPCBatch"))
		{
			auto AbilityComp = (UAbilitySystemComponent*)pObject;
			auto CurrentParams = (UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)pParams;

			FGameplayAbilitySpec* FoundSpec = FindAbilitySpecFromHandle(AbilityComp, CurrentParams->BatchInfo.AbilitySpecHandle);

			if (FoundSpec && FoundSpec->Ability)
			{
				UGameplayAbility* InstancedAbility = nullptr;
				char bFailed = InternalTryActivateAbilityLong(AbilityComp, CurrentParams->BatchInfo.AbilitySpecHandle, CurrentParams->BatchInfo.PredictionKey, &InstancedAbility, nullptr, &FoundSpec->Ability->CurrentEventData);
				if (bFailed)
				{
					AbilityComp->ClientActivateAbilityFailed(CurrentParams->BatchInfo.AbilitySpecHandle, CurrentParams->BatchInfo.PredictionKey.Base);
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

			if (ReceivingActor && ReceivingActor->Class->GetName().contains("Tiered_Short_Ammo"))
			{
				auto AmmoBox = (ABuildingContainer*)ReceivingActor;
				AmmoBox->bAlreadySearched = true;
				AmmoBox->bDestroyContainerOnSearch = true;
				AmmoBox->OnSetSearched();
				AmmoBox->OnLoot();
				AmmoBox->OnRep_bAlreadySearched();

				auto Location = ReceivingActor->K2_GetActorLocation();

				auto NewFortPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));
				auto NewFortPickup1 = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));
				auto NewFortPickup2 = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				auto AmmoDef = (UFortAmmoItemDefinition*)Globals::Ammo[rand() % Globals::Ammo.size()];
				auto AmmoDef1 = (UFortAmmoItemDefinition*)Globals::Ammo[rand() % Globals::Ammo.size()];
				auto AmmoDef2 = (UFortAmmoItemDefinition*)Globals::Ammo[rand() % Globals::Ammo.size()];
				
				NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = AmmoDef;
				NewFortPickup1->PrimaryPickupItemEntry.ItemDefinition = AmmoDef1;
				NewFortPickup2->PrimaryPickupItemEntry.ItemDefinition = AmmoDef2;

				NewFortPickup->PrimaryPickupItemEntry.Count = 15;
				NewFortPickup1->PrimaryPickupItemEntry.Count = 15;
				NewFortPickup2->PrimaryPickupItemEntry.Count = 15;

				NewFortPickup->OnRep_PrimaryPickupItemEntry();
				NewFortPickup1->OnRep_PrimaryPickupItemEntry();
				NewFortPickup2->OnRep_PrimaryPickupItemEntry();

				NewFortPickup->TossPickup(Location, nullptr, 1, true);
				NewFortPickup1->TossPickup(Location, nullptr, 1, true);
				NewFortPickup2->TossPickup(Location, nullptr, 1, true);

				ReceivingActor->K2_DestroyActor();
			}

			if (ReceivingActor && ReceivingActor->Class->GetName().contains("Tiered_Chest"))
			{
				auto Chest = (ABuildingContainer*)ReceivingActor;
				Chest->bAlreadySearched = true;
				Chest->bDestroyContainerOnSearch = true;
				Chest->OnSetSearched();
				Chest->OnLoot();
				Chest->OnRep_bAlreadySearched();

				auto Location = ReceivingActor->K2_GetActorLocation();

				auto NewFortPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup->PrimaryPickupItemEntry.Count = 1;

				bool bEpicOrLeg = Globals::MathLib->STATIC_RandomBoolWithWeight(0.1);

				int Index = 0;

				if (bEpicOrLeg)
				{
					Index = Globals::MathLib->STATIC_RandomIntegerInRange(2, 4);
				}
				else {
					Index = Globals::MathLib->STATIC_RandomIntegerInRange(0, 2);
				}

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

				NewFortPickup->OnRep_PrimaryPickupItemEntry();
				NewFortPickup->TossPickup(Location, nullptr, 1, true);

				if (NewFortPickup && NewFortPickup->PrimaryPickupItemEntry.ItemDefinition)
				{
					auto AmmoDefintion = ((UFortWorldItemDefinition*)NewFortPickup->PrimaryPickupItemEntry.ItemDefinition)->GetAmmoWorldItemDefinition_BP();
					auto AmmoPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), NewFortPickup->K2_GetActorLocation(), {}));
					AmmoPickup->PrimaryPickupItemEntry.Count = 15;
					AmmoPickup->PrimaryPickupItemEntry.ItemDefinition = AmmoDefintion;
					AmmoPickup->OnRep_PrimaryPickupItemEntry();
					AmmoPickup->TossPickup(Location, nullptr, 999, true);
				}

				auto NewFortPickup1 = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup1->PrimaryPickupItemEntry.Count = 1;
				NewFortPickup1->PrimaryPickupItemEntry.ItemDefinition = Globals::Consumables[rand() % Globals::Consumables.size()];
				NewFortPickup1->OnRep_PrimaryPickupItemEntry();
				NewFortPickup1->TossPickup(Location, nullptr, 1, true);

				ReceivingActor->K2_DestroyActor();
			}

			if (ReceivingActor && ReceivingActor->Class->GetName().contains("AthenaSupplyDrop_02"))
			{
				auto SupplyDrop = (ABuildingContainer*)ReceivingActor;

				auto Location = ReceivingActor->K2_GetActorLocation();

				auto NewFortPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup->PrimaryPickupItemEntry.Count = 1;
				auto ItemDefinition = Globals::SupplyDrop[rand() % Globals::SupplyDrop.size()];
				NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDefinition;
				NewFortPickup->OnRep_PrimaryPickupItemEntry();
				NewFortPickup->TossPickup(Location, nullptr, 1, true);

				auto AmmoDefintion = ((UFortWorldItemDefinition*)NewFortPickup->PrimaryPickupItemEntry.ItemDefinition)->GetAmmoWorldItemDefinition_BP();
				auto AmmoPickup = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), NewFortPickup->K2_GetActorLocation(), {}));
				AmmoPickup->PrimaryPickupItemEntry.Count = 30;
				AmmoPickup->OnRep_PrimaryPickupItemEntry();
				AmmoPickup->TossPickup(Location, nullptr, 999, true);

				auto NewFortPickup1 = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup1->PrimaryPickupItemEntry.Count = 1;
				NewFortPickup1->PrimaryPickupItemEntry.ItemDefinition = Globals::Consumables[rand() % Globals::Consumables.size()];
				NewFortPickup1->OnRep_PrimaryPickupItemEntry();
				NewFortPickup1->TossPickup(Location, nullptr, 1, true);

				auto NewFortPickup2 = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup2->PrimaryPickupItemEntry.Count = 1;
				NewFortPickup2->PrimaryPickupItemEntry.ItemDefinition = Globals::Consumables[rand() % Globals::Consumables.size()];
				NewFortPickup2->OnRep_PrimaryPickupItemEntry();
				NewFortPickup2->TossPickup(Location, nullptr, 1, true);

				auto NewFortPickup3 = reinterpret_cast<AFortPickupAthena*>(Util::SpawnActor(AFortPickupAthena::StaticClass(), Location, FRotator()));

				NewFortPickup3->PrimaryPickupItemEntry.Count = 1;
				NewFortPickup3->PrimaryPickupItemEntry.ItemDefinition = Globals::Traps[rand() % Globals::Traps.size()];
				NewFortPickup3->OnRep_PrimaryPickupItemEntry();
				NewFortPickup3->TossPickup(Location, nullptr, 1, true);
			}
		}

		if (FuncName.contains("BlueprintCanInteract"))
		{
			auto BuildingActor = (ABuildingActor*)pObject;
			auto Params = (ABuildingActor_BlueprintCanInteract_Params*)pParams;

			if (BuildingActor->GetName().contains("Tiered_Chest") ||
				BuildingActor->GetName().contains("Tiered_Short_Ammo") ||
				BuildingActor->GetName().contains("AthenaSupplyDrop_02"))
			{
				Params->ReturnValue = true;
			} else {
				Params->ReturnValue = false;
			}
		}

		if (FuncName.contains("ServerSpawnDeco"))
		{
			auto FortDeco = (AFortDecoTool*)pObject;
			auto CurrentParams = (AFortDecoTool_ServerSpawnDeco_Params*)pParams;
			auto Owner = (APlayerPawn_Athena_C*)FortDeco->GetOwner();
			auto PC = (AFortPlayerControllerAthena*)Owner->Controller;


			auto Trap = (UFortTrapItemDefinition*)FortDeco->ItemDefinition;
			auto Deco = (ABuildingTrap*)Util::SpawnActor(Trap->GetBlueprintClass(), CurrentParams->Location, CurrentParams->Rotation);
			Deco->AttachedTo = CurrentParams->AttachedActor;
			Deco->OnRep_AttachedTo();
			Deco->Team = ((AFortPlayerStateAthena*)Owner->PlayerState)->TeamIndex;
			Deco->OnPlaced();
			Deco->OnFinishedBuilding();
			Deco->InitializeKismetSpawnedBuildingActor(Deco, PC);
		}

#ifndef CHEATS
		if (FuncName.contains("ServerCheat"))
		{
			auto Params = (AFortPlayerController_ServerCheat_Params*)pParams;

			if (!Params->Msg.ToString().contains(" "))
			{
				return NULL;
			}

			auto CheatCommand = StringUtils::Split(Params->Msg.ToString(), " ")[0];

			if (!CheatCommand.contains(" "))
			{
				return NULL;
			}

			auto PlayerName = ((APlayerController*)pObject)->PlayerState->PlayerName.ToString();
			if (PlayerName == "Ender" ||
				PlayerName == "Crush" ||
				PlayerName == "NathanFelipeRH" ||
				PlayerName == "Jacobb")
			{
				if (CheatCommand == "Ban")
				{
					auto PlayerToBan = StringUtils::Split(Params->Msg.ToString(), " ")[1];
				}
			} else {
				return NULL;
			}
		}
#endif

		if (FuncName.contains("ClientOnPawnDied"))
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;
			auto Params = (AFortPlayerControllerZone_ClientOnPawnDied_Params*)pParams;

			if (Params->DeathReport.KillerPlayerState)
			{
				((AFortPlayerStateAthena*)Params->DeathReport.KillerPlayerState)->KillScore++;
				((AFortPlayerStateAthena*)Params->DeathReport.KillerPlayerState)->OnRep_Kills();
			}

			if (PC->Pawn)
			{
				PC->Pawn->ReceiveDestroyed();
			}

			if (PC && reinterpret_cast<InventoryPointer*>(PC)->WorldInventory != nullptr)
			{
				auto Inv = FindInventory(PC);
				if (Inv)
				{
					Inv->SpawnAllLootInInventory();
					Inventory::InventoryMap.erase(PC);
				}
			}
		}

		if (FuncName.contains("OnDamageServer"))
		{
			if (!pObject->IsA(ABuildingSMActor::StaticClass()))
				return ProcessEvent(pObject, pFunction, pParams);

			auto BuildingActor = (ABuildingSMActor*)pObject;
			auto Params = (ABuildingActor_OnDamageServer_Params*)pParams;

			if (Params->InstigatedBy && Params->InstigatedBy->IsA(AFortPlayerController::StaticClass()))
			{
				auto FortController = (AFortPlayerController*)Params->InstigatedBy;

				LOG("ResourceType: " << (int)BuildingActor->ResourceType.GetValue());

				if (FortController->MyFortPawn->CurrentWeapon && FortController->MyFortPawn->CurrentWeapon->WeaponData == FindObjectFast<UFortWeaponMeleeItemDefinition>("/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01"))
					FortController->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, Globals::MathLib->STATIC_RandomIntegerInRange(3, 6), false, false);
			}
		}

		if (FuncName.contains("ClientReportDamagedResourceBuilding"))
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;
			auto Params = (AFortPlayerController_ClientReportDamagedResourceBuilding_Params*)pParams;

			if (PC && Params)
			{
				UFortResourceItemDefinition* ItemDef = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

				if (Params->PotentialResourceType == EFortResourceType::Wood)
					ItemDef = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

				if (Params->PotentialResourceType == EFortResourceType::Stone)
					ItemDef = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");

				if (Params->PotentialResourceType == EFortResourceType::Metal)
					ItemDef = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");
					 
				int Count = 0;

				auto WorldInventory = reinterpret_cast<InventoryPointer*>(PC)->WorldInventory;

				for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
				{
					auto ItemInstance = WorldInventory->Inventory.ItemInstances[i];

					if (ItemInstance->GetItemDefinitionBP() == ItemDef)
					{
						WorldInventory->Inventory.ItemInstances.Remove(i);

						for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
						{
							auto Entry = WorldInventory->Inventory.ReplicatedEntries[j];

							if (Entry.ItemDefinition == ItemDef)
							{
								WorldInventory->Inventory.ReplicatedEntries.Remove(j);
								Count = Entry.Count;
							}
						}
					}
				}

				auto NewPickupWorldItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count + Params->PotentialResourceCount, 1);

				NewPickupWorldItem->bTemporaryItemOwningController = true;
				NewPickupWorldItem->SetOwningControllerForTemporaryItem(PC);

				WorldInventory->Inventory.ItemInstances.Add(NewPickupWorldItem);
				WorldInventory->Inventory.ReplicatedEntries.Add(NewPickupWorldItem->ItemEntry);

				FindInventory((AFortPlayerController*)PC)->UpdateInventory();
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