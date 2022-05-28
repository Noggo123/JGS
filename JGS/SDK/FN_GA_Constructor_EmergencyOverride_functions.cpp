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

// Function GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Constructor_EmergencyOverride_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C.K2_ActivateAbilityFromEvent");

	UGA_Constructor_EmergencyOverride_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C.ExecuteUbergraph_GA_Constructor_EmergencyOverride
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_EmergencyOverride_C::ExecuteUbergraph_GA_Constructor_EmergencyOverride(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C.ExecuteUbergraph_GA_Constructor_EmergencyOverride");

	UGA_Constructor_EmergencyOverride_C_ExecuteUbergraph_GA_Constructor_EmergencyOverride_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
