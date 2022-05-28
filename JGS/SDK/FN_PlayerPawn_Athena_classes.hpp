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

// BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C
// 0x0237 (0x2454 - 0x221D)
class APlayerPawn_Athena_C : public APlayerPawn_Athena_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x221D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2220(0x0008) (Transient, DuplicateTransient)
	float                                              Storm_Audio_Fader_Volume_8F54E8DB44CB132992E4EBA6F5FAF86B;// 0x2228(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Storm_Audio_Fader__Direction_8F54E8DB44CB132992E4EBA6F5FAF86B;// 0x222C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x222D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Storm_Audio_Fader;                                        // 0x2230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningFlashTL_LERP_C86EEA494C7B742DC045759B630397B7;   // 0x2238(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightningFlashTL__Direction_C86EEA494C7B742DC045759B630397B7;// 0x223C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x223D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightningFlashTL;                                         // 0x2240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetHead;                                               // 0x2248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetBody;                                               // 0x2250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PawnHeadMaterials_0_1;                                    // 0x2258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnBodyMaterials_0_1;                                    // 0x2268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_FlakVest;                                              // 0x2278(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          Event_Data;                                               // 0x2298(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventSpawnEffect;                                         // 0x2340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsMale;                                                   // 0x2348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2349(0x0007) MISSED OFFSET
	class AFortWeapon*                                 MenuGoingCommandowWeapon;                                 // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SafeZonePassThroughSound;                                 // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasBeenOutsideSafeZone;                                  // 0x2360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2361(0x0003) MISSED OFFSET
	struct FLinearColor                                ThreatColor;                                              // 0x2364(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2374(0x0004) MISSED OFFSET
	class USoundBase*                                  PlayerKilledSound;                                        // 0x2378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Contrail_A;                                               // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bContrailReady;                                           // 0x2388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2389(0x0007) MISSED OFFSET
	TArray<class UParticleSystem*>                     Contrails;                                                // 0x2390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             ActiveContrail;                                           // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLiveContrail;                                            // 0x23A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x23A9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Vapor_Effect;                                             // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    WindDebrisParticles;                                      // 0x23B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    FallingRainParticles;                                     // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LightningSpawnLocation;                                   // 0x23C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMin;                                    // 0x23D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMax;                                    // 0x23D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x23DC(0x0004) MISSED OFFSET
	class AActor*                                      SafeZoneActor;                                            // 0x23E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensity;                                       // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x23EC(0x0004) MISSED OFFSET
	class UPointLightComponent*                        RandomLightningLight;                                     // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMin;                            // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMax;                            // 0x23FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashDiameter;                                   // 0x2400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashHeight;                                     // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMin;                             // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMax;                             // 0x240C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                RainCameraLensParticles;                                  // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              _ChanceOfLightningMesh;                                   // 0x2418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowInvulnerableVisuals;                                  // 0x241C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x241D(0x0003) MISSED OFFSET
	class UAudioComponent*                             StormAudioLoop_Inst;                                      // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StormAudioVolume;                                         // 0x2428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveAudioGroundVolumeScale;                            // 0x242C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveMovementVolumeScale;                               // 0x2430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2434(0x0004) MISSED OFFSET
	class UAudioComponent*                             FallingAudioLoop_Inst;                                    // 0x2438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayingFallingSound;                                   // 0x2440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2441(0x0003) MISSED OFFSET
	float                                              PlayerAttributes_Speed_Walk;                              // 0x2444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerAttributes_Speed_Run;                               // 0x2448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerAttributes_Speed_Sprint;                            // 0x244C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrailsLOD;                                             // 0x2450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C");
		return ptr;
	}


	void StopLoopingAudio();
	void EnableWaterAudio(bool Is_Entering_Water);
	void HandleWaterFX();
	void ApplyParachuteMovementVolumeScale();
	void GetParachuteMovementVolumeScale(float* Scale);
	void GetLocationInCircle_XY(struct FVector* LocationLocalSpace);
	void InitAthenaFoleyAudio();
	void UserConstructionScript();
	void LightningFlashTL__FinishedFunc();
	void LightningFlashTL__UpdateFunc();
	void Storm_Audio_Fader__FinishedFunc();
	void Storm_Audio_Fader__UpdateFunc();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ReceivePossessed(class AController** NewController);
	void SetMenuScreenClassName();
	void ReceiveBeginPlay();
	void SelectPawn(class UAnimInstance* AnimInst);
	void ReceiveDestroyed();
	void GameplayCue_Athena_OutsideSafeZone(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SafeZoneStatusChanged();
	void GameplayCue_Athena_Equipping(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveTick(float* DeltaSeconds);
	void ContrailCheck();
	void GameplayCue_Athena_Player_BeingRevivedFromDBNO(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void AddStormFX();
	void RemoveStormFX();
	void StartRandomLightningFlashes();
	void RandomLightningFlashesRepeat();
	void ZapFX(int ZapCount);
	void GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void UpdateInvulnerableVisuals();
	void Add_Storm_Audio();
	void Remove_Storm_Audio();
	void Play_Lightning_Flash_Audio(const struct FVector& Location);
	void Start_Storm_Audio_Fader();
	void Update_Parachute_and_Falling_Audio();
	void OnEnteredWaterVolume();
	void OnExitedWaterVolume();
	void ExecuteUbergraph_PlayerPawn_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
