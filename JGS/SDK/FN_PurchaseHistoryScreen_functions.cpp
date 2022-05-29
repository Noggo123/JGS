// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack");

	UPurchaseHistoryScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FMtxPurchaseHistory*    PurchaseHistory                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPurchaseHistoryScreen_C::OnItemRefresh(struct FMtxPurchaseHistory* PurchaseHistory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh");

	UPurchaseHistoryScreen_C_OnItemRefresh_Params params;
	params.PurchaseHistory = PurchaseHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPurchaseHistoryScreen_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UPurchaseHistoryScreen_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPurchaseHistoryScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct");

	UPurchaseHistoryScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::ExecuteUbergraph_PurchaseHistoryScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen");

	UPurchaseHistoryScreen_C_ExecuteUbergraph_PurchaseHistoryScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
