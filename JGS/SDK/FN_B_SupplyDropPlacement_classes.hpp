#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_SupplyDropPlacement.B_SupplyDropPlacement_C
// 0x0199 (0x09D9 - 0x0840)
class AB_SupplyDropPlacement_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               ActiveFloorCollision;                                     // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Reticle;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_SupplydropCrate_Explosion;                              // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SupplyDropBeep;                                           // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             NewIncoming;                                              // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SupplyDrop_Mesh_Open;                                     // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SupplyDrop_Mesh;                                          // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingTimeline_FallCurve_A2643A72491D3A745741F8A24DC189B4;// 0x08A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FallingTimeline__Direction_A2643A72491D3A745741F8A24DC189B4;// 0x08A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FallingTimeline;                                          // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Allow_SupplyDrop_Interact;                                // 0x08B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class USoundBase*                                  Activate_Sound;                                           // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Impact_Sound;                                             // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Loot_Sound;                                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventHit;                                                 // 0x08D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          EventData;                                                // 0x08D8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DelayForSelfDestruct;                                     // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LootSpawnOffset;                                          // 0x0984(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FallHeight;                                               // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSupplyDropUnlocks                          Unlocks;                                                  // 0x0994(0x0005) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	TArray<struct FName>                               LootTableNames;                                           // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                SelfDestructTimerHandle;                                  // 0x09B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABuildingFloor*                              Floor;                                                    // 0x09B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x09C0(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              FallTime;                                                 // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                SecondaryFallingTimerHandle;                              // 0x09D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bLooted;                                                  // 0x09D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SupplyDropPlacement.B_SupplyDropPlacement_C");
		return ptr;
	}


	void OnRep_bLooted();
	void OnRep_NewLocation();
	struct FVector GetFallLocation();
	struct FVector GetImpactLocation();
	void ToggleFallingFX(bool bToggleOn);
	void ClientPlayDropFX();
	void SpawnTierDrops(int LootTableIndex);
	void LootSpawnPosition(struct FVector* OutPos);
	void InitDrop(const struct FSupplyDropUnlocks& InUnlocks);
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void Landed();
	bool IsAcceptablePositionForPlacement(struct FVector* InLocation, struct FRotator* InRotation, class AFortDecoTool** DecoTool, bool* bIsCDO, struct FText* OutFailureReason);
	void UpdateLocation(float Time);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void TurnOnInteract(bool bNewActorEnableCollision);
	void SpawnLoot();
	void UserConstructionScript();
	void FallingTimeline__FinishedFunc();
	void FallingTimeline__UpdateFunc();
	void FallingTimeline__StartTrail__EventFunc();
	void FallingTimeline__Impact__EventFunc();
	void ImpactFX();
	void BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OverlappingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void SelfDestruction();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void PlayDrop();
	void StopFallingTimeline();
	void SpawnLootDestroyActor();
	void PlayDropNewTime();
	void SecondaryFallTick();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_SupplyDropPlacement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
