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

// Function PresentXmas4.PresentXmas4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APresentXmas4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas4.PresentXmas4_C.UserConstructionScript");

	APresentXmas4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas4.PresentXmas4_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APresentXmas4_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas4.PresentXmas4_C.OnLootRepeat");

	APresentXmas4_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas4.PresentXmas4_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void APresentXmas4_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas4.PresentXmas4_C.OnBeginSearch");

	APresentXmas4_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas4.PresentXmas4_C.ExecuteUbergraph_PresentXmas4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APresentXmas4_C::ExecuteUbergraph_PresentXmas4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas4.PresentXmas4_C.ExecuteUbergraph_PresentXmas4");

	APresentXmas4_C_ExecuteUbergraph_PresentXmas4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
