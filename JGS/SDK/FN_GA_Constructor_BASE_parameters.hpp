#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_Constructor_BASE.GA_Constructor_BASE_C.SetupAbility
struct UGA_Constructor_BASE_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BASE.GA_Constructor_BASE_C.Completed_400A07E041A9807ACF1ADC83D5DB3C7D
struct UGA_Constructor_BASE_C_Completed_400A07E041A9807ACF1ADC83D5DB3C7D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BASE.GA_Constructor_BASE_C.Cancelled_400A07E041A9807ACF1ADC83D5DB3C7D
struct UGA_Constructor_BASE_C_Cancelled_400A07E041A9807ACF1ADC83D5DB3C7D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BASE.GA_Constructor_BASE_C.Triggered_400A07E041A9807ACF1ADC83D5DB3C7D
struct UGA_Constructor_BASE_C_Triggered_400A07E041A9807ACF1ADC83D5DB3C7D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BASE.GA_Constructor_BASE_C.K2_ActivateAbility
struct UGA_Constructor_BASE_C_K2_ActivateAbility_Params
{
};

// Function GA_Constructor_BASE.GA_Constructor_BASE_C.ExecuteUbergraph_GA_Constructor_BASE
struct UGA_Constructor_BASE_C_ExecuteUbergraph_GA_Constructor_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
