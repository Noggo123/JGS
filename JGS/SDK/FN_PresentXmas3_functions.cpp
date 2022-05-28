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

// Function PresentXmas3.PresentXmas3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APresentXmas3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas3.PresentXmas3_C.UserConstructionScript");

	APresentXmas3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas3.PresentXmas3_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APresentXmas3_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas3.PresentXmas3_C.OnLootRepeat");

	APresentXmas3_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas3.PresentXmas3_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void APresentXmas3_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas3.PresentXmas3_C.OnBeginSearch");

	APresentXmas3_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas3.PresentXmas3_C.ExecuteUbergraph_PresentXmas3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APresentXmas3_C::ExecuteUbergraph_PresentXmas3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas3.PresentXmas3_C.ExecuteUbergraph_PresentXmas3");

	APresentXmas3_C_ExecuteUbergraph_PresentXmas3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
