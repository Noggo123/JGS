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

// Function PresentXmas6.PresentXmas6_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APresentXmas6_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas6.PresentXmas6_C.UserConstructionScript");

	APresentXmas6_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas6.PresentXmas6_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APresentXmas6_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas6.PresentXmas6_C.OnLootRepeat");

	APresentXmas6_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas6.PresentXmas6_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void APresentXmas6_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas6.PresentXmas6_C.OnBeginSearch");

	APresentXmas6_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas6.PresentXmas6_C.ExecuteUbergraph_PresentXmas6
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APresentXmas6_C::ExecuteUbergraph_PresentXmas6(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas6.PresentXmas6_C.ExecuteUbergraph_PresentXmas6");

	APresentXmas6_C_ExecuteUbergraph_PresentXmas6_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
