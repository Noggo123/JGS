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

// Function GAT_ReflectDamage.GAT_ReflectDamage_C.ReflectDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* OriginalDmgCauser              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* ReflectedDmgDealer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* OriginalDmgReceiver            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OriginalDmgCauserTags          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   OriginalDmgReceiverTags        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          OriginalDmg                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ReflectDamage_C::ReflectDamage(class UAbilitySystemComponent* OriginalDmgCauser, class UAbilitySystemComponent* ReflectedDmgDealer, class UAbilitySystemComponent* OriginalDmgReceiver, const struct FGameplayTagContainer& OriginalDmgCauserTags, const struct FGameplayTagContainer& OriginalDmgReceiverTags, float OriginalDmg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ReflectDamage.GAT_ReflectDamage_C.ReflectDamage");

	UGAT_ReflectDamage_C_ReflectDamage_Params params;
	params.OriginalDmgCauser = OriginalDmgCauser;
	params.ReflectedDmgDealer = ReflectedDmgDealer;
	params.OriginalDmgReceiver = OriginalDmgReceiver;
	params.OriginalDmgCauserTags = OriginalDmgCauserTags;
	params.OriginalDmgReceiverTags = OriginalDmgReceiverTags;
	params.OriginalDmg = OriginalDmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ReflectDamage.GAT_ReflectDamage_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_ReflectDamage_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ReflectDamage.GAT_ReflectDamage_C.K2_ActivateAbilityFromEvent");

	UGAT_ReflectDamage_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ReflectDamage.GAT_ReflectDamage_C.ExecuteUbergraph_GAT_ReflectDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ReflectDamage_C::ExecuteUbergraph_GAT_ReflectDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ReflectDamage.GAT_ReflectDamage_C.ExecuteUbergraph_GAT_ReflectDamage");

	UGAT_ReflectDamage_C_ExecuteUbergraph_GAT_ReflectDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
