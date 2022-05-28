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

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnRep_StoredHit
struct AB_Prj_Athena_DanceGrenade_C_OnRep_StoredHit_Params
{
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.UserConstructionScript
struct AB_Prj_Athena_DanceGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_DanceGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnStop
struct AB_Prj_Athena_DanceGrenade_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.Stop_Rotation
struct AB_Prj_Athena_DanceGrenade_C_Stop_Rotation_Params
{
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnExploded
struct AB_Prj_Athena_DanceGrenade_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.ReceiveAnyDamage
struct AB_Prj_Athena_DanceGrenade_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnBounce
struct AB_Prj_Athena_DanceGrenade_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Athena_DanceGrenade_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.Cook
struct AB_Prj_Athena_DanceGrenade_C_Cook_Params
{
};

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.ExecuteUbergraph_B_Prj_Athena_DanceGrenade
struct AB_Prj_Athena_DanceGrenade_C_ExecuteUbergraph_B_Prj_Athena_DanceGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
