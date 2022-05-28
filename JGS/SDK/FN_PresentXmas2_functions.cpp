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

// Function PresentXmas2.PresentXmas2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APresentXmas2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas2.PresentXmas2_C.UserConstructionScript");

	APresentXmas2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas2.PresentXmas2_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APresentXmas2_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas2.PresentXmas2_C.OnLootRepeat");

	APresentXmas2_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas2.PresentXmas2_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void APresentXmas2_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas2.PresentXmas2_C.OnBeginSearch");

	APresentXmas2_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas2.PresentXmas2_C.ExecuteUbergraph_PresentXmas2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APresentXmas2_C::ExecuteUbergraph_PresentXmas2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas2.PresentXmas2_C.ExecuteUbergraph_PresentXmas2");

	APresentXmas2_C_ExecuteUbergraph_PresentXmas2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
