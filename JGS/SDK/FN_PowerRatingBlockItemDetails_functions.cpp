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

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.ClearComparison
// (Public, BlueprintCallable, BlueprintEvent)

void UPowerRatingBlockItemDetails_C::ClearComparison()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.ClearComparison");

	UPowerRatingBlockItemDetails_C_ClearComparison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.UpdateComparison
// (Private, BlueprintCallable, BlueprintEvent)

void UPowerRatingBlockItemDetails_C::UpdateComparison()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.UpdateComparison");

	UPowerRatingBlockItemDetails_C_UpdateComparison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValueForComparison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingBlockItemDetails_C::SetPowerRatingValueForComparison(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValueForComparison");

	UPowerRatingBlockItemDetails_C_SetPowerRatingValueForComparison_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationDuration          (Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingBlockItemDetails_C::SetPowerRatingFromItem(class UFortItem* Item, float InterpolationDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingFromItem");

	UPowerRatingBlockItemDetails_C_SetPowerRatingFromItem_Params params;
	params.Item = Item;
	params.InterpolationDuration = InterpolationDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PowerRating                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationDuration          (Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingBlockItemDetails_C::SetPowerRatingValue(int PowerRating, float InterpolationDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValue");

	UPowerRatingBlockItemDetails_C_SetPowerRatingValue_Params params;
	params.PowerRating = PowerRating;
	params.InterpolationDuration = InterpolationDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
