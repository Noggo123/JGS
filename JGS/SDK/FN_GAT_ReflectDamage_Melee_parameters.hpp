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

// Function GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C.K2_ActivateAbilityFromEvent
struct UGAT_ReflectDamage_Melee_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C.ExecuteUbergraph_GAT_ReflectDamage_Melee
struct UGAT_ReflectDamage_Melee_C_ExecuteUbergraph_GAT_ReflectDamage_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
