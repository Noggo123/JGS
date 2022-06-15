// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemDetailsWidget.ItemDetailsWidget_C.ItemHasStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Stats                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemDetailsWidget_C::ItemHasStats(class UFortItem* Item, bool* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsWidget.ItemDetailsWidget_C.ItemHasStats");

	UItemDetailsWidget_C_ItemHasStats_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function ItemDetailsWidget.ItemDetailsWidget_C.ShowUpgradeComparison
// (Public, BlueprintCallable, BlueprintEvent)

void UItemDetailsWidget_C::ShowUpgradeComparison()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsWidget.ItemDetailsWidget_C.ShowUpgradeComparison");

	UItemDetailsWidget_C_ShowUpgradeComparison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsWidget.ItemDetailsWidget_C.PopulateAttributeList
// (Public, BlueprintCallable, BlueprintEvent)

void UItemDetailsWidget_C::PopulateAttributeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsWidget.ItemDetailsWidget_C.PopulateAttributeList");

	UItemDetailsWidget_C_PopulateAttributeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsWidget.ItemDetailsWidget_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsWidget_C::HandleDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsWidget.ItemDetailsWidget_C.HandleDifferentItemToDetailSet");

	UItemDetailsWidget_C_HandleDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsWidget.ItemDetailsWidget_C.HandleDifferentItemToCompareSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsWidget_C::HandleDifferentItemToCompareSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsWidget.ItemDetailsWidget_C.HandleDifferentItemToCompareSet");

	UItemDetailsWidget_C_HandleDifferentItemToCompareSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsWidget.ItemDetailsWidget_C.ExecuteUbergraph_ItemDetailsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsWidget_C::ExecuteUbergraph_ItemDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsWidget.ItemDetailsWidget_C.ExecuteUbergraph_ItemDetailsWidget");

	UItemDetailsWidget_C_ExecuteUbergraph_ItemDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
