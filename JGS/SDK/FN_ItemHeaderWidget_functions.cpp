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

// Function ItemHeaderWidget.ItemHeaderWidget_C.Show Power Block
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemHeaderWidget_C::Show_Power_Block(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.Show Power Block");

	UItemHeaderWidget_C_Show_Power_Block_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.Show Tier and Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemHeaderWidget_C::Show_Tier_and_Level(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.Show Tier and Level");

	UItemHeaderWidget_C_Show_Tier_and_Level_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateCategoryIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UItemHeaderWidget_C::UpdateCategoryIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateCategoryIndicators");

	UItemHeaderWidget_C_UpdateCategoryIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateHeaderColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemHeaderWidget_C::UpdateHeaderColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.UpdateHeaderColor");

	UItemHeaderWidget_C_UpdateHeaderColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.UpdatePowerRatingComparison
// (Public, BlueprintCallable, BlueprintEvent)

void UItemHeaderWidget_C::UpdatePowerRatingComparison()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.UpdatePowerRatingComparison");

	UItemHeaderWidget_C_UpdatePowerRatingComparison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToCompareSet
// (Event, Protected, BlueprintEvent)

void UItemHeaderWidget_C::HandleDifferentItemToCompareSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToCompareSet");

	UItemHeaderWidget_C_HandleDifferentItemToCompareSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UItemHeaderWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.PreConstruct");

	UItemHeaderWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemHeaderWidget_C::HandleDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.HandleDifferentItemToDetailSet");

	UItemHeaderWidget_C_HandleDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.ResetDisplay
// (BlueprintCallable, BlueprintEvent)

void UItemHeaderWidget_C::ResetDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.ResetDisplay");

	UItemHeaderWidget_C_ResetDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemHeaderWidget.ItemHeaderWidget_C.ExecuteUbergraph_ItemHeaderWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemHeaderWidget_C::ExecuteUbergraph_ItemHeaderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemHeaderWidget.ItemHeaderWidget_C.ExecuteUbergraph_ItemHeaderWidget");

	UItemHeaderWidget_C_ExecuteUbergraph_ItemHeaderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
