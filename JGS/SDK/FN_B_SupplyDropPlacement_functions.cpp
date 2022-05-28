// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_bLooted
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::OnRep_bLooted()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_bLooted");

	AB_SupplyDropPlacement_C_OnRep_bLooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_NewLocation
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::OnRep_NewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_NewLocation");

	AB_SupplyDropPlacement_C_OnRep_NewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetFallLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AB_SupplyDropPlacement_C::GetFallLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetFallLocation");

	AB_SupplyDropPlacement_C_GetFallLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetImpactLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AB_SupplyDropPlacement_C::GetImpactLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetImpactLocation");

	AB_SupplyDropPlacement_C_GetImpactLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ToggleFallingFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bToggleOn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SupplyDropPlacement_C::ToggleFallingFX(bool bToggleOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ToggleFallingFX");

	AB_SupplyDropPlacement_C_ToggleFallingFX_Params params;
	params.bToggleOn = bToggleOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ClientPlayDropFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::ClientPlayDropFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ClientPlayDropFX");

	AB_SupplyDropPlacement_C_ClientPlayDropFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnTierDrops
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LootTableIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SupplyDropPlacement_C::SpawnTierDrops(int LootTableIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnTierDrops");

	AB_SupplyDropPlacement_C_SpawnTierDrops_Params params;
	params.LootTableIndex = LootTableIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.LootSpawnPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 OutPos                         (Parm, OutParm, IsPlainOldData)

void AB_SupplyDropPlacement_C::LootSpawnPosition(struct FVector* OutPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.LootSpawnPosition");

	AB_SupplyDropPlacement_C_LootSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPos != nullptr)
		*OutPos = params.OutPos;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.InitDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSupplyDropUnlocks      InUnlocks                      (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_SupplyDropPlacement_C::InitDrop(const struct FSupplyDropUnlocks& InUnlocks)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.InitDrop");

	AB_SupplyDropPlacement_C_InitDrop_Params params;
	params.InUnlocks = InUnlocks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_SupplyDropPlacement_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintGetInteractionString");

	AB_SupplyDropPlacement_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Landed
// (Public, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::Landed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Landed");

	AB_SupplyDropPlacement_C_Landed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.IsAcceptablePositionForPlacement
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                InRotation                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortDecoTool**          DecoTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCDO                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutFailureReason               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_SupplyDropPlacement_C::IsAcceptablePositionForPlacement(class AFortDecoTool** DecoTool, bool* bIsCDO, struct FVector* InLocation, struct FRotator* InRotation, struct FText* OutFailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.IsAcceptablePositionForPlacement");

	AB_SupplyDropPlacement_C_IsAcceptablePositionForPlacement_Params params;
	params.DecoTool = DecoTool;
	params.bIsCDO = bIsCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLocation != nullptr)
		*InLocation = params.InLocation;
	if (InRotation != nullptr)
		*InRotation = params.InRotation;
	if (OutFailureReason != nullptr)
		*OutFailureReason = params.OutFailureReason;

	return params.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UpdateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SupplyDropPlacement_C::UpdateLocation(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UpdateLocation");

	AB_SupplyDropPlacement_C_UpdateLocation_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_SupplyDropPlacement_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintCanInteract");

	AB_SupplyDropPlacement_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.TurnOnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewActorEnableCollision       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SupplyDropPlacement_C::TurnOnInteract(bool bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.TurnOnInteract");

	AB_SupplyDropPlacement_C_TurnOnInteract_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLoot
// (Public, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLoot");

	AB_SupplyDropPlacement_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UserConstructionScript");

	AB_SupplyDropPlacement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__FinishedFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__FinishedFunc");

	AB_SupplyDropPlacement_C_FallingTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__UpdateFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__UpdateFunc");

	AB_SupplyDropPlacement_C_FallingTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__StartTrail__EventFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__StartTrail__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__StartTrail__EventFunc");

	AB_SupplyDropPlacement_C_FallingTimeline__StartTrail__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__Impact__EventFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__Impact__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__Impact__EventFunc");

	AB_SupplyDropPlacement_C_FallingTimeline__Impact__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ImpactFX
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::ImpactFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ImpactFX");

	AB_SupplyDropPlacement_C_ImpactFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_SupplyDropPlacement_C::BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AB_SupplyDropPlacement_C_BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OverlappingDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_SupplyDropPlacement_C::OverlappingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OverlappingDied");

	AB_SupplyDropPlacement_C_OverlappingDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SelfDestruction
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SelfDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SelfDestruction");

	AB_SupplyDropPlacement_C_SelfDestruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SupplyDropPlacement_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintOnInteract");

	AB_SupplyDropPlacement_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDrop
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::PlayDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDrop");

	AB_SupplyDropPlacement_C_PlayDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.StopFallingTimeline
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::StopFallingTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.StopFallingTimeline");

	AB_SupplyDropPlacement_C_StopFallingTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLootDestroyActor
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SpawnLootDestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLootDestroyActor");

	AB_SupplyDropPlacement_C_SpawnLootDestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDropNewTime
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::PlayDropNewTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDropNewTime");

	AB_SupplyDropPlacement_C_PlayDropNewTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SecondaryFallTick
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SecondaryFallTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SecondaryFallTick");

	AB_SupplyDropPlacement_C_SecondaryFallTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_SupplyDropPlacement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ReceiveBeginPlay");

	AB_SupplyDropPlacement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ExecuteUbergraph_B_SupplyDropPlacement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SupplyDropPlacement_C::ExecuteUbergraph_B_SupplyDropPlacement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ExecuteUbergraph_B_SupplyDropPlacement");

	AB_SupplyDropPlacement_C_ExecuteUbergraph_B_SupplyDropPlacement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
