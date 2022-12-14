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

// Function ItemCount.ItemCount_C.SetIsBeingPreviewed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BeingPreviewed                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::SetIsBeingPreviewed(bool BeingPreviewed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.SetIsBeingPreviewed");

	UItemCount_C_SetIsBeingPreviewed_Params params;
	params.BeingPreviewed = BeingPreviewed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.SetItemDefinition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::SetItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.SetItemDefinition");

	UItemCount_C_SetItemDefinition_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.Construct");

	UItemCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.PreConstruct");

	UItemCount_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemCount_C::ExecuteUbergraph_ItemCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount");

	UItemCount_C_ExecuteUbergraph_ItemCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
