// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RedirectToEpicAccount.RedirectToEpicAccount_C.BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedirectToEpicAccount_C::BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedirectToEpicAccount.RedirectToEpicAccount_C.BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	URedirectToEpicAccount_C_BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedirectToEpicAccount.RedirectToEpicAccount_C.OnSetSwitcher
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bEpicAccountForwardingEnabled  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedirectToEpicAccount_C::OnSetSwitcher(bool* bEpicAccountForwardingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedirectToEpicAccount.RedirectToEpicAccount_C.OnSetSwitcher");

	URedirectToEpicAccount_C_OnSetSwitcher_Params params;
	params.bEpicAccountForwardingEnabled = bEpicAccountForwardingEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedirectToEpicAccount.RedirectToEpicAccount_C.ExecuteUbergraph_RedirectToEpicAccount
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedirectToEpicAccount_C::ExecuteUbergraph_RedirectToEpicAccount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedirectToEpicAccount.RedirectToEpicAccount_C.ExecuteUbergraph_RedirectToEpicAccount");

	URedirectToEpicAccount_C_ExecuteUbergraph_RedirectToEpicAccount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
