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

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Durrrables_MovementSpeed_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.OnRemove");

	AGCNL_Durrrables_MovementSpeed_C_OnRemove_Params params;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;

	return params.ReturnValue;
}


// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Durrrables_MovementSpeed_C::WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.WhileActive");

	AGCNL_Durrrables_MovementSpeed_C_WhileActive_Params params;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;

	return params.ReturnValue;
}


// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Durrrables_MovementSpeed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.UserConstructionScript");

	AGCNL_Durrrables_MovementSpeed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
