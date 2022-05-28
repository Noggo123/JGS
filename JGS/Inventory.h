#pragma once

#include <map>

namespace Inventory
{
    static auto BaseAddr = (uintptr_t)(GetModuleHandle(NULL));
    static auto MarkArrayDirty = reinterpret_cast<void(*)(FFastArraySerializer)>(BaseAddr + 0x0);
    static auto MarkItemDirty = reinterpret_cast<void(*)(FFastArraySerializer, FFastArraySerializerItem)>(BaseAddr + 0x0);

    void AddDefaultQuickBarItems(AFortPlayerController* PC)
    {
        auto QuickBars = PC->QuickBars;
        auto FortInventory = PC->WorldInventory;

        auto PickaxeDef = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
        auto EditToolDef = SDK::UObject::FindObject<SDK::UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
        auto WallBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall");
        auto FloorBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor");
        auto StairBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W");
        auto RoofBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS");

        auto PickaxeItem = PickaxeDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WorldPickaxeItem = reinterpret_cast<SDK::UFortWorldItem*>(PickaxeItem);
        WorldPickaxeItem->ItemEntry.Count = 1;
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
    }

	void SetupInventory(AFortPlayerController* PC)
	{
        std::map<UFortItemDefinition*, int> ItemsToAddMap;

        auto NewQuickBars = (AFortQuickBars*)Util::SpawnActor(AFortQuickBars::StaticClass(), {}, {});
        NewQuickBars->SetOwner(PC);
        PC->QuickBars = NewQuickBars;
        PC->OnRep_QuickBar();

		auto pWood = UObject::FindObject<UFortItemDefinition>("WoodItemData.WoodItemData");
		auto pMetal = UObject::FindObject<UFortItemDefinition>("MetalItemData.MetalItemData");
		auto pStone = UObject::FindObject<UFortItemDefinition>("StoneItemData.StoneItemData");
        auto pRockets = UObject::FindObject<UFortItemDefinition>("AthenaAmmoDataRockets.AthenaAmmoDataRockets");
        auto pShells = UObject::FindObject<UFortItemDefinition>("AthenaAmmoDataShells.AthenaAmmoDataShells");
        auto pMedium = UObject::FindObject<UFortItemDefinition>("AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
        auto pLight = UObject::FindObject<UFortItemDefinition>("AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
        auto pHeavy = UObject::FindObject<UFortItemDefinition>("AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy");
        ItemsToAddMap.insert_or_assign(pWood, 999);
        ItemsToAddMap.insert_or_assign(pMetal, 999);
        ItemsToAddMap.insert_or_assign(pStone, 999);
        ItemsToAddMap.insert_or_assign(pRockets, 999);
        ItemsToAddMap.insert_or_assign(pShells, 999);
        ItemsToAddMap.insert_or_assign(pMedium, 999);
        ItemsToAddMap.insert_or_assign(pLight, 999);
        ItemsToAddMap.insert_or_assign(pHeavy, 999);

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

        AddDefaultQuickBarItems(PC);

        for (auto Item : ItemsToAddMap)
        {
            auto ItemDef = Item.first;
            auto ItemCount = Item.second;

            auto NewWorldItem = (UFortWorldItem*)(ItemDef->CreateTemporaryItemInstanceBP(ItemCount, 0));
            FortInventory->Inventory.ReplicatedEntries.Add(NewWorldItem->ItemEntry);
            FortInventory->Inventory.ItemInstances.Add(NewWorldItem);
        }

        ItemsToAddMap.empty();
        ItemsToAddMap.clear();
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