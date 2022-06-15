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

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshStorageInventoryStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::RefreshStorageInventoryStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshStorageInventoryStatus");

	UItemManagementInventoryLimitStatusIndicator_C_RefreshStorageInventoryStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackStorageInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::TrackStorageInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackStorageInventory");

	UItemManagementInventoryLimitStatusIndicator_C_TrackStorageInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::RefreshWorldInventoryStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus");

	UItemManagementInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackVaultInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::TrackVaultInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackVaultInventory");

	UItemManagementInventoryLimitStatusIndicator_C_TrackVaultInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackWorldInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::TrackWorldInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackWorldInventory");

	UItemManagementInventoryLimitStatusIndicator_C_TrackWorldInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleVaultItemLimitStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::HandleVaultItemLimitStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleVaultItemLimitStateChanged");

	UItemManagementInventoryLimitStatusIndicator_C_HandleVaultItemLimitStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Construct");

	UItemManagementInventoryLimitStatusIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementInventoryLimitStatusIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Destruct");

	UItemManagementInventoryLimitStatusIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemManagementInventoryLimitStatusIndicator_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleWorldItemListChanged");

	UItemManagementInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleOutpostItemListChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemManagementInventoryLimitStatusIndicator_C::HandleOutpostItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleOutpostItemListChanged");

	UItemManagementInventoryLimitStatusIndicator_C_HandleOutpostItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementInventoryLimitStatusIndicator_C::ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator");

	UItemManagementInventoryLimitStatusIndicator_C_ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
