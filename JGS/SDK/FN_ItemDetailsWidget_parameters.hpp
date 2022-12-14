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

// Function ItemDetailsWidget.ItemDetailsWidget_C.ItemHasStats
struct UItemDetailsWidget_C_ItemHasStats_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stats;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDetailsWidget.ItemDetailsWidget_C.ShowUpgradeComparison
struct UItemDetailsWidget_C_ShowUpgradeComparison_Params
{
};

// Function ItemDetailsWidget.ItemDetailsWidget_C.PopulateAttributeList
struct UItemDetailsWidget_C_PopulateAttributeList_Params
{
};

// Function ItemDetailsWidget.ItemDetailsWidget_C.HandleDifferentItemToDetailSet
struct UItemDetailsWidget_C_HandleDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsWidget.ItemDetailsWidget_C.HandleDifferentItemToCompareSet
struct UItemDetailsWidget_C_HandleDifferentItemToCompareSet_Params
{
};

// Function ItemDetailsWidget.ItemDetailsWidget_C.ExecuteUbergraph_ItemDetailsWidget
struct UItemDetailsWidget_C_ExecuteUbergraph_ItemDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
