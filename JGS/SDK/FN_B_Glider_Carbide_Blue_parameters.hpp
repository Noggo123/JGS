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

// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.UserConstructionScript
struct AB_Glider_Carbide_Blue_C_UserConstructionScript_Params
{
};

// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.ReceiveBeginPlay
struct AB_Glider_Carbide_Blue_C_ReceiveBeginPlay_Params
{
};

// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.OnParachuteTrailUpdated
struct AB_Glider_Carbide_Blue_C_OnParachuteTrailUpdated_Params
{
	float*                                             MovementLengthSquared;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForwardDot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RightDot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RotationalMovementAcceleration;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.Reset
struct AB_Glider_Carbide_Blue_C_Reset_Params
{
};

// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.ReceiveEndPlay
struct AB_Glider_Carbide_Blue_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_Carbide_Blue.B_Glider_Carbide_Blue_C.ExecuteUbergraph_B_Glider_Carbide_Blue
struct AB_Glider_Carbide_Blue_C_ExecuteUbergraph_B_Glider_Carbide_Blue_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
