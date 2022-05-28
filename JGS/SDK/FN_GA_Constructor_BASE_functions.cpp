// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_Constructor_BASE.GA_Constructor_BASE_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BASE_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BASE.GA_Constructor_BASE_C.SetupAbility");

	UGA_Constructor_BASE_C_SetupAbility_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BASE.GA_Constructor_BASE_C.Completed_400A07E041A9807ACF1ADC83D5DB3C7D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BASE_C::Completed_400A07E041A9807ACF1ADC83D5DB3C7D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BASE.GA_Constructor_BASE_C.Completed_400A07E041A9807ACF1ADC83D5DB3C7D");

	UGA_Constructor_BASE_C_Completed_400A07E041A9807ACF1ADC83D5DB3C7D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BASE.GA_Constructor_BASE_C.Cancelled_400A07E041A9807ACF1ADC83D5DB3C7D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BASE_C::Cancelled_400A07E041A9807ACF1ADC83D5DB3C7D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BASE.GA_Constructor_BASE_C.Cancelled_400A07E041A9807ACF1ADC83D5DB3C7D");

	UGA_Constructor_BASE_C_Cancelled_400A07E041A9807ACF1ADC83D5DB3C7D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BASE.GA_Constructor_BASE_C.Triggered_400A07E041A9807ACF1ADC83D5DB3C7D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BASE_C::Triggered_400A07E041A9807ACF1ADC83D5DB3C7D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BASE.GA_Constructor_BASE_C.Triggered_400A07E041A9807ACF1ADC83D5DB3C7D");

	UGA_Constructor_BASE_C_Triggered_400A07E041A9807ACF1ADC83D5DB3C7D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BASE.GA_Constructor_BASE_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Constructor_BASE_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BASE.GA_Constructor_BASE_C.K2_ActivateAbility");

	UGA_Constructor_BASE_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BASE.GA_Constructor_BASE_C.ExecuteUbergraph_GA_Constructor_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BASE_C::ExecuteUbergraph_GA_Constructor_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BASE.GA_Constructor_BASE_C.ExecuteUbergraph_GA_Constructor_BASE");

	UGA_Constructor_BASE_C_ExecuteUbergraph_GA_Constructor_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
