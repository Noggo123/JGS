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

// BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// 0x03FD (0x221D - 0x1E20)
class APlayerPawn_Athena_Generic_C : public APlayerPawn_Athena_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1E20(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_Player_Slide_Land;                                 // 0x1E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Damage_Zap;                                        // 0x1E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_StormAura;                                         // 0x1E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Land;                                   // 0x1E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Land;                                  // 0x1E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Stand_Water;                                // 0x1E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Water;                                 // 0x1E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Water;                                  // 0x1E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_WaterInteraction_FX;                               // 0x1E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrailPS;                                              // 0x1E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HitDamageParticles;                                       // 0x1E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleFadeTL_RemoveShadow_3B9EF0C6475C736BCC63B3852E8CAE42;// 0x1E80(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CapsuleFadeTL__Direction_3B9EF0C6475C736BCC63B3852E8CAE42;// 0x1E84(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1E85(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CapsuleFadeTL;                                            // 0x1E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Full_Shield_Health_Push_890FFF234D010C9BCBE9F295A2705C47; // 0x1E90(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Full_Shield_Health_Impact_890FFF234D010C9BCBE9F295A2705C47;// 0x1E94(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Full_Shield_Health__Direction_890FFF234D010C9BCBE9F295A2705C47;// 0x1E98(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1E99(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Full_Shield_Health;                                       // 0x1EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shield_DamageTimeline_Impact_75FF79F44F745F5ADDD518B95252579B;// 0x1EA8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Shield_DamageTimeline__Direction_75FF79F44F745F5ADDD518B95252579B;// 0x1EAC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1EAD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Shield_DamageTimeline;                                    // 0x1EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shield_Regen_Timeline_Opacity_52B633C74B263B502E101781CAD89C54;// 0x1EB8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Shield_Regen_Timeline_Push_52B633C74B263B502E101781CAD89C54;// 0x1EBC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Shield_Regen_Timeline__Direction_52B633C74B263B502E101781CAD89C54;// 0x1EC0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1EC1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Shield_Regen_Timeline;                                    // 0x1EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shield_ShatterTimeline_Push_DA2014754670AF118EC02CA7B81C3DEB;// 0x1ED0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Shield_ShatterTimeline_Opacity_DA2014754670AF118EC02CA7B81C3DEB;// 0x1ED4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Shield_ShatterTimeline_HighlightCracks_DA2014754670AF118EC02CA7B81C3DEB;// 0x1ED8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Shield_ShatterTimeline__Direction_DA2014754670AF118EC02CA7B81C3DEB;// 0x1EDC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1EDD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Shield_ShatterTimeline;                                   // 0x1EE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamageDirection;                 // 0x1EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamage;                          // 0x1EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamageDirection;                 // 0x1EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamage;                          // 0x1F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitByHuskProjectileClass;                                 // 0x1F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskRangedSound;                                     // 0x1F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskMeleeSound;                                      // 0x1F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SoulSuckVictimMontage;                                    // 0x1F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Run_Particle_Activate_Speed;                              // 0x1F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Dust_Activate_Speed;                                 // 0x1F2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Particle_Reset_Speed;                                // 0x1F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnRunKickupFX_;                                     // 0x1F34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnWalkKickupFX_;                                    // 0x1F35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnDustLandFX_;                                      // 0x1F36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater;                                                // 0x1F37(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RunWalkParticleRotation;                                  // 0x1F38(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNinjaInShadowStance_;                                   // 0x1F44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1F45(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskMeleeSound;                       // 0x1F48(0x0020) (Edit, BlueprintVisible)
	class UMaterialInterface*                          Shield_Material;                                          // 0x1F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            BodyShieldMIDArray;                                       // 0x1F70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            HeadShieldMIDArray;                                       // 0x1F80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Shield_Active;                                            // 0x1F90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1F91(0x0003) MISSED OFFSET
	int                                                WaterCounter;                                             // 0x1F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Delta_Seconds;                                       // 0x1F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Damage_Wave_Animation;                             // 0x1F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Overall_Shield_Damage_Wave_Animation_Length;              // 0x1FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              size;                                                     // 0x1FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dying;                                                    // 0x1FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRippleAgain;                                           // 0x1FA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x1FAA(0x0006) MISSED OFFSET
	class USoundBase*                                  Sound_Shield_Impact;                                      // 0x1FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Destroyed;                                   // 0x1FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_FullyCharged;                                // 0x1FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_StartRecharge;                               // 0x1FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Shatter_Opacity;                                   // 0x1FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Regen_Opacity;                                            // 0x1FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Opacity;                                           // 0x1FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Shield_opacity;                                   // 0x1FDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_PushMinValue;                                      // 0x1FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Hit;                                        // 0x1FE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Recover;                                    // 0x1FE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Shatter;                                    // 0x1FE6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_FullHealth;                                 // 0x1FE7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Fully_Regened_Shield_health_Opacity;                      // 0x1FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1FEC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_GameplayCueDamageShielded;                             // 0x1FF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LatestDamageIsShieldDamage;                               // 0x2010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2011(0x0003) MISSED OFFSET
	float                                              Damage_Taken;                                             // 0x2014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Shield_Damage_Time;                                  // 0x2018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x201C(0x0004) MISSED OFFSET
	class UPoseableMeshComponent*                      NewVar_1_2;                                               // 0x2020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            CharmShieldMIDArray;                                      // 0x2028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BodyValid;                                                // 0x2038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackpackValid;                                            // 0x2039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HatValid;                                                 // 0x203A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FaceValid;                                                // 0x203B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharmValid;                                               // 0x203C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadValid;                                                // 0x203D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x203E(0x0002) MISSED OFFSET
	class UParticleSystem*                             P_DBNOResurrect;                                          // 0x2040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DBNOResurrectSound;                                       // 0x2048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               On_Player_Built_Floor;                                    // 0x2050(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2051(0x0007) MISSED OFFSET
	struct FGameplayTag                                Event_NeedRoadsActive;                                    // 0x2058(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NeedRoadsDeactive;                                  // 0x2060(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WhereWereGoingWeNeedRoads;                             // 0x2068(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Effect_Player_LandedDust;                                 // 0x2088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            TempArray;                                                // 0x2090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Shield_BodySkeletalMesh;                                  // 0x20A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_HeadSkeletalMesh;                                  // 0x20A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_CharmSkeletalMesh;                                 // 0x20B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             Sound_Player_Hit;                                         // 0x20B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        DamageForceFeedback;                                      // 0x20C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_Player_Landed_WindVector_P;                        // 0x20C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpeechBubbleWidgetClass;                                  // 0x20D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LastSpeechText;                                           // 0x20D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      DamageCameraShake;                                        // 0x20F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAnimTrailsNotifies;                                    // 0x20F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x20F9(0x0003) MISSED OFFSET
	float                                              Time_when_you_ll_be_able_to_splash_again;                 // 0x20FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class A_WaterMeshBlueprintMaster_C*                CurrentWaterMeshActor;                                    // 0x2100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  WaterTraceHitLocation;                                    // 0x2108(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StableVelocityVector;                                     // 0x2188(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x2194(0x0004) MISSED OFFSET
	class UParticleSystem*                             PlayerRunTemplate_Ground;                                 // 0x2198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Ground;                                // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerRunTemplate_Water;                                  // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Water;                                 // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Pawn_Charm_Skeletal_Mesh;                                 // 0x21B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultShieldOpacity;                                     // 0x21C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x21C4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    AnimTrailsPS_Ref;                                         // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          WeaponMaterialOverride;                                   // 0x21D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickWaterLevel;                                           // 0x21D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x21D9(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      WetnessDepthTexture;                                      // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterLevelMID;                                            // 0x21E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterDecayMID;                                            // 0x21F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_RTT_Enabled_Var_Set;                                  // 0x21F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_RTT_Enabled;                                           // 0x21F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x21FA(0x0002) MISSED OFFSET
	float                                              SlideAudioIntensity;                                      // 0x21FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingMinCapsuleShadowVis;                              // 0x2200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShielded;                                               // 0x2204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x2205(0x0003) MISSED OFFSET
	float                                              InstigatorCheckDistanceSqrd;                              // 0x2208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x220C(0x0004) MISSED OFFSET
	class UAudioComponent*                             SlidingAudio_Inst;                                        // 0x2210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideDustActivateSpeed;                                   // 0x2218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnSlideKickupFX_;                                   // 0x221C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C");
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void SetSlidingFXEnabled(bool Enabled);
	void SetSlidingAudioEnabled(bool Enabled);
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void DisableWaterLevelTick();
	void OnRep_On_Player_Built_Floor();
	void Setup_FX_Mesh_Duplicates(int Translucent_Sort_Order, bool Transfer_Material_Parameters, class UMaterialInterface** Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh);
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh);
	void ToggleShieldVisibility();
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master);
	void SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1);
	void SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push);
	void FindShieldOpacity();
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void Shield_Regen_Timeline__FinishedFunc();
	void Shield_Regen_Timeline__UpdateFunc();
	void Shield_ShatterTimeline__FinishedFunc();
	void Shield_ShatterTimeline__UpdateFunc();
	void Shield_DamageTimeline__FinishedFunc();
	void Shield_DamageTimeline__UpdateFunc();
	void Full_Shield_Health__FinishedFunc();
	void Full_Shield_Health__UpdateFunc();
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnLanded(struct FHitResult* Hit);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon);
	void ReceiveTick(float* DeltaSeconds);
	void FootStepLeft();
	void FootStepRight();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetFirstPersonCamera(bool* bNewUseFirstPersonCamera);
	void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera);
	void GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnBaseChanged(class AActor** NewBase);
	void ReceivePossessed(class AController** NewController);
	void ReceiveDestroyed();
	void ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void BindWeaponSwap(float InDuration);
	void MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev);
	void UnBindWeaponSwap();
	void MultiEndSwap(class AFortWeapon* CurrentWeapon);
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void Entered_WaterVolume();
	void CharacterDestroyed(class AActor* DestroyedActor);
	void BindOnDestroyed();
	void FadeOutCapsuleShadow();
	void AnimTrailsNotify(bool* bActive);
	void AnimTrailsSetup(class UParticleSystem** ParticleSystemReference, struct FName* FirstSocketName, struct FName* SecondSocketName, float* Width);
	void AnimTrailsDisable();
	void OnSlidingStateChanged(bool* bNewSlidingState);
	void OnLand_CE();
	void GameplayCue_Shield_PotionConsumed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
