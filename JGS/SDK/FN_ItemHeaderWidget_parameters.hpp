#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemHeaderWidget.ItemHeaderWidget_C.Show Power Block
struct UItemHeaderWidget_C_Show_Power_Block_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.Show Tier and Level
struct UItemHeaderWidget_C_Show_Tier_and_Level_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateCategoryIndicators
struct UItemHeaderWidget_C_UpdateCategoryIndicators_Params
{
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateHeaderColor
struct UItemHeaderWidget_C_UpdateHeaderColor_Params
{
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdatePowerRatingComparison
struct UItemHeaderWidget_C_UpdatePowerRatingComparison_Params
{
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToCompareSet
struct UItemHeaderWidget_C_HandleDifferentItemToCompareSet_Params
{
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.PreConstruct
struct UItemHeaderWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToDetailSet
struct UItemHeaderWidget_C_HandleDifferentItemToDetailSet_Params
{
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.ResetDisplay
struct UItemHeaderWidget_C_ResetDisplay_Params
{
};

// Function ItemHeaderWidget.ItemHeaderWidget_C.ExecuteUbergraph_ItemHeaderWidget
struct UItemHeaderWidget_C_ExecuteUbergraph_ItemHeaderWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
