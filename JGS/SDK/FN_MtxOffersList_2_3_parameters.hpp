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

// Function MtxOffersList_2_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave
struct UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseLeave_Params
{
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter
struct UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseEnter_Params
{
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.Construct
struct UMtxOffersList_2_C_Construct_Params
{
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.OnPackagesListed
struct UMtxOffersList_2_C_OnPackagesListed_Params
{
	TArray<struct FMtxPackage>                         Offers;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.OnBuyItem
struct UMtxOffersList_2_C_OnBuyItem_Params
{
	struct FString                                     OfferId;                                                  // (Parm, ZeroConstructor)
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.OnPurchaseComplete
struct UMtxOffersList_2_C_OnPurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.CustomEvent_0_1
struct UMtxOffersList_2_C_CustomEvent_0_1_Params
{
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.CustomEvent_0_Copy
struct UMtxOffersList_2_C_CustomEvent_0_Copy_Params
{
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_2_3
struct UMtxOffersList_2_C_ExecuteUbergraph_MtxOffersList_2_3_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MtxOffersList_2_3.MtxOffersList_2_C.PurchaseComplete__DelegateSignature
struct UMtxOffersList_2_C_PurchaseComplete__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
