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

// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFiveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SupplyDrop_C::SetTierFiveData(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFiveData");

	UGA_SupplyDrop_C_SetTierFiveData_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFourData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SupplyDrop_C::SetTierFourData(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFourData");

	UGA_SupplyDrop_C_SetTierFourData_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierThreeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SupplyDrop_C::SetTierThreeData(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierThreeData");

	UGA_SupplyDrop_C_SetTierThreeData_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierTwoData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Conditions                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SupplyDrop_C::SetTierTwoData(bool Conditions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierTwoData");

	UGA_SupplyDrop_C_SetTierTwoData_Params params;
	params.Conditions = Conditions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierOneData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SupplyDrop_C::SetTierOneData(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierOneData");

	UGA_SupplyDrop_C_SetTierOneData_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.Setup_Ability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponentRef      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SupplyDrop_C::Setup_Ability(class UAbilitySystemComponent* AbilitySystemComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.Setup_Ability");

	UGA_SupplyDrop_C_Setup_Ability_Params params;
	params.AbilitySystemComponentRef = AbilitySystemComponentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.GetAttributeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_SupplyDrop_C::GetAttributeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.GetAttributeValue");

	UGA_SupplyDrop_C_GetAttributeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SupplyDrop_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.K2_ActivateAbility");

	UGA_SupplyDrop_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SupplyDrop.GA_SupplyDrop_C.ExecuteUbergraph_GA_SupplyDrop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SupplyDrop_C::ExecuteUbergraph_GA_SupplyDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.ExecuteUbergraph_GA_SupplyDrop");

	UGA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
