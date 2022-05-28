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

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.GetLocalPawnForPassBy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerPawn*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortPlayerPawn* ATracerGeneric_Athena_C::GetLocalPawnForPassBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric_Athena.TracerGeneric_Athena_C.GetLocalPawnForPassBy");

	ATracerGeneric_Athena_C_GetLocalPawnForPassBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.PlayPassBySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATracerGeneric_Athena_C::PlayPassBySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric_Athena.TracerGeneric_Athena_C.PlayPassBySound");

	ATracerGeneric_Athena_C_PlayPassBySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.TrackPassBy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Pass_Distance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATracerGeneric_Athena_C::TrackPassBy(bool* Changed, float* Pass_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric_Athena.TracerGeneric_Athena_C.TrackPassBy");

	ATracerGeneric_Athena_C_TrackPassBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
	if (Pass_Distance != nullptr)
		*Pass_Distance = params.Pass_Distance;
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATracerGeneric_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric_Athena.TracerGeneric_Athena_C.UserConstructionScript");

	ATracerGeneric_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnInit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                End                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATracerGeneric_Athena_C::OnInit(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnInit");

	ATracerGeneric_Athena_C_OnInit_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnDead
// (Event, Public, BlueprintEvent)

void ATracerGeneric_Athena_C::OnDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnDead");

	ATracerGeneric_Athena_C_OnDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric_Athena.TracerGeneric_Athena_C.ExecuteUbergraph_TracerGeneric_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATracerGeneric_Athena_C::ExecuteUbergraph_TracerGeneric_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric_Athena.TracerGeneric_Athena_C.ExecuteUbergraph_TracerGeneric_Athena");

	ATracerGeneric_Athena_C_ExecuteUbergraph_TracerGeneric_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
