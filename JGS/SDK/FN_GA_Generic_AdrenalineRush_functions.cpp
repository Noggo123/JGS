// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Setup_Ability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent_Ref     (Parm, ZeroConstructor, IsPlainOldData)

void UGA_Generic_AdrenalineRush_C::Setup_Ability(class UAbilitySystemComponent* AbilitySystemComponent_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Setup_Ability");

	UGA_Generic_AdrenalineRush_C_Setup_Ability_Params params;
	params.AbilitySystemComponent_Ref = AbilitySystemComponent_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.SpawnVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Generic_AdrenalineRush_C::SpawnVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.SpawnVisuals");

	UGA_Generic_AdrenalineRush_C_SpawnVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ApplyGadgetEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)

void UGA_Generic_AdrenalineRush_C::ApplyGadgetEffects(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ApplyGadgetEffects");

	UGA_Generic_AdrenalineRush_C_ApplyGadgetEffects_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Cancelled_96CD2D2546A5DCD7B7C14BBA26232864
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGA_Generic_AdrenalineRush_C::Cancelled_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Cancelled_96CD2D2546A5DCD7B7C14BBA26232864");

	UGA_Generic_AdrenalineRush_C_Cancelled_96CD2D2546A5DCD7B7C14BBA26232864_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Targeted_96CD2D2546A5DCD7B7C14BBA26232864
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGA_Generic_AdrenalineRush_C::Targeted_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Targeted_96CD2D2546A5DCD7B7C14BBA26232864");

	UGA_Generic_AdrenalineRush_C_Targeted_96CD2D2546A5DCD7B7C14BBA26232864_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Generic_AdrenalineRush_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.K2_ActivateAbility");

	UGA_Generic_AdrenalineRush_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ExecuteUbergraph_GA_Generic_AdrenalineRush
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGA_Generic_AdrenalineRush_C::ExecuteUbergraph_GA_Generic_AdrenalineRush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ExecuteUbergraph_GA_Generic_AdrenalineRush");

	UGA_Generic_AdrenalineRush_C_ExecuteUbergraph_GA_Generic_AdrenalineRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
