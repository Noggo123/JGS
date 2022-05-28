#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WebLogin.WebLogin_C.HandleBack
struct UWebLogin_C_HandleBack_Params
{
};

// Function WebLogin.WebLogin_C.BindDelegates
struct UWebLogin_C_BindDelegates_Params
{
};

// Function WebLogin.WebLogin_C.Dismiss
struct UWebLogin_C_Dismiss_Params
{
};

// Function WebLogin.WebLogin_C.Display
struct UWebLogin_C_Display_Params
{
	class UWidget*                                     WebWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WebLogin.WebLogin_C.OnActivated
struct UWebLogin_C_OnActivated_Params
{
};

// Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
struct UWebLogin_C_ExecuteUbergraph_WebLogin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WebLogin.WebLogin_C.OnLoginDialogDismissed__DelegateSignature
struct UWebLogin_C_OnLoginDialogDismissed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
