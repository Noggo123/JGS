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

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberKillsChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberKillsChanged_Params
{
	TArray<int>                                        Kills;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMicIndicator
struct UFullPartyMemberAthena_C_UpdateMicIndicator_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HighlightEmptyBanner
struct UFullPartyMemberAthena_C_HighlightEmptyBanner_Params
{
	bool                                               BannerIsHighlighted;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberTalkingChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberTalkingChanged_Params
{
	bool                                               bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberMuteChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberMuteChanged_Params
{
	bool                                               bIsMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberChanged
struct UFullPartyMemberAthena_C_HandleAthenaTeamMemberChanged_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.InitializeConnectedWidget
struct UFullPartyMemberAthena_C_InitializeConnectedWidget_Params
{
	class UFullPartyMemberConnected_C*                 ConnectedWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.MakeLocalPlayerConfirmActions
struct UFullPartyMemberAthena_C_MakeLocalPlayerConfirmActions_Params
{
	bool                                               LocalPlayerAlone;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FConfirmationDialogAction>           OutConfirmActions;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleLocalPlayerActionsResult
struct UFullPartyMemberAthena_C_HandleLocalPlayerActionsResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateLocalPlayerAction
struct UFullPartyMemberAthena_C_UpdateLocalPlayerAction_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.DuplicateConnectedWidget
struct UFullPartyMemberAthena_C_DuplicateConnectedWidget_Params
{
	class UFullPartyMemberConnected_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateDimensions
struct UFullPartyMemberAthena_C_UpdateDimensions_Params
{
	struct FVector2D                                   NewDimensions;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnected
struct UFullPartyMemberAthena_C_ShowConnected_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnecting
struct UFullPartyMemberAthena_C_ShowConnecting_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowOpen
struct UFullPartyMemberAthena_C_ShowOpen_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMemberInfo
struct UFullPartyMemberAthena_C_UpdateMemberInfo_Params
{
	struct FFortTeamMemberInfo                         NewMemberInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.PreConstruct
struct UFullPartyMemberAthena_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Construct
struct UFullPartyMemberAthena_C_Construct_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnClicked
struct UFullPartyMemberAthena_C_OnClicked_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.TeamMemberChanged
struct UFullPartyMemberAthena_C_TeamMemberChanged_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.MutedStateChanged
struct UFullPartyMemberAthena_C_MutedStateChanged_Params
{
	bool*                                              Muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.TalkingStateChanged
struct UFullPartyMemberAthena_C_TalkingStateChanged_Params
{
	bool*                                              bTalking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.PlayerNameChanged
struct UFullPartyMemberAthena_C_PlayerNameChanged_Params
{
	struct FString*                                    PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
struct UFullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
