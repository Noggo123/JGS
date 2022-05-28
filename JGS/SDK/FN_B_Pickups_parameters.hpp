#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Pickups.B_Pickups_C.SetHiddenBackgroundVisualComponents
struct AB_Pickups_C_SetHiddenBackgroundVisualComponents_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SetupLight
struct AB_Pickups_C_SetupLight_Params
{
};

// Function B_Pickups.B_Pickups_C.DestroyBackgroundVisualComponents
struct AB_Pickups_C_DestroyBackgroundVisualComponents_Params
{
};

// Function B_Pickups.B_Pickups_C.ReleaseStretchMIDs
struct AB_Pickups_C_ReleaseStretchMIDs_Params
{
};

// Function B_Pickups.B_Pickups_C.ScaleHologramTimingsForPvP
struct AB_Pickups_C_ScaleHologramTimingsForPvP_Params
{
};

// Function B_Pickups.B_Pickups_C.CreateHologramMIDs
struct AB_Pickups_C_CreateHologramMIDs_Params
{
};

// Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams
struct AB_Pickups_C_SetHologramPickedUpParams_Params
{
	bool                                               Tier_0;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS
struct AB_Pickups_C_SpawnPickedUpTrailPS_Params
{
};

// Function B_Pickups.B_Pickups_C.SetRarityColor
struct AB_Pickups_C_SetRarityColor_Params
{
};

// Function B_Pickups.B_Pickups_C.UserConstructionScript
struct AB_Pickups_C_UserConstructionScript_Params
{
};

// Function B_Pickups.B_Pickups_C.ReceiveTick
struct AB_Pickups_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.OnTossed
struct AB_Pickups_C_OnTossed_Params
{
};

// Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack
struct AB_Pickups_C_OnAboutToEnterBackpack_Params
{
	class AFortPawn**                                  PickupTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.ReceiveDestroyed
struct AB_Pickups_C_ReceiveDestroyed_Params
{
};

// Function B_Pickups.B_Pickups_C.InitializeMaterial
struct AB_Pickups_C_InitializeMaterial_Params
{
};

// Function B_Pickups.B_Pickups_C.OnPickedUp
struct AB_Pickups_C_OnPickedUp_Params
{
};

// Function B_Pickups.B_Pickups_C.ReceiveBeginPlay
struct AB_Pickups_C_ReceiveBeginPlay_Params
{
};

// Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups
struct AB_Pickups_C_ExecuteUbergraph_B_Pickups_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
