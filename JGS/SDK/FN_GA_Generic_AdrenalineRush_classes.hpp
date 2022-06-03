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

// BlueprintGeneratedClass GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C
// 0x0292 (0x0D9C - 0x0B0A)
class UGA_Generic_AdrenalineRush_C : public UGAT_GenericActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B0A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData_0_1;                                            // 0x0B18(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             Fort_Player_Pawn;                                         // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventActivate;                                            // 0x0BC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             Montage_Info;                                             // 0x0BD0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AdrenalineRushInsta;                                      // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // 0x0C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsHOT;                                                    // 0x0C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPurge;                                                  // 0x0C49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_AdrenalineRushAOE>                   AOEValue;                                                 // 0x0C4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_AdrenalineRushDuration>              DurationValue;                                            // 0x0C4B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	struct FGameplayTag                                TargetRule;                                               // 0x0C50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HOTDuration;                                              // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C5C(0x0004) MISSED OFFSET
	struct FGameplayTag                                Target_AOE1;                                              // 0x0C60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Target_AOE2;                                              // 0x0C68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Target_AOE3;                                              // 0x0C70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          HospitalSubBuilding3;                                     // 0x0C78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BasicHOTDuration;                                         // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Upgrade1HOTDuration;                                      // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Upgrade2HOTDuration;                                      // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InstaHeal_Default;                                        // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InstaHeal_Upgrade;                                        // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0CAC(0x0004) MISSED OFFSET
	class UClass*                                      AdrenalineRushHOT;                                        // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_GameplayNegative;                                      // 0x0CB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AdrenalineRushProjectile;                                 // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InstantHealMultiplier;                                    // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HOTHealMultiplier;                                        // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_AOE_Heal;                                              // 0x0CE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HealBoost;                                             // 0x0D08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HOT;                                                   // 0x0D28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_Resurrect;                                             // 0x0D48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AOE_Heal;                                                 // 0x0D68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Insta_Heal_Upgraded;                                      // 0x0D69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Resurrect_Upgrade;                                        // 0x0D6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0D6B(0x0005) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Cooldown;                                              // 0x0D70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BaseGadgetHealValue;                                      // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalHealingValue;                                        // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HotPerSecondAmount;                                       // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C");
		return ptr;
	}


	void Setup_Ability(class UAbilitySystemComponent* AbilitySystemComponent_Ref);
	void SpawnVisuals();
	void ApplyGadgetEffects(const struct FGameplayAbilityTargetDataHandle& TargetData);
	void Cancelled_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Generic_AdrenalineRush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
