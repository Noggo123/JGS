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

// Function PresentXmas5.PresentXmas5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APresentXmas5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas5.PresentXmas5_C.UserConstructionScript");

	APresentXmas5_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas5.PresentXmas5_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APresentXmas5_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas5.PresentXmas5_C.OnLootRepeat");

	APresentXmas5_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas5.PresentXmas5_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void APresentXmas5_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas5.PresentXmas5_C.OnBeginSearch");

	APresentXmas5_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PresentXmas5.PresentXmas5_C.ExecuteUbergraph_PresentXmas5
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APresentXmas5_C::ExecuteUbergraph_PresentXmas5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresentXmas5.PresentXmas5_C.ExecuteUbergraph_PresentXmas5");

	APresentXmas5_C_ExecuteUbergraph_PresentXmas5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
