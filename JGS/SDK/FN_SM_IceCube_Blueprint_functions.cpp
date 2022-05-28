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

// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASM_IceCube_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.UserConstructionScript");

	ASM_IceCube_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ASM_IceCube_Blueprint_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.Timeline_0__FinishedFunc");

	ASM_IceCube_Blueprint_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ASM_IceCube_Blueprint_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.Timeline_0__UpdateFunc");

	ASM_IceCube_Blueprint_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASM_IceCube_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.ReceiveBeginPlay");

	ASM_IceCube_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.ExecuteUbergraph_SM_IceCube_Blueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASM_IceCube_Blueprint_C::ExecuteUbergraph_SM_IceCube_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.ExecuteUbergraph_SM_IceCube_Blueprint");

	ASM_IceCube_Blueprint_C_ExecuteUbergraph_SM_IceCube_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
