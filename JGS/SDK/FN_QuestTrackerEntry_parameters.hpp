#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuestTrackerEntry.QuestTrackerEntry_C.Construct
struct UQuestTrackerEntry_C_Construct_Params
{
};

// Function QuestTrackerEntry.QuestTrackerEntry_C.OnSetup
struct UQuestTrackerEntry_C_OnSetup_Params
{
};

// Function QuestTrackerEntry.QuestTrackerEntry_C.ExecuteUbergraph_QuestTrackerEntry
struct UQuestTrackerEntry_C_ExecuteUbergraph_QuestTrackerEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
