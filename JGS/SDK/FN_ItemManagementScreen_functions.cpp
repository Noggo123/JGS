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

// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCraftFailCause            FailCause                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::ShowCraftError(EFortCraftFailCause FailCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError");

	UItemManagementScreen_C_ShowCraftError_Params params;
	params.FailCause = FailCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*      SchematicItem                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::CraftAndSlot(class UFortSchematicItem* SchematicItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot");

	UItemManagementScreen_C_CraftAndSlot_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToEquip                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleEquip(class UFortItem* ItemToEquip, bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip");

	UItemManagementScreen_C_HandleEquip_Params params;
	params.ItemToEquip = ItemToEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::SizeInventoryPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel");

	UItemManagementScreen_C_SizeInventoryPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemManagementScreen_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnDrop");

	UItemManagementScreen_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ItemDescription                (Parm, OutParm)

void UItemManagementScreen_C::GetDescriptionText(struct FText* ItemDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText");

	UItemManagementScreen_C_GetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDescription != nullptr)
		*ItemDescription = params.ItemDescription;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToInspect                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleInspect(class UFortItem* ItemToInspect, bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect");

	UItemManagementScreen_C_HandleInspect_Params params;
	params.ItemToInspect = ItemToInspect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::HandleClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleClose");

	UItemManagementScreen_C_HandleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40");

	UItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
// (BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA");

	UItemManagementScreen_C_OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
// (Event, Public, BlueprintEvent)

void UItemManagementScreen_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP");

	UItemManagementScreen_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleEquipItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP");

	UItemManagementScreen_C_HandleEquipItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortSchematicItem**     SchematicItem                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleCraftItemBP(class UFortSchematicItem** SchematicItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP");

	UItemManagementScreen_C_HandleCraftItemBP_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CraftabilityRefresh
// (BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::CraftabilityRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CraftabilityRefresh");

	UItemManagementScreen_C_CraftabilityRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortConsumableAccountItem** ConsumableItem                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleConsumeItemBP(class UFortConsumableAccountItem** ConsumableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP");

	UItemManagementScreen_C_HandleConsumeItemBP_Params params;
	params.ConsumableItem = ConsumableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemManagementScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnActivated");

	UItemManagementScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleInspectItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP");

	UItemManagementScreen_C_HandleInspectItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::ExecuteUbergraph_ItemManagementScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen");

	UItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
