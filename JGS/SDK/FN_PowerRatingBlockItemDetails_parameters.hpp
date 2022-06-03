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

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.ClearComparison
struct UPowerRatingBlockItemDetails_C_ClearComparison_Params
{
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.UpdateComparison
struct UPowerRatingBlockItemDetails_C_UpdateComparison_Params
{
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValueForComparison
struct UPowerRatingBlockItemDetails_C_SetPowerRatingValueForComparison_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingFromItem
struct UPowerRatingBlockItemDetails_C_SetPowerRatingFromItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValue
struct UPowerRatingBlockItemDetails_C_SetPowerRatingValue_Params
{
	int                                                PowerRating;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
