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

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.DestroyPP
struct AB_Prj_AdrenalineRush_C_DestroyPP_Params
{
};

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.UserConstructionScript
struct AB_Prj_AdrenalineRush_C_UserConstructionScript_Params
{
};

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__FinishedFunc
struct AB_Prj_AdrenalineRush_C_PP_Shockwave__FinishedFunc_Params
{
};

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__UpdateFunc
struct AB_Prj_AdrenalineRush_C_PP_Shockwave__UpdateFunc_Params
{
};

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PassInfo
struct AB_Prj_AdrenalineRush_C_PassInfo_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AOE_Heal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Upgrade_InstaHeal;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HOT;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HOT_Duration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Resurrect;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.ExecuteUbergraph_B_Prj_AdrenalineRush
struct AB_Prj_AdrenalineRush_C_ExecuteUbergraph_B_Prj_AdrenalineRush_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
