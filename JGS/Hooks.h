#pragma once

namespace Hooks
{
	bool bIsReady = false;
	bool bHasSpawned = false;
	bool bIsInGame = false;
	bool bHasInitedTheBeacon = false;

	bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey, UGameplayAbility**, void*, const FGameplayEventData* TriggerEventData);
	AActor* (*SpawnActorInternal)(UWorld*, UClass*, FTransform, FActorSpawnParameters);

	template<typename T = AActor>
	T* SpawnActor(FVector Location, FRotator Rotation, UClass* ActorClass)
	{
		auto DEG_TO_RAD = 3.14159 / 180;
		auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

		auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
		auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);

		auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
		auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);

		auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
		auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

		FQuat Quat;
		Quat.X = CR * SP * SY - SR * CP * CY;
		Quat.Y = -CR * SP * CY - SR * CP * SY;
		Quat.Z = CR * CP * SY - SR * SP * CY;
		Quat.W = CR * CP * CY + SR * SP * SY;

		FTransform Transform;
		Transform.Rotation = Quat;
		Transform.Scale3D = { 1, 1, 1 };
		Transform.Translation = Location;

		return (T*)SpawnActorInternal(Globals::World, ActorClass, Transform, FActorSpawnParameters());
	}

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

				TArray<AActor*> OutHLODs;
				Globals::GPS->STATIC_GetAllActorsOfClass(Globals::World, AFortHLODSMActor::StaticClass(), &OutHLODs);
				for (int i = 0; i < OutHLODs.Num(); i++)
				{
					auto Actor = OutHLODs[i];

					if (Actor)
					{
						Actor->K2_DestroyActor();
					}
				}
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

		if (pFunction->FunctionFlags & 0x01000000 || pFunction->FunctionFlags & 0x00200000 && 
			!FuncName.contains("UpdateCamera") &&
			!FuncName.contains("NoBase") &&
			!FuncName.contains("ClientAckGoodMove") &&
			!FuncName.contains("ServerMoveOld") &&
			!FuncName.contains("ClientAdjustPosition"))
		{
			LOG("RPC: " << FuncName);
		}

		/////////// RPCS ////////////

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

		if (FuncName.contains("ServerAttemptAircraftJump"))
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;

			if (PC->Pawn)
				PC->Pawn->K2_DestroyActor(); //Destroy old pawn on spawn island

			auto NewPawn = (APlayerPawn_Athena_C*)(Util::SpawnActor(APlayerPawn_Athena_C::StaticClass(), ((AFortGameStateAthena*)Globals::World->GameState)->Aircraft->K2_GetActorLocation(), {}));
			if (NewPawn) {
				PC->Possess(NewPawn);

				((AFortPlayerState*)NewPawn->PlayerState)->OnRep_PlayerTeam();
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
				auto PC = Pawn->Controller;
				if (PC)
				{
					
				}
			}
		}

		if (FuncName.contains("ServerCreateBuildingActor"))
		{
			auto PlayerController = (AFortPlayerController*)pObject;
			if (PlayerController)
			{
				auto BuildLoc = PlayerController->LastBuildPreviewGridSnapLoc;
				auto BuildRot = PlayerController->LastBuildPreviewGridSnapRot;
				auto BuildClass = PlayerController->CurrentBuildableClass;
				auto BuildingActor = SpawnActor<ABuildingActor>(BuildLoc, BuildRot, BuildClass);
				if (BuildingActor) {
					BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
				}
			}
		}

		// FIX TOMORROW
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
						LOG(AthenaPlayerPawn->PlayerState->GetPlayerName().ToString() << " wants to play " << EmoteAsset->GetName());

						auto Montage = EmoteAsset->GetAnimationHardReference(EFortCustomBodyType::All, EFortCustomGender::Both);

						if (AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage != Montage)
						{

							AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage = Montage;
							AthenaPlayerPawn->RepAnimMontageInfo.PlayRate = 1;
							AthenaPlayerPawn->RepAnimMontageInfo.IsStopped = false;
							AthenaPlayerPawn->RepAnimMontageInfo.SkipPositionCorrection = true;

							auto AnimInstance = AthenaPlayerPawn->Mesh->GetAnimInstance();
							auto thisok = AnimInstance->Montage_Play(Montage, 1, EMontagePlayReturnType::Duration, 0);

							AthenaPlayerPawn->OnRep_ReplicatedAnimMontage();
							AthenaPlayerPawn->OnRep_AttachmentMesh();
							AthenaPlayerPawn->OnRep_AttachmentReplication();
							AthenaPlayerPawn->OnRep_ReplicateMovement();
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