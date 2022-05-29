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

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack
struct UPurchaseHistoryScreen_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh
struct UPurchaseHistoryScreen_C_OnItemRefresh_Params
{
	struct FMtxPurchaseHistory*                        PurchaseHistory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UPurchaseHistoryScreen_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct
struct UPurchaseHistoryScreen_C_Construct_Params
{
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen
struct UPurchaseHistoryScreen_C_ExecuteUbergraph_PurchaseHistoryScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
