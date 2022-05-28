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

// BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C
// 0x0370 (0x1170 - 0x0E00)
class AB_Fragment_Container_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E00(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_LightOn;                                                // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Orb_Mesh;                                                 // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_ResOut;                                                 // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Orb_PickupEffect;                                       // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           BlockingCollision;                                        // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Container_SK;                                             // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RotationRoot;                                             // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             VerticalMovement;                                         // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Awaken_Collision;                                         // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            MiniMapCollision;                                         // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapLoc;                                               // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4;// 0x0E60(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4;// 0x0E64(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E65(0x0003) MISSED OFFSET
	class UTimelineComponent*                          VerticalMovementTimeline;                                 // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TC_HasFragmentAbility;                                    // 0x0E70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LlamaFragment;                                         // 0x0E90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FGameplayTagContainer                       TC_ChargeFragmentTag;                                     // 0x0EB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LlamaFragmentTag;                                      // 0x0ED0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_FragmentCollected;                                  // 0x0EF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          SentFragment;                                             // 0x0EF8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_OutlanderFragmentTypes>              FragmentType;                                             // 0x0FA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0FA1(0x0003) MISSED OFFSET
	struct FLinearColor                                ChargeFragmentColor;                                      // 0x0FA4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FLinearColor                                LlamaFragmentColor;                                       // 0x0FB4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0FC4(0x0004) MISSED OFFSET
	class UFortAmmoItemDefinition*                     FragmentAmmoData;                                         // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Current_Outlander;                                        // 0x0FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             InteractingPlayerPawn;                                    // 0x0FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Outlander_LlamaFragment;                               // 0x0FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ClearFragmentCooldown;                                 // 0x0FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Outlander_FragmentTeamSpeedBost;                       // 0x0FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FortPawnFilter;                                           // 0x0FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LlamaFragmentPercent;                                     // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              RotateToPlayerSpeed;                                      // 0x1004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastInteractStartTime;                                    // 0x1008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayedDestroyTime;                                       // 0x100C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfTimeToPingMap;                                    // 0x1010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfMapPings;                                         // 0x1014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAnyOutlanderStillAround;                                // 0x1018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanInteract;                                              // 0x1019(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               IsAwake;                                                  // 0x101A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLoot;                                                  // 0x101B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOpen;                                                   // 0x101C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUP;                                                    // 0x101D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOn;                                                     // 0x101E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x101F(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Container_Base_Mat;                                       // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Container_Screen_mat;                                     // 0x1028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Container_Light_mat;                                      // 0x1030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Orb_Mat;                                                  // 0x1038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Turn_On_Sound;                                        // 0x1040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Hello_Sound;                                          // 0x1048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Hover_Sound;                                          // 0x1050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Goodbye_Sound;                                        // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Thanks_Sound;                                         // 0x1060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       InteractLlamaFragment;                                    // 0x1068(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractChargeFragment;                                   // 0x1080(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractNonOutlander;                                     // 0x1098(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PickupLlamaFragment;                                      // 0x10B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PickupChargeFragment;                                     // 0x10C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                             OrbAudioComponent;                                        // 0x10E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOrbTaken;                                               // 0x10E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x10E9(0x0007) MISSED OFFSET
	struct FText                                       FailedOutlanderOnlyOneLlama;                              // 0x10F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FailedOutlanderMaxFragHeldDefault;                        // 0x1108(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility;// 0x1120(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FailedNonOutlanderActivated;                              // 0x1138(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                        FF_Interact;                                              // 0x1150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        FFInteractSoft;                                           // 0x1158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DeployAnim;                                               // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UndeployAnim;                                             // 0x1168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C");
		return ptr;
	}


	void IsOutlander(class AFortPawn* Pawn, bool* IsOutlander);
	void ForceFeedbackInteract(bool Soft);
	void OnRep_IsOrbTaken();
	void OnRep_IsOn();
	void SetOutlander(class AActor* NewOutlander);
	void SetAwake(bool NewAwake);
	void UpdateShouldTick();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn** InteractingPawn);
	void OnRep_IsOpen();
	void DelayedDestroy();
	void OnRep_BuffType();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void VerticalMovementTimeline__FinishedFunc();
	void VerticalMovementTimeline__UpdateFunc();
	void VerticalMovementTimeline__Up__EventFunc();
	void VerticalMovementTimeline__down__EventFunc();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void ActivateFX();
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void MoveUp();
	void PowerDown();
	void MoveDown();
	void ShowOnMiniMap();
	void StartHide();
	void Reset_Activation();
	void BlueprintOnBeginInteract();
	void MultiFeedback();
	void SoftFeedback();
	void PlayAnimation(class UAnimSequence* AnimToPlay);
	void AnimationComplete();
	void ExecuteUbergraph_B_Fragment_Container(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
