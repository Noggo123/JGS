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

// Function WebLogin.WebLogin_C.HandleBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::HandleBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.HandleBack");

	UWebLogin_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.BindDelegates");

	UWebLogin_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::Dismiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.Dismiss");

	UWebLogin_C_Dismiss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WebWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWebLogin_C::Display(class UWidget* WebWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.Display");

	UWebLogin_C_Display_Params params;
	params.WebWidget = WebWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UWebLogin_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.OnActivated");

	UWebLogin_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWebLogin_C::ExecuteUbergraph_WebLogin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin");

	UWebLogin_C_ExecuteUbergraph_WebLogin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.OnLoginDialogDismissed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::OnLoginDialogDismissed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.OnLoginDialogDismissed__DelegateSignature");

	UWebLogin_C_OnLoginDialogDismissed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
