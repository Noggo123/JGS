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

// Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_ConstructorTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.ExecuteUbergraph_GAT_ConstructorTriggeredAbility
struct UGAT_ConstructorTriggeredAbility_C_ExecuteUbergraph_GAT_ConstructorTriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
