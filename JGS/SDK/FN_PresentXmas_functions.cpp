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

// Function PresentXmas.PresentXmas_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APresentXmas_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas.PresentXmas_C.UserConstructionScript");

	APresentXmas_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas.PresentXmas_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APresentXmas_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas.PresentXmas_C.OnLootRepeat");

	APresentXmas_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas.PresentXmas_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void APresentXmas_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas.PresentXmas_C.OnBeginSearch");

	APresentXmas_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas.PresentXmas_C.ExecuteUbergraph_PresentXmas
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APresentXmas_C::ExecuteUbergraph_PresentXmas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas.PresentXmas_C.ExecuteUbergraph_PresentXmas");

	APresentXmas_C_ExecuteUbergraph_PresentXmas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
