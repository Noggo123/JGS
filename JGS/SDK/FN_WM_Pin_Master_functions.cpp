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

// Function WM_Pin_Master.WM_Pin_Master_C.UpdateSelectionState
// (Public, BlueprintCallable, BlueprintEvent)

void AWM_Pin_Master_C::UpdateSelectionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.UpdateSelectionState");

	AWM_Pin_Master_C_UpdateSelectionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.OnQuestsCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  QuestItems                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWM_Pin_Master_C::OnQuestsCompleted(TArray<class UFortQuestItem*>* QuestItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.OnQuestsCompleted");

	AWM_Pin_Master_C_OnQuestsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestItems != nullptr)
		*QuestItems = params.QuestItems;
}


// Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TheaterId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AWM_Pin_Master_C::OnTheaterSelected(const struct FString& TheaterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterSelected");

	AWM_Pin_Master_C_OnTheaterSelected_Params params;
	params.TheaterId = TheaterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.OnSetPreviewedSceneTheater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PreviewedTheaterId             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AWM_Pin_Master_C::OnSetPreviewedSceneTheater(const struct FString& PreviewedTheaterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.OnSetPreviewedSceneTheater");

	AWM_Pin_Master_C_OnSetPreviewedSceneTheater_Params params;
	params.PreviewedTheaterId = PreviewedTheaterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void AWM_Pin_Master_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.InitializeContextEvents");

	AWM_Pin_Master_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.UpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AWM_Pin_Master_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.UpdateVisuals");

	AWM_Pin_Master_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.GetRequiredText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   RequirementText                (Parm, OutParm)

void AWM_Pin_Master_C::GetRequiredText(struct FText* RequirementText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.GetRequiredText");

	AWM_Pin_Master_C_GetRequiredText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequirementText != nullptr)
		*RequirementText = params.RequirementText;
}


// Function WM_Pin_Master.WM_Pin_Master_C.CanAccessPin
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Accessible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWM_Pin_Master_C::CanAccessPin(bool* Accessible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.CanAccessPin");

	AWM_Pin_Master_C_CanAccessPin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accessible != nullptr)
		*Accessible = params.Accessible;
}


// Function WM_Pin_Master.WM_Pin_Master_C.IsLeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWM_Pin_Master_C::IsLeader(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.IsLeader");

	AWM_Pin_Master_C_IsLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function WM_Pin_Master.WM_Pin_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWM_Pin_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.UserConstructionScript");

	AWM_Pin_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWM_Pin_Master_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.ReceiveBeginPlay");

	AWM_Pin_Master_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AWM_Pin_Master_C::HandleOnClicked(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.HandleOnClicked");

	AWM_Pin_Master_C_HandleOnClicked_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnBeginCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWM_Pin_Master_C::HandleOnBeginCursorOver(class AActor* TouchedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.HandleOnBeginCursorOver");

	AWM_Pin_Master_C_HandleOnBeginCursorOver_Params params;
	params.TouchedActor = TouchedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnEndCursorOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWM_Pin_Master_C::HandleOnEndCursorOver(class AActor* TouchedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.HandleOnEndCursorOver");

	AWM_Pin_Master_C_HandleOnEndCursorOver_Params params;
	params.TouchedActor = TouchedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterIdSet
// (Event, Public, BlueprintEvent)

void AWM_Pin_Master_C::OnTheaterIdSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterIdSet");

	AWM_Pin_Master_C_OnTheaterIdSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Pin_Master.WM_Pin_Master_C.ExecuteUbergraph_WM_Pin_Master
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWM_Pin_Master_C::ExecuteUbergraph_WM_Pin_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Pin_Master.WM_Pin_Master_C.ExecuteUbergraph_WM_Pin_Master");

	AWM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
