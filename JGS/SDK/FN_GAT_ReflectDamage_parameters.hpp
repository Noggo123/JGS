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

// Function GAT_ReflectDamage.GAT_ReflectDamage_C.ReflectDamage
struct UGAT_ReflectDamage_C_ReflectDamage_Params
{
	class UAbilitySystemComponent*                     OriginalDmgCauser;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     ReflectedDmgDealer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     OriginalDmgReceiver;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OriginalDmgCauserTags;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       OriginalDmgReceiverTags;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              OriginalDmg;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_ReflectDamage.GAT_ReflectDamage_C.K2_ActivateAbilityFromEvent
struct UGAT_ReflectDamage_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_ReflectDamage.GAT_ReflectDamage_C.ExecuteUbergraph_GAT_ReflectDamage
struct UGAT_ReflectDamage_C_ExecuteUbergraph_GAT_ReflectDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
