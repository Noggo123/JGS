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

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_KineticOverload_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.SetupAbility");

	UGA_Constructor_KineticOverload_C_SetupAbility_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGA_Constructor_KineticOverload_C::GetCustomAbilitySourceTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.GetCustomAbilitySourceTransform");

	UGA_Constructor_KineticOverload_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.HitTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_KineticOverload_C::HitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.HitTarget");

	UGA_Constructor_KineticOverload_C_HitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData*     Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Constructor_KineticOverload_C::K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ShouldAbilityRespondToEvent");

	UGA_Constructor_KineticOverload_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Cancelled_AEF31BFB4F9F700D450DB3A243436FC5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_KineticOverload_C::Cancelled_AEF31BFB4F9F700D450DB3A243436FC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Cancelled_AEF31BFB4F9F700D450DB3A243436FC5");

	UGA_Constructor_KineticOverload_C_Cancelled_AEF31BFB4F9F700D450DB3A243436FC5_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Targeted_AEF31BFB4F9F700D450DB3A243436FC5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_KineticOverload_C::Targeted_AEF31BFB4F9F700D450DB3A243436FC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Targeted_AEF31BFB4F9F700D450DB3A243436FC5");

	UGA_Constructor_KineticOverload_C_Targeted_AEF31BFB4F9F700D450DB3A243436FC5_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Constructor_KineticOverload_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ActivateAbilityFromEvent");

	UGA_Constructor_KineticOverload_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.AbilityTimeout
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_KineticOverload_C::AbilityTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.AbilityTimeout");

	UGA_Constructor_KineticOverload_C_AbilityTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.ExecuteUbergraph_GA_Constructor_KineticOverload
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_KineticOverload_C::ExecuteUbergraph_GA_Constructor_KineticOverload(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.ExecuteUbergraph_GA_Constructor_KineticOverload");

	UGA_Constructor_KineticOverload_C_ExecuteUbergraph_GA_Constructor_KineticOverload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
