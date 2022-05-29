#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AlterationWidgetButton.AlterationWidgetButton_C.SetEvolutionDetails
struct UAlterationWidgetButton_C_SetEvolutionDetails_Params
{
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.SetLevelText
struct UAlterationWidgetButton_C_SetLevelText_Params
{
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.InitText
struct UAlterationWidgetButton_C_InitText_Params
{
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.InitIcon
struct UAlterationWidgetButton_C_InitIcon_Params
{
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.ShouldFadeAlteration
struct UAlterationWidgetButton_C_ShouldFadeAlteration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.GetHighlightColor
struct UAlterationWidgetButton_C_GetHighlightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.OnSetup
struct UAlterationWidgetButton_C_OnSetup_Params
{
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton
struct UAlterationWidgetButton_C_ExecuteUbergraph_AlterationWidgetButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
