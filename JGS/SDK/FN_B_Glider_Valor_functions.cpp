// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Glider_Valor.B_Glider_Valor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Glider_Valor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Valor.B_Glider_Valor_C.UserConstructionScript");

	AB_Glider_Valor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Valor.B_Glider_Valor_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         MovementLengthSquared          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForwardDot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RightDot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RotationalMovementAcceleration (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Glider_Valor_C::OnParachuteTrailUpdated(float* MovementLengthSquared, float* ForwardDot, float* RightDot, float* RotationalMovementAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Valor.B_Glider_Valor_C.OnParachuteTrailUpdated");

	AB_Glider_Valor_C_OnParachuteTrailUpdated_Params params;
	params.MovementLengthSquared = MovementLengthSquared;
	params.ForwardDot = ForwardDot;
	params.RightDot = RightDot;
	params.RotationalMovementAcceleration = RotationalMovementAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Valor.B_Glider_Valor_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)

void AB_Glider_Valor_C::ResetDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Valor.B_Glider_Valor_C.ResetDoOnce");

	AB_Glider_Valor_C_ResetDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Valor.B_Glider_Valor_C.ExecuteUbergraph_B_Glider_Valor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Glider_Valor_C::ExecuteUbergraph_B_Glider_Valor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Valor.B_Glider_Valor_C.ExecuteUbergraph_B_Glider_Valor");

	AB_Glider_Valor_C_ExecuteUbergraph_B_Glider_Valor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
