#pragma once

namespace Inventory
{
    static auto BaseAddr = (uintptr_t)(GetModuleHandle(NULL));
    static auto MarkArrayDirty = reinterpret_cast<void(*)(FFastArraySerializer)>(BaseAddr + 0x0);
    static auto MarkItemDirty = reinterpret_cast<void(*)(FFastArraySerializer, FFastArraySerializerItem)>(BaseAddr + 0x0);

	void SetupInventory(AFortPlayerController* PC)
	{
        auto NewQuickBars = (AFortQuickBars*)Util::SpawnActor(AFortQuickBars::StaticClass(), {}, {});
        NewQuickBars->SetOwner(PC);
        PC->QuickBars = NewQuickBars;
        PC->OnRep_QuickBar();

        auto PickaxeDef = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		auto EditToolDef = SDK::UObject::FindObject<SDK::UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
		auto WallBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall");
		auto FloorBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor");
		auto StairBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W");
		auto RoofBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS");
		auto pWood = SDK::UObject::FindObject<SDK::UFortWeaponItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData");
		auto pMetal = SDK::UObject::FindObject<SDK::UFortWeaponItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData");
		auto pStone = SDK::UObject::FindObject<SDK::UFortWeaponItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData");

		auto FortInventory = PC->WorldInventory;
        auto QuickBars = PC->QuickBars;

        QuickBars->EnableSlot(EFortQuickBars::Primary, 0);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 1);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 2);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 3);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 4);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 0);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 1);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 2);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 3);

        auto PickaxeItem = PickaxeDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WorldPickaxeItem = reinterpret_cast<SDK::UFortWorldItem*>(PickaxeItem);
        WorldPickaxeItem->ItemEntry.Count = 1;
        FortInventory->Inventory.MarkItemDirty(WorldPickaxeItem->ItemEntry);
        FortInventory->Inventory.ReplicatedEntries.Add(WorldPickaxeItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldPickaxeItem);
        QuickBars->ServerAddItemInternal(WorldPickaxeItem->GetItemGuid(), SDK::EFortQuickBars::Primary, 0);

        auto WallBuildItem = WallBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WallWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(WallBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(WallWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WallWorldBuildItem);
        QuickBars->ServerAddItemInternal(WallWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 0);

        auto FloorBuildItem = FloorBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto FloorWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(FloorBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(FloorWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(FloorWorldBuildItem);
        QuickBars->ServerAddItemInternal(FloorWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 1);

        auto StairBuildItem = StairBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto StairWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(StairBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(StairWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(StairWorldBuildItem);
        QuickBars->ServerAddItemInternal(StairWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 2);

        auto RoofBuildItem = RoofBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto RoofWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(RoofBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(RoofWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(RoofWorldBuildItem);
        QuickBars->ServerAddItemInternal(RoofWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 3);

        auto WoodItem = pWood->CreateTemporaryItemInstanceBP(999, 0);
        auto WorldWoodItem = reinterpret_cast<SDK::UFortWorldItem*>(WoodItem);
        WorldWoodItem->ItemEntry.Count = 999;
        FortInventory->Inventory.ReplicatedEntries.Add(WorldWoodItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldWoodItem);

        auto StoneItem = pStone->CreateTemporaryItemInstanceBP(999, 0);
        auto WorldStoneItem = reinterpret_cast<SDK::UFortWorldItem*>(StoneItem);
        WorldStoneItem->ItemEntry.Count = 999;
        FortInventory->Inventory.ReplicatedEntries.Add(WorldStoneItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldStoneItem);

        auto MetalItem = pMetal->CreateTemporaryItemInstanceBP(999, 0);
        auto WorldMetalItem = reinterpret_cast<SDK::UFortWorldItem*>(MetalItem);
        WorldMetalItem->ItemEntry.Count = 999;
        FortInventory->Inventory.ReplicatedEntries.Add(WorldMetalItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldMetalItem);
	}

	void UpdateInventory(AFortPlayerController* PC)
	{
        PC->WorldInventory->Inventory.MarkArrayDirty();

        PC->WorldInventory->HandleInventoryLocalUpdate();
        PC->HandleWorldInventoryLocalUpdate();
        PC->QuickBars->OnRep_PrimaryQuickBar();
        PC->QuickBars->OnRep_SecondaryQuickBar();
	}
}