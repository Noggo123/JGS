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

// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.UserConstructionScript
struct AB_Post_SupplyDrop_Impact_C_UserConstructionScript_Params
{
};

// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__FinishedFunc
struct AB_Post_SupplyDrop_Impact_C_Timeline_0__FinishedFunc_Params
{
};

// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__UpdateFunc
struct AB_Post_SupplyDrop_Impact_C_Timeline_0__UpdateFunc_Params
{
};

// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.SpawnPostFX
struct AB_Post_SupplyDrop_Impact_C_SpawnPostFX_Params
{
	float                                              PostFX_BoxScaleDyn;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PostFX_CamShakeLoc;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               PostFX_UseCamShake;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PostFX_DeactivateDelay;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PostFX_UseForceFeedback;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.ExecuteUbergraph_B_Post_SupplyDrop_Impact
struct AB_Post_SupplyDrop_Impact_C_ExecuteUbergraph_B_Post_SupplyDrop_Impact_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
