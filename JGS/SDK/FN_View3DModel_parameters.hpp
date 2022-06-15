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

// Function View3DModel.View3DModel_C.HandleBack
struct UView3DModel_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function View3DModel.View3DModel_C.Construct
struct UView3DModel_C_Construct_Params
{
};

// Function View3DModel.View3DModel_C.OnActivated
struct UView3DModel_C_OnActivated_Params
{
};

// Function View3DModel.View3DModel_C.ExecuteUbergraph_View3DModel
struct UView3DModel_C_ExecuteUbergraph_View3DModel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
