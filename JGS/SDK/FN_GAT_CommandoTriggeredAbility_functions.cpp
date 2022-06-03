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

// Function GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGAT_CommandoTriggeredAbility_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C.K2_ActivateAbilityFromEvent");

	UGAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C.ExecuteUbergraph_GAT_CommandoTriggeredAbility
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAT_CommandoTriggeredAbility_C::ExecuteUbergraph_GAT_CommandoTriggeredAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C.ExecuteUbergraph_GAT_CommandoTriggeredAbility");

	UGAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
