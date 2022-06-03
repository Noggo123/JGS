#pragma once

#include <map>

struct QuickBarsPointer
{
    unsigned char pad[0x1C48];
    AFortQuickBars* QuickBars;
};

struct InventoryPointer
{
    unsigned char pad[0x1E78];
    AFortInventory* WorldInventory;
};

struct BuildPreviewPointer
{
    unsigned char pad[0x1948];
    ABuildingPlayerPrimitivePreview* BuildPreviewMarker;
};

struct CurrentBuildableClassPointer
{
    unsigned char pad[0x1B00];
    UClass* CurrentBuildableClass;
};

class Inventory
{
public:
    static inline std::map<AFortPlayerController*, Inventory*> InventoryMap;

    AFortPlayerController* PC;

    ABuildingPlayerPrimitivePreview* BuildPreviewWall;
    ABuildingPlayerPrimitivePreview* BuildPreviewFloor;
    ABuildingPlayerPrimitivePreview* BuildPreviewStair;
    ABuildingPlayerPrimitivePreview* BuildPreviewRoof;

    FGuid WallGuid;
    FGuid FloorGuid;
    FGuid StairGuid;
    FGuid RoofGuid;

    UClass* WallBuildClass;
    UClass* FloorBuildClass;
    UClass* StairBuildClass;
    UClass* RoofBuildClass;

    FString BuildingMat;

    void Init(AFortPlayerController* InPC)
    {
        PC = InPC;
    }

    void AddDefaultQuickBarItems()
    {
        auto QuickBars = reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars;
        auto FortInventory = reinterpret_cast<InventoryPointer*>(PC)->WorldInventory;

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

        WallGuid = WallWorldBuildItem->GetItemGuid();
        FloorGuid = FloorWorldBuildItem->GetItemGuid();
        StairGuid = StairWorldBuildItem->GetItemGuid();
        RoofGuid = RoofWorldBuildItem->GetItemGuid();
    }

    void SetupInventory()
    {
        std::map<UFortItemDefinition*, int> ItemsToAddMap;

        auto NewQuickBars = (AFortQuickBars*)Util::SpawnActor(AFortQuickBars::StaticClass(), {}, {});
        NewQuickBars->SetOwner(PC);
        reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars = NewQuickBars;
        PC->OnRep_QuickBar();

		auto pWood = UObject::FindObject<UFortItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData");
		auto pMetal = UObject::FindObject<UFortItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData");
		auto pStone = UObject::FindObject<UFortItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData");
        auto pRockets = UObject::FindObject<UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataRockets.AthenaAmmoDataRockets");
        auto pShells = UObject::FindObject<UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataShells.AthenaAmmoDataShells");
        auto pMedium = UObject::FindObject<UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
        auto pLight = UObject::FindObject<UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
        auto pHeavy = UObject::FindObject<UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy");
        ItemsToAddMap.insert_or_assign(pWood, 999);
        ItemsToAddMap.insert_or_assign(pMetal, 999);
        ItemsToAddMap.insert_or_assign(pStone, 999);
        ItemsToAddMap.insert_or_assign(pRockets, 999);
        ItemsToAddMap.insert_or_assign(pShells, 999);
        ItemsToAddMap.insert_or_assign(pMedium, 999);
        ItemsToAddMap.insert_or_assign(pLight, 999);
        ItemsToAddMap.insert_or_assign(pHeavy, 999);

        auto FortInventory = reinterpret_cast<InventoryPointer*>(PC)->WorldInventory;
        auto QuickBars = reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars;
        
        QuickBars->EnableSlot(EFortQuickBars::Primary, 0);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 1);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 2);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 3);
        QuickBars->EnableSlot(EFortQuickBars::Primary, 4);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 0);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 1);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 2);
        QuickBars->EnableSlot(EFortQuickBars::Secondary, 3);

        AddDefaultQuickBarItems();

        for (auto Item : ItemsToAddMap)
        {
            auto ItemDef = Item.first;
            auto ItemCount = Item.second;

            if (ItemDef)
            {
                auto NewWorldItem = (UFortWorldItem*)(ItemDef->CreateTemporaryItemInstanceBP(ItemCount, 0));
                FortInventory->Inventory.ReplicatedEntries.Add(NewWorldItem->ItemEntry);
                FortInventory->Inventory.ItemInstances.Add(NewWorldItem);
            }
        }

        WallBuildClass = APBWA_W1_Solid_C::StaticClass();
        FloorBuildClass = APBWA_W1_Floor_C::StaticClass();
        StairBuildClass = APBWA_W1_StairW_C::StaticClass();
        RoofBuildClass = APBWA_W1_RoofC_C::StaticClass();

        ItemsToAddMap.empty();
        ItemsToAddMap.clear();
	}

	void UpdateInventory()
	{
        reinterpret_cast<InventoryPointer*>(PC)->WorldInventory->Inventory.MarkArrayDirty();

        reinterpret_cast<InventoryPointer*>(PC)->WorldInventory->HandleInventoryLocalUpdate();
        PC->HandleWorldInventoryLocalUpdate();
        reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars->OnRep_PrimaryQuickBar();
        reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars->OnRep_SecondaryQuickBar();
	}

    void ExecuteInventoryItem(FGuid InGuid)
    {
        auto ItemInstances = reinterpret_cast<InventoryPointer*>(PC)->WorldInventory->Inventory.ItemInstances;

        for (int i = 0; i < ItemInstances.Num(); i++)
        {
            auto ItemInstance = ItemInstances[i];

            if (Util::AreGuidsTheSame(ItemInstance->GetItemGuid(), InGuid))
            {
                if (PC->Pawn)
                    ((AFortPlayerPawn*)PC->Pawn)->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemInstance->GetItemDefinitionBP(), InGuid);
            }
        }
    }
};

static Inventory* FindInventory(AFortPlayerController* PC)
{
    for (auto Inv : Inventory::InventoryMap)
    {
        if (Inv.first == PC)
            return Inv.second;
    }

    return nullptr;
}

static Inventory* CreateInventoryForPlayerController(AFortPlayerController* PC)
{
    Inventory* NewInv = new Inventory;
    NewInv->Init(PC);
    Inventory::InventoryMap.insert_or_assign(PC, NewInv);
    return NewInv;
}