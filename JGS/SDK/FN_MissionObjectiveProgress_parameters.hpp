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

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate
struct UMissionObjectiveProgress_C_GetHeightEstimate_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update
struct UMissionObjectiveProgress_C_Update_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Construct
struct UMissionObjectiveProgress_C_Construct_Params
{
};

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.ExecuteUbergraph_MissionObjectiveProgress
struct UMissionObjectiveProgress_C_ExecuteUbergraph_MissionObjectiveProgress_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
