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

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State Internal
struct UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
struct UBP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type_Params
{
	EConversionControlKeyRequest                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
struct UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
struct UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
struct UBP_ItemTransform_TabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
struct UBP_ItemTransform_TabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
struct UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
struct UBP_ItemTransform_TabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
struct UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
struct UBP_ItemTransform_TabButton_C_Construct_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected
struct UBP_ItemTransform_TabButton_C_OnSelected_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected
struct UBP_ItemTransform_TabButton_C_OnDeselected_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered
struct UBP_ItemTransform_TabButton_C_OnHovered_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered
struct UBP_ItemTransform_TabButton_C_OnUnhovered_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
struct UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
