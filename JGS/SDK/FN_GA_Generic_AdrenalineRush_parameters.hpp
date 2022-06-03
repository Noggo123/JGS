#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Setup_Ability
struct UGA_Generic_AdrenalineRush_C_Setup_Ability_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent_Ref;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.SpawnVisuals
struct UGA_Generic_AdrenalineRush_C_SpawnVisuals_Params
{
};

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ApplyGadgetEffects
struct UGA_Generic_AdrenalineRush_C_ApplyGadgetEffects_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
};

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Cancelled_96CD2D2546A5DCD7B7C14BBA26232864
struct UGA_Generic_AdrenalineRush_C_Cancelled_96CD2D2546A5DCD7B7C14BBA26232864_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Targeted_96CD2D2546A5DCD7B7C14BBA26232864
struct UGA_Generic_AdrenalineRush_C_Targeted_96CD2D2546A5DCD7B7C14BBA26232864_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.K2_ActivateAbility
struct UGA_Generic_AdrenalineRush_C_K2_ActivateAbility_Params
{
};

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ExecuteUbergraph_GA_Generic_AdrenalineRush
struct UGA_Generic_AdrenalineRush_C_ExecuteUbergraph_GA_Generic_AdrenalineRush_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
