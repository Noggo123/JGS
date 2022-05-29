#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.UserConstructionScript
struct AB_Prj_Ranged_FlareGun_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.PPFader__FinishedFunc
struct AB_Prj_Ranged_FlareGun_C_PPFader__FinishedFunc_Params
{
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.PPFader__UpdateFunc
struct AB_Prj_Ranged_FlareGun_C_PPFader__UpdateFunc_Params
{
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnLoaded_615134E044495378BCF0229743AFAF07
struct AB_Prj_Ranged_FlareGun_C_OnLoaded_615134E044495378BCF0229743AFAF07_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnBounce
struct AB_Prj_Ranged_FlareGun_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnStop
struct AB_Prj_Ranged_FlareGun_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveBeginPlay
struct AB_Prj_Ranged_FlareGun_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.FuseTimerMax
struct AB_Prj_Ranged_FlareGun_C_FuseTimerMax_Params
{
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnExploded
struct AB_Prj_Ranged_FlareGun_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveTick
struct AB_Prj_Ranged_FlareGun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveDestroyed
struct AB_Prj_Ranged_FlareGun_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ExecuteUbergraph_B_Prj_Ranged_FlareGun
struct AB_Prj_Ranged_FlareGun_C_ExecuteUbergraph_B_Prj_Ranged_FlareGun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
