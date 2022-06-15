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

// Function QuestTrackerEntry.QuestTrackerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestTrackerEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerEntry.QuestTrackerEntry_C.Construct");

	UQuestTrackerEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerEntry.QuestTrackerEntry_C.OnSetup
// (Event, Protected, BlueprintEvent)

void UQuestTrackerEntry_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerEntry.QuestTrackerEntry_C.OnSetup");

	UQuestTrackerEntry_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerEntry.QuestTrackerEntry_C.ExecuteUbergraph_QuestTrackerEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuestTrackerEntry_C::ExecuteUbergraph_QuestTrackerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerEntry.QuestTrackerEntry_C.ExecuteUbergraph_QuestTrackerEntry");

	UQuestTrackerEntry_C_ExecuteUbergraph_QuestTrackerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
