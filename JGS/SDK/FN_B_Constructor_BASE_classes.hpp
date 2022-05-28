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

// BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C
// 0x0518 (0x16F8 - 0x11E0)
class AB_Constructor_BASE_C : public AFortConstructorBASE
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11E0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere_Collision_For_Anim;                                // 0x11F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Base_Device;                                           // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x1208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Workbench_Ticking;                                        // 0x1210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x1218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TC_BigBrother;                                            // 0x1220(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BigBrotherAdditionalNodes;                                // 0x1240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1244(0x0004) MISSED OFFSET
	class UTexture2D*                                  MiniMapIcon;                                              // 0x1248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Minimap_View_Distance;                                    // 0x1250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1254(0x0004) MISSED OFFSET
	class UClass*                                      GE_ElectrifiedFloors;                                     // 0x1258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Hyperthreading;                                        // 0x1260(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SubroutineOptimization;                                // 0x1280(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SubroutineOptimization;                                // 0x12A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Recycling;                                             // 0x12A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ConnectedWood;                                            // 0x12C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConnectedStone;                                           // 0x12CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConnectedMetal;                                           // 0x12D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x12D4(0x0004) MISSED OFFSET
	class UFortWorldItemDefinition*                    Wood;                                                     // 0x12D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    Stone;                                                    // 0x12E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    Metal;                                                    // 0x12E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecyclingMultiplier;                                      // 0x12F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnWood;                                                // 0x12F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnStone;                                               // 0x12F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnMetal;                                               // 0x12F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x12F7(0x0001) MISSED OFFSET
	int                                                SpawnMax;                                                 // 0x12F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HyperThreadingMultiplier;                                 // 0x12FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_DefensiveIntegration;                                  // 0x1300(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DefensiveIntegration;                                  // 0x1320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_AutomatedDefenses;                                     // 0x1328(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AutomatedDefenses_Additional_Nodes;                       // 0x1348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x134C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_TotalIntegration;                                      // 0x1350(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_PowerModulation;                                       // 0x1370(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_PowerModulation;                                       // 0x1390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefensiveIntegrationLevel;                                // 0x1398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x139C(0x0004) MISSED OFFSET
	class UClass*                                      GE_LoftyArchitecture;                                     // 0x13A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_LoftyArchitecture;                                     // 0x13A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SafetyProtocols;                                       // 0x13C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SafetyProtocols;                                       // 0x13E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BaseIsPlaced;                                             // 0x13F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x13F1(0x0003) MISSED OFFSET
	int                                                NumPlayersNearBase;                                       // 0x13F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasePowerLevel;                                           // 0x13F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalResourcesSpawned;                                    // 0x13FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResourceLimit;                                            // 0x1400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1404(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Overclocking;                                          // 0x1408(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_UpgradedPowerModulation;                               // 0x1428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ElectrifiedFloors;                                     // 0x1430(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SlowUnit;                                              // 0x1450(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SlowUnit;                                              // 0x1470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ContainmentUnit;                                       // 0x1478(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Grant_TriggerReflectDamage_FromBASEWall;               // 0x1498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_StrongerExit;                                          // 0x14A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_StrongerExit;                                          // 0x14C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_CardioFeedbackLoop;                                    // 0x14C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ShieldCapacitor;                                       // 0x14E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ShieldCapacitor;                                       // 0x1508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStructRecyclingResource                    StoredWood;                                               // 0x1510(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FStructRecyclingResource                    StoredStone;                                              // 0x1520(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FStructRecyclingResource                    StoredMetal;                                              // 0x1530(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                HyperthreadingResourceLimit;                              // 0x1540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MegaBASEAdditionalNodes;                                  // 0x1544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_NeuroFeedbackLoop;                                     // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilitySystemComponent*                     ConstructorAbilitySystemComponent;                        // 0x1550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_OutgoingHealAmp;                                       // 0x1558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_FullyContained;                                        // 0x1560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Outer_MIDs_Enemy;                                         // 0x1568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Effect_Mesh_Comp;                                         // 0x1578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Inner_MIDs_Friendly;                                      // 0x1580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Transition_Start_Delay;                                   // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1594(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Inner_MIDs_Enemy;                                         // 0x1598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  Outer_MIDs_Friendly;                                      // 0x15A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          M_SelfBuildingMaterial_Enemy;                             // 0x15B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_MegaBASE;                                              // 0x15C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NeuroFeedbackLoop;                                     // 0x15E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_CardioFeedbackLoop;                                    // 0x1600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FullyContained;                                        // 0x1608(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InitialStaticMeshAnimationIsComplete;                     // 0x1628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1629(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundResourcesCreated;                                    // 0x1630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundResourcesCollected;                                  // 0x1638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasePowerModulationHeal;                                  // 0x1640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1644(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                EffectMeshArray;                                          // 0x1648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>                    BuildingActorArray;                                       // 0x1658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DelayBeforeShowingMeshes;                                 // 0x1668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayDisabled;                                            // 0x166C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x166D(0x0003) MISSED OFFSET
	struct FTimerHandle                                DelayedMeshedTimer;                                       // 0x1670(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>                    NearbyBuildingSMActors;                                   // 0x1678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>                    NearbyTrapActors;                                         // 0x1688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                BindTrapTimerHandle;                                      // 0x1698(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TrapDamage;                                            // 0x16A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_TrapDamage;                                            // 0x16A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_TrapReloadRate;                                        // 0x16C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TrapReloadRate;                                        // 0x16E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Constructor_BASEOutgoingDamageMod;                     // 0x16F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C");
		return ptr;
	}


	void SetHealingMultiplier();
	void SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent);
	void GetTrapGEFromTag(const struct FGameplayTagContainer& InTag, class UClass** OutGE);
	void OnRep_InitialStaticMeshAnimationIsComplete();
	void BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec);
	void SetBaseVisualGlow(class UAbilitySystemComponent* AbilitySystemComponent);
	void SetDamageMultiplier();
	void OnRep_CollectResources();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int AmountToSpawn, struct FStructRecyclingResource* SetValue);
	void SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void OnRep_BaseIsPlaced();
	void RecycleResources();
	void SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects);
	void SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects);
	void SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects);
	void Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects);
	void SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int* NodesToAffect);
	void UserConstructionScript();
	void OnPlaced(class UAbilitySystemComponent** InstigatorAbilitySystemComponent);
	void Recycling();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void AnimateLegs(bool LegsUp);
	void StartBuildingActorVisuals(class ABuildingSMActor** BuildingActor, class UStaticMeshComponent** EffectMeshComp);
	void StopBuildingActorVisuals(class ABuildingSMActor** BuildingActor, class UStaticMeshComponent** EffectMeshComp);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void GetDamageAmp();
	void ResourcesCreated();
	void ResourcesCollected();
	void BaseIsReadyToAnimate();
	void ShowHiddenMeshes();
	void ApplyTrapEffects();
	void ExecuteUbergraph_B_Constructor_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
