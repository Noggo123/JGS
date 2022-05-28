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

// Function WM_Pin_Master.WM_Pin_Master_C.UpdateSelectionState
struct AWM_Pin_Master_C_UpdateSelectionState_Params
{
};

// Function WM_Pin_Master.WM_Pin_Master_C.OnQuestsCompleted
struct AWM_Pin_Master_C_OnQuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      QuestItems;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterSelected
struct AWM_Pin_Master_C_OnTheaterSelected_Params
{
	struct FString                                     TheaterId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WM_Pin_Master.WM_Pin_Master_C.OnSetPreviewedSceneTheater
struct AWM_Pin_Master_C_OnSetPreviewedSceneTheater_Params
{
	struct FString                                     PreviewedTheaterId;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WM_Pin_Master.WM_Pin_Master_C.InitializeContextEvents
struct AWM_Pin_Master_C_InitializeContextEvents_Params
{
};

// Function WM_Pin_Master.WM_Pin_Master_C.UpdateVisuals
struct AWM_Pin_Master_C_UpdateVisuals_Params
{
};

// Function WM_Pin_Master.WM_Pin_Master_C.GetRequiredText
struct AWM_Pin_Master_C_GetRequiredText_Params
{
	struct FText                                       RequirementText;                                          // (Parm, OutParm)
};

// Function WM_Pin_Master.WM_Pin_Master_C.CanAccessPin
struct AWM_Pin_Master_C_CanAccessPin_Params
{
	bool                                               Accessible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WM_Pin_Master.WM_Pin_Master_C.IsLeader
struct AWM_Pin_Master_C_IsLeader_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WM_Pin_Master.WM_Pin_Master_C.UserConstructionScript
struct AWM_Pin_Master_C_UserConstructionScript_Params
{
};

// Function WM_Pin_Master.WM_Pin_Master_C.ReceiveBeginPlay
struct AWM_Pin_Master_C_ReceiveBeginPlay_Params
{
};

// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnClicked
struct AWM_Pin_Master_C_HandleOnClicked_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnBeginCursorOver
struct AWM_Pin_Master_C_HandleOnBeginCursorOver_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnEndCursorOver
struct AWM_Pin_Master_C_HandleOnEndCursorOver_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterIdSet
struct AWM_Pin_Master_C_OnTheaterIdSet_Params
{
};

// Function WM_Pin_Master.WM_Pin_Master_C.ExecuteUbergraph_WM_Pin_Master
struct AWM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
