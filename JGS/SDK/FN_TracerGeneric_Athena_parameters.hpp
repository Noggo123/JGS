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

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.GetLocalPawnForPassBy
struct ATracerGeneric_Athena_C_GetLocalPawnForPassBy_Params
{
	class AFortPlayerPawn*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.PlayPassBySound
struct ATracerGeneric_Athena_C_PlayPassBySound_Params
{
};

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.TrackPassBy
struct ATracerGeneric_Athena_C_TrackPassBy_Params
{
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Pass_Distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.UserConstructionScript
struct ATracerGeneric_Athena_C_UserConstructionScript_Params
{
};

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnInit
struct ATracerGeneric_Athena_C_OnInit_Params
{
	struct FVector*                                    Start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.OnDead
struct ATracerGeneric_Athena_C_OnDead_Params
{
};

// Function TracerGeneric_Athena.TracerGeneric_Athena_C.ExecuteUbergraph_TracerGeneric_Athena
struct ATracerGeneric_Athena_C_ExecuteUbergraph_TracerGeneric_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
