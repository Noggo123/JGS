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

// Function TT_Constructor_BASE.TT_Constructor_BASE_C.GetApplicationTag
struct UTT_Constructor_BASE_C_GetApplicationTag_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OutTag;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Constructor_BASE.TT_Constructor_BASE_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Constructor_BASE_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortTooltipContext**                        Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Constructor_BASE.TT_Constructor_BASE_C.InitializeAbilityInstanceInternal
struct UTT_Constructor_BASE_C_InitializeAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext**                        Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
