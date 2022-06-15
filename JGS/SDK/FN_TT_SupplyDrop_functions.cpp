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

// Function TT_SupplyDrop.TT_SupplyDrop_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility**       AbilityInstance                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UFortTooltipContext**    Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTT_SupplyDrop_C::InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function TT_SupplyDrop.TT_SupplyDrop_C.InitializeAbilityInstanceInternal");

	UTT_SupplyDrop_C_InitializeAbilityInstanceInternal_Params params;
	params.AbilityInstance = AbilityInstance;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TT_SupplyDrop.TT_SupplyDrop_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility**       AbilityInstance                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UFortTooltipContext**    Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           Token                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   OutText                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTT_SupplyDrop_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, struct FGameplayTag* Tag, class UFortTooltipContext** Context, struct FGameplayTag* Token, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TT_SupplyDrop.TT_SupplyDrop_C.GetTextForTokenFromAbilityInstanceInternal");

	UTT_SupplyDrop_C_GetTextForTokenFromAbilityInstanceInternal_Params params;
	params.AbilityInstance = AbilityInstance;
	params.Tag = Tag;
	params.Context = Context;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
