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

// Function MtxOffersList_2_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave
// (Public, BlueprintCallable, BlueprintEvent)

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave");

	UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)

void UMtxOffersList_2_C::PlayMtxOfferAnimation_MouseEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter");

	UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMtxOffersList_2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.Construct");

	UMtxOffersList_2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.OnPackagesListed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMtxPackage>     Offers                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMtxOffersList_2_C::OnPackagesListed(TArray<struct FMtxPackage> Offers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.OnPackagesListed");

	UMtxOffersList_2_C_OnPackagesListed_Params params;
	params.Offers = Offers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.OnBuyItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OfferId                        (Parm, ZeroConstructor)

void UMtxOffersList_2_C::OnBuyItem(const struct FString& OfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.OnBuyItem");

	UMtxOffersList_2_C_OnBuyItem_Params params;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.OnPurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UMtxOffersList_2_C::OnPurchaseComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.OnPurchaseComplete");

	UMtxOffersList_2_C_OnPurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.CustomEvent_0_1
// (BlueprintCallable, BlueprintEvent)

void UMtxOffersList_2_C::CustomEvent_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.CustomEvent_0_1");

	UMtxOffersList_2_C_CustomEvent_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.CustomEvent_0_Copy
// (BlueprintCallable, BlueprintEvent)

void UMtxOffersList_2_C::CustomEvent_0_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.CustomEvent_0_Copy");

	UMtxOffersList_2_C_CustomEvent_0_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_2_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMtxOffersList_2_C::ExecuteUbergraph_MtxOffersList_2_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_2_3");

	UMtxOffersList_2_C_ExecuteUbergraph_MtxOffersList_2_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MtxOffersList_2_3.MtxOffersList_2_C.PurchaseComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UMtxOffersList_2_C::PurchaseComplete__DelegateSignature(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MtxOffersList_2_3.MtxOffersList_2_C.PurchaseComplete__DelegateSignature");

	UMtxOffersList_2_C_PurchaseComplete__DelegateSignature_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
