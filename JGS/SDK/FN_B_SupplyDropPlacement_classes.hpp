#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_SupplyDropPlacement.B_SupplyDropPlacement_C
// 0x0199 (0x0979 - 0x07E0)
class AB_SupplyDropPlacement_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               ActiveFloorCollision;                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Reticle;                                                // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_SupplydropCrate_Explosion;                              // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SupplyDropBeep;                                           // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             NewIncoming;                                              // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SupplyDrop_Mesh_Open;                                     // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SupplyDrop_Mesh;                                          // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingTimeline_FallCurve_A2643A72491D3A745741F8A24DC189B4;// 0x0840(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FallingTimeline__Direction_A2643A72491D3A745741F8A24DC189B4;// 0x0844(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FallingTimeline;                                          // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Allow_SupplyDrop_Interact;                                // 0x0850(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class USoundBase*                                  Activate_Sound;                                           // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Impact_Sound;                                             // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Loot_Sound;                                               // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventHit;                                                 // 0x0870(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          EventData;                                                // 0x0878(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DelayForSelfDestruct;                                     // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LootSpawnOffset;                                          // 0x0924(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FallHeight;                                               // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSupplyDropUnlocks                          Unlocks;                                                  // 0x0934(0x0005) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0939(0x0007) MISSED OFFSET
	TArray<struct FName>                               LootTableNames;                                           // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                SelfDestructTimerHandle;                                  // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABuildingFloor*                              Floor;                                                    // 0x0958(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x0960(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              FallTime;                                                 // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                SecondaryFallingTimerHandle;                              // 0x0970(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bLooted;                                                  // 0x0978(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	bool IsAcceptablePositionForPlacement(class AFortDecoTool** DecoTool, bool* bIsCDO, struct FVector* InLocation, struct FRotator* InRotation, struct FText* OutFailureReason);
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
