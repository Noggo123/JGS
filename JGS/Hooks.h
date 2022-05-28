#pragma once

namespace Hooks
{
	bool bIsReady = false;
	bool bHasSpawned = false;
	bool bIsInGame = false;
	bool bHasInitedTheBeacon = false;

	bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey, UGameplayAbility**, void*, const FGameplayEventData* TriggerEventData);

	LPVOID(*ProcessEvent)(void*, void*, void*);
	LPVOID ProcessEventHook(UObject* pObject, UFunction* pFunction, LPVOID pParams)
	{
		auto ObjName = pObject->GetName();
		auto FuncName = pFunction->GetName();

		if (FuncName.find("ReadyToStartMatch") != std::string::npos)
		{
			if (!bHasInitedTheBeacon) {
				Globals::FortEngine = UObject::FindObject<UFortEngine>("FortEngine_");
				Globals::World = Globals::FortEngine->GameViewport->World;
				Globals::PC = reinterpret_cast<AFortPlayerController*>(Globals::FortEngine->GameInstance->LocalPlayers[0]->PlayerController);

				Beacons::InitHooks(); //Sets up the beacon and inits replication for use!

				bHasInitedTheBeacon = true;

				auto GameState = (AFortGameStateAthena*)(Globals::World->GameState);
				GameState->GamePhase = EAthenaGamePhase::Warmup;
				GameState->OnRep_GamePhase(EAthenaGamePhase::None);
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

					if (FortPlayerController->IsInAircraft())
					{
						FortPlayerController->ServerAttemptAircraftJump({});
					}
				}
			}
		}

		if (pFunction->FunctionFlags & 0x01000000 || pFunction->FunctionFlags & 0x00200000 && !FuncName.contains("UpdateCamera") && !FuncName.contains("NoBase") && !FuncName.contains("ClientAckGoodMove"))
		{
			LOG("RPC: " << FuncName);
		}

		/////////// RPCS ////////////

		if (FuncName.find("ServerReadyToStartMatch") != std::string::npos)
		{
			auto PC = (AFortPlayerController*)pObject;
			PC->bReadyToStartMatch = true;
		}

		if (FuncName.find("ServerClientPawnLoaded") != std::string::npos)
		{
			auto PC = (AFortPlayerController*)pObject;
			auto Params = (AFortPlayerController_ServerClientPawnLoaded_Params*)pParams;
			PC->bClientPawnIsLoaded = Params->bIsPawnLoaded;
		}

		if (FuncName.find("ServerSetClientHasFinishedLoading") != std::string::npos)
		{
			auto PC = (AFortPlayerController*)pObject;
			auto Params = (AFortPlayerController_ServerSetClientHasFinishedLoading_Params*)pParams;
			PC->bHasClientFinishedLoading = Params->bInHasFinishedLoading;
		}

		if (FuncName.find("ServerExecuteInventoryItem") != std::string::npos)
		{
			auto PC = (AFortPlayerController*)pObject;
			auto Params = (AFortPlayerController_ServerExecuteInventoryItem_Params*)pParams;

			if (PC)
			{
				auto WorldInventory = PC->WorldInventory;
				if (WorldInventory) {
					auto ItemInstances = WorldInventory->Inventory.ItemInstances;

					for (int i = 0; i < ItemInstances.Num(); i++)
					{
						auto ItemInstance = ItemInstances[i];

						if (Util::AreGuidsTheSame(Params->ItemGuid, ItemInstance->GetItemGuid()))
						{
							if (PC->Pawn)
								((AFortPlayerPawn*)PC->Pawn)->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemInstance->GetItemDefinitionBP(), Params->ItemGuid);
						}
					}
				}
			}
		}

		if (FuncName.find("ServerAttemptAircraftJump") != std::string::npos)
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;

			if (PC->Pawn)
				PC->Pawn->K2_DestroyActor(); //Destroy old pawn on spawn island

			auto NewPawn = (APlayerPawn_Athena_C*)(Util::SpawnActor(APlayerPawn_Athena_C::StaticClass(), ((AFortGameStateAthena*)Globals::World->GameState)->Aircraft->K2_GetActorLocation(), {}));
			if (NewPawn) {
				PC->Possess(NewPawn);

				NewPawn->ServerChoosePart(EFortCustomPartType::Head, Globals::HeadPart);
				NewPawn->ServerChoosePart(EFortCustomPartType::Body, Globals::BodyPart);
				((AFortPlayerState*)NewPawn->PlayerState)->OnRep_CharacterParts();
			}
		}

		if (FuncName.find("ServerReturnToMainMenu") != std::string::npos)
		{
			auto PC = (AFortPlayerController*)pObject;
			PC->ClientTravel(L"/Game/Maps/Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());
		}

		if (FuncName.find("ServerHandlePickup") != std::string::npos)
		{
			auto Pawn = (AFortPlayerPawn*)pObject;
			auto Params = (AFortPlayerPawn_ServerHandlePickup_Params*)pParams;

			if (Pawn)
			{
				auto PC = Pawn->Controller;
				if (PC)
				{
					
				}
			}
		}

		if (FuncName.find("ServerPlayEmoteItem") != std::string::npos)
		{
			for (int i = 0; i < Beacons::Beacon->NetDriver->ClientConnections.Num(); i++)
			{
				auto Connection = Beacons::Beacon->NetDriver->ClientConnections[i];

				if (Connection && Connection->PlayerController)
				{
					auto ControllerFromObject = (AFortPlayerControllerAthena*)pObject;
					auto AthenaPlayerPawn = (AFortPlayerPawnAthena*)ControllerFromObject->Pawn;

					if (!ControllerFromObject->bIsPlayerActivelyMoving)
					{
						if (AthenaPlayerPawn->bIsCrouched) AthenaPlayerPawn->UnCrouch(true);

						auto EmoteAsset = static_cast<AFortPlayerController_ServerPlayEmoteItem_Params*>(pParams)->EmoteAsset;
						printf("\LogServer: %s want to play %s!\n", AthenaPlayerPawn->PlayerState->GetPlayerName().ToString().c_str(), EmoteAsset->GetName().c_str());


						auto Montage = EmoteAsset->GetAnimationHardReference(EFortCustomBodyType::All, EFortCustomGender::Both);

						if (AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage != Montage)
						{

							AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage = Montage;
							AthenaPlayerPawn->RepAnimMontageInfo.PlayRate = 1;
							AthenaPlayerPawn->RepAnimMontageInfo.IsStopped = false;
							AthenaPlayerPawn->RepAnimMontageInfo.SkipPositionCorrection = true;

							if (AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage == Montage)
							{
								auto AnimInstance = AthenaPlayerPawn->Mesh->GetAnimInstance();
								auto thisok = AnimInstance->Montage_Play(Montage, 1, EMontagePlayReturnType::Duration, 0);

								AthenaPlayerPawn->OnRep_ReplicatedAnimMontage();
							}
						}
					}
				}
			}
		}


		/////////// RPCS ////////////

		return ProcessEvent(pObject, pFunction, pParams);
	}

	void Init()
	{
		auto FEVFT = *reinterpret_cast<void***>(Globals::FortEngine);
		auto PEAddr = FEVFT[64];

		MH_CreateHook(reinterpret_cast<LPVOID>(PEAddr), ProcessEventHook, reinterpret_cast<LPVOID*>(&ProcessEvent));
		MH_EnableHook(reinterpret_cast<LPVOID>(PEAddr));
	}
}