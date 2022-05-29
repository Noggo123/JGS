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

// Function AlterationsWidget.AlterationsWidget_C.SetupAlteration
struct UAlterationsWidget_C_SetupAlteration_Params
{
	class UCommonUserWidget*                           Alteration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAlterationInfo*                         AlterationInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationsWidget.AlterationsWidget_C.CreateAlterationWidget
struct UAlterationsWidget_C_CreateAlterationWidget_Params
{
	class UCommonUserWidget*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AlterationsWidget.AlterationsWidget_C.GenerateAlteration
struct UAlterationsWidget_C_GenerateAlteration_Params
{
	class UFortAlterationInfo*                         AlterationInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationsWidget.AlterationsWidget_C.AddAlterationToVerticalbox
struct UAlterationsWidget_C_AddAlterationToVerticalbox_Params
{
	class UCommonUserWidget*                           Alteration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage
struct UAlterationsWidget_C_UpdatePerksMessage_Params
{
};

// Function AlterationsWidget.AlterationsWidget_C.Construct
struct UAlterationsWidget_C_Construct_Params
{
};

// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
struct UAlterationsWidget_C_OnItemChanged_Params
{
};

// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
struct UAlterationsWidget_C_OnItemToCompareWithChanged_Params
{
};

// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
struct UAlterationsWidget_C_OnStateChanged_Params
{
};

// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
struct UAlterationsWidget_C_OnGenerateAlteration_Params
{
	class UFortAlterationInfo**                        AlterationInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
struct UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
