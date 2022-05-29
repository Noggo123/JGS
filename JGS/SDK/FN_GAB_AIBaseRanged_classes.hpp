#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_AIBaseRanged.GAB_AIBaseRanged_C
// 0x0028 (0x0AE8 - 0x0AC0)
class UGAB_AIBaseRanged_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      CurrentAIAbilityTarget;                                   // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LastThrowTime;                                            // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceLastThrowToResetThrowCount;                      // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCurveTableRowHandle                        ProjectileSpeedDifficultyCurve;                           // 0x0AD8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AIBaseRanged.GAB_AIBaseRanged_C");
		return ptr;
	}


	void Completed_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_TriggerFromAnimation(struct FGameplayTag* ApplicationTag);
	void IncreaseAccuracyAndUpdateLastThrowTime();
	void ExecuteUbergraph_GAB_AIBaseRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
