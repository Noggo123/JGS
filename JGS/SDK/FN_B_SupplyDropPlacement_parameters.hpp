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

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_bLooted
struct AB_SupplyDropPlacement_C_OnRep_bLooted_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_NewLocation
struct AB_SupplyDropPlacement_C_OnRep_NewLocation_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetFallLocation
struct AB_SupplyDropPlacement_C_GetFallLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetImpactLocation
struct AB_SupplyDropPlacement_C_GetImpactLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ToggleFallingFX
struct AB_SupplyDropPlacement_C_ToggleFallingFX_Params
{
	bool                                               bToggleOn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ClientPlayDropFX
struct AB_SupplyDropPlacement_C_ClientPlayDropFX_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnTierDrops
struct AB_SupplyDropPlacement_C_SpawnTierDrops_Params
{
	int                                                LootTableIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.LootSpawnPosition
struct AB_SupplyDropPlacement_C_LootSpawnPosition_Params
{
	struct FVector                                     OutPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.InitDrop
struct AB_SupplyDropPlacement_C_InitDrop_Params
{
	struct FSupplyDropUnlocks                          InUnlocks;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintGetInteractionString
struct AB_SupplyDropPlacement_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Landed
struct AB_SupplyDropPlacement_C_Landed_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.IsAcceptablePositionForPlacement
struct AB_SupplyDropPlacement_C_IsAcceptablePositionForPlacement_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortDecoTool**                              DecoTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCDO;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutFailureReason;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UpdateLocation
struct AB_SupplyDropPlacement_C_UpdateLocation_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintCanInteract
struct AB_SupplyDropPlacement_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.TurnOnInteract
struct AB_SupplyDropPlacement_C_TurnOnInteract_Params
{
	bool                                               bNewActorEnableCollision;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLoot
struct AB_SupplyDropPlacement_C_SpawnLoot_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UserConstructionScript
struct AB_SupplyDropPlacement_C_UserConstructionScript_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__FinishedFunc
struct AB_SupplyDropPlacement_C_FallingTimeline__FinishedFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__UpdateFunc
struct AB_SupplyDropPlacement_C_FallingTimeline__UpdateFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__StartTrail__EventFunc
struct AB_SupplyDropPlacement_C_FallingTimeline__StartTrail__EventFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__Impact__EventFunc
struct AB_SupplyDropPlacement_C_FallingTimeline__Impact__EventFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ImpactFX
struct AB_SupplyDropPlacement_C_ImpactFX_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_SupplyDropPlacement_C_BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OverlappingDied
struct AB_SupplyDropPlacement_C_OverlappingDied_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SelfDestruction
struct AB_SupplyDropPlacement_C_SelfDestruction_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintOnInteract
struct AB_SupplyDropPlacement_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDrop
struct AB_SupplyDropPlacement_C_PlayDrop_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.StopFallingTimeline
struct AB_SupplyDropPlacement_C_StopFallingTimeline_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLootDestroyActor
struct AB_SupplyDropPlacement_C_SpawnLootDestroyActor_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDropNewTime
struct AB_SupplyDropPlacement_C_PlayDropNewTime_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SecondaryFallTick
struct AB_SupplyDropPlacement_C_SecondaryFallTick_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ReceiveBeginPlay
struct AB_SupplyDropPlacement_C_ReceiveBeginPlay_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ExecuteUbergraph_B_SupplyDropPlacement
struct AB_SupplyDropPlacement_C_ExecuteUbergraph_B_SupplyDropPlacement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
