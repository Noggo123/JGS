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

// BlueprintGeneratedClass GA_Constructor_BASE.GA_Constructor_BASE_C
// 0x0397 (0x0F11 - 0x0B7A)
class UGA_Constructor_BASE_C : public UGAT_ConstructorActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B7A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0B88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_PlaceBase;                                              // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundPlacement;                                           // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundActivation;                                          // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_FullyContained;                                        // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FullyContained;                                        // 0x0BB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortAbilityDecoTool*                        DecoTool;                                                 // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FAbilityToolSpawnParameters                 SpawnParameters;                                          // 0x0BD8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Grant_ReflectDamage_Melee_BASE;                        // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_DamageReflect_Type;                                    // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ContainmentUnit;                                       // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FullyContained;                                           // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C19(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_AutomatedDefenses;                                     // 0x0C20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AutomatedDefenses;                                        // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0C41(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BigBrother;                                            // 0x0C48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BigBrother;                                               // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0C69(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_MegaBASE;                                              // 0x0C70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MegaBASE;                                                 // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0C91(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_ElectrifiedFloors;                                     // 0x0C98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ElectrifiedFloors;                                        // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0CB9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_SafetyProtocols;                                       // 0x0CC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SafetyProtocols;                                          // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0CE1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_LoftyArchitecture;                                     // 0x0CE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LoftyArchitecture;                                        // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0D09(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_PowerModulation;                                       // 0x0D10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PowerModulation;                                          // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0D31(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Overclocking;                                          // 0x0D38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Overclocking;                                             // 0x0D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0D59(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Recycling;                                             // 0x0D60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Recycling;                                                // 0x0D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0D81(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Hyperthreading;                                        // 0x0D88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Hyperthreading;                                           // 0x0DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0DA9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_ExitPlan;                                              // 0x0DB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ExitPlan;                                                 // 0x0DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0DD1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_StrongerExit;                                          // 0x0DD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               StrongerExit;                                             // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0DF9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_FasterExit;                                            // 0x0E00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FasterExit;                                               // 0x0E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0E21(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_ShieldCapacitor;                                       // 0x0E28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShieldCapacitor;                                          // 0x0E48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0E49(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_NeuroFeedbackLoop;                                     // 0x0E50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NeuroFeedbackLoop;                                        // 0x0E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0E71(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_CardioFeedbackLoop;                                    // 0x0E78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CardioFeedbackLoop;                                       // 0x0E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0E99(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_DefensiveIntegration;                                  // 0x0EA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DefensiveIntegration;                                     // 0x0EC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0EC1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_TotalIntegration;                                      // 0x0EC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TotalIntegration;                                         // 0x0EE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0EE9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_TrapDamage;                                            // 0x0EF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TrapDamage;                                               // 0x0F10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_BASE.GA_Constructor_BASE_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	void Completed_400A07E041A9807ACF1ADC83D5DB3C7D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_400A07E041A9807ACF1ADC83D5DB3C7D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_400A07E041A9807ACF1ADC83D5DB3C7D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Constructor_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
