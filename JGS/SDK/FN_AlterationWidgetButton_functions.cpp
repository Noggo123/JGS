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

// Function AlterationWidgetButton.AlterationWidgetButton_C.SetEvolutionDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::SetEvolutionDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.SetEvolutionDetails");

	UAlterationWidgetButton_C_SetEvolutionDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.SetLevelText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::SetLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.SetLevelText");

	UAlterationWidgetButton_C_SetLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.InitText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::InitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.InitText");

	UAlterationWidgetButton_C_InitText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::InitIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.InitIcon");

	UAlterationWidgetButton_C_InitIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.ShouldFadeAlteration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAlterationWidgetButton_C::ShouldFadeAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.ShouldFadeAlteration");

	UAlterationWidgetButton_C_ShouldFadeAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.GetHighlightColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UAlterationWidgetButton_C::GetHighlightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.GetHighlightColor");

	UAlterationWidgetButton_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAlterationWidgetButton_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.OnSetup");

	UAlterationWidgetButton_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationWidgetButton_C::ExecuteUbergraph_AlterationWidgetButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton");

	UAlterationWidgetButton_C_ExecuteUbergraph_AlterationWidgetButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
