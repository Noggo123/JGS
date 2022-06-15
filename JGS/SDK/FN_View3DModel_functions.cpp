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

// Function View3DModel.View3DModel_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UView3DModel_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function View3DModel.View3DModel_C.HandleBack");

	UView3DModel_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function View3DModel.View3DModel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UView3DModel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function View3DModel.View3DModel_C.Construct");

	UView3DModel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function View3DModel.View3DModel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UView3DModel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function View3DModel.View3DModel_C.OnActivated");

	UView3DModel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function View3DModel.View3DModel_C.ExecuteUbergraph_View3DModel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UView3DModel_C::ExecuteUbergraph_View3DModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function View3DModel.View3DModel_C.ExecuteUbergraph_View3DModel");

	UView3DModel_C_ExecuteUbergraph_View3DModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
