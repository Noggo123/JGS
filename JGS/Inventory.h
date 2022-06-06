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

struct AFortAsBuildPreviewMID
{
public:
    unsigned char UnknownData00[0x1AE8];
    class UMaterialInstanceDynamic* BuildPreviewMarkerMID;
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

    UStaticMesh* WallBuildMesh;
    UStaticMesh* FloorBuildMesh;
    UStaticMesh* StairBuildMesh;
    UStaticMesh* RoofBuildMesh;

    UClass* BuildClassWall;
    UClass* BuildClassFloor;
    UClass* BuildClassStair;
    UClass* BuildClassRoof;

    UBuildingEditModeMetadata_Wall* MetadataWall;
    UBuildingEditModeMetadata_Roof* MetadataRoof;
    UBuildingEditModeMetadata_Stair* MetadataStair;
    UBuildingEditModeMetadata_Floor* MetadataFloor;

    FString BuildingMat;

    void Init(AFortPlayerController* InPC)
    {
        PC = InPC;
    }

    void AddDefaultQuickBarItems()
    {
        auto QuickBars = reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars;
        auto FortInventory = reinterpret_cast<InventoryPointer*>(PC)->WorldInventory;

        static auto PickaxeDef = FindObjectFast<UFortWeaponItemDefinition>("/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
        static auto EditToolDef = FindObjectFast<UFortEditToolItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");
        static auto WallBuildDef = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
        static auto FloorBuildDef = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
        static auto StairBuildDef = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
        static auto RoofBuildDef = FindObjectFast<UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

        auto EditToolItem = EditToolDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WorldEditToolItem = (UFortWorldItem*)EditToolItem;
        WorldEditToolItem->ItemEntry.Count = 1;
        FortInventory->Inventory.ReplicatedEntries.Add(WorldEditToolItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldEditToolItem);

        auto PickaxeItem = PickaxeDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WorldPickaxeItem = reinterpret_cast<UFortWorldItem*>(PickaxeItem);
        WorldPickaxeItem->ItemEntry.Count = 1;
        FortInventory->Inventory.ReplicatedEntries.Add(WorldPickaxeItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldPickaxeItem);
        QuickBars->ServerAddItemInternal(WorldPickaxeItem->GetItemGuid(), EFortQuickBars::Primary, 0);

        auto WallBuildItem = WallBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WallWorldBuildItem = reinterpret_cast<UFortWorldItem*>(WallBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(WallWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WallWorldBuildItem);
        QuickBars->ServerAddItemInternal(WallWorldBuildItem->GetItemGuid(), EFortQuickBars::Secondary, 0);

        auto FloorBuildItem = FloorBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto FloorWorldBuildItem = reinterpret_cast<UFortWorldItem*>(FloorBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(FloorWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(FloorWorldBuildItem);
        QuickBars->ServerAddItemInternal(FloorWorldBuildItem->GetItemGuid(), EFortQuickBars::Secondary, 1);

        auto StairBuildItem = StairBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto StairWorldBuildItem = reinterpret_cast<UFortWorldItem*>(StairBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(StairWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(StairWorldBuildItem);
        QuickBars->ServerAddItemInternal(StairWorldBuildItem->GetItemGuid(), EFortQuickBars::Secondary, 2);

        auto RoofBuildItem = RoofBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto RoofWorldBuildItem = reinterpret_cast<UFortWorldItem*>(RoofBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(RoofWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(RoofWorldBuildItem);
        QuickBars->ServerAddItemInternal(RoofWorldBuildItem->GetItemGuid(), EFortQuickBars::Secondary, 3);

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

        static auto pWood = FindObjectFast<UFortItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
        static auto pMetal = FindObjectFast<UFortItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");
        static auto pStone = FindObjectFast<UFortItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
        static auto pRockets = FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Ammo/AmmoDataRockets.AmmoDataRockets");
        static auto pShells = FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataShells.AthenaAmmoDataShells");
        static auto pMedium = FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
        static auto pLight = FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
        static auto pHeavy = FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy");
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

        WallBuildMesh = FindObjectFast<UStaticMesh>("/Game/Packages/PBW/Wood/L1/PBW_W1_Solid.PBW_W1_Solid");
        FloorBuildMesh = FindObjectFast<UStaticMesh>("/Game/Packages/PBW/Wood/L1/PBW_W1_Floor.PBW_W1_Floor");
        StairBuildMesh = FindObjectFast<UStaticMesh>("/Game/Packages/PBW/Wood/L1/PBW_W1_StairW.PBW_W1_StairW");
        RoofBuildMesh = FindObjectFast<UStaticMesh>("/Game/Packages/PBW/Wood/L1/PBW_W1_RoofC.PBW_W1_RoofC");

        BuildClassWall = APBWA_W1_Solid_C::StaticClass();
        BuildClassFloor = APBWA_W1_Floor_C::StaticClass();
        BuildClassStair = APBWA_M1_StairW_C::StaticClass();
        BuildClassRoof = APBWA_W1_RoofC_C::StaticClass();

        ItemsToAddMap.empty();
        ItemsToAddMap.clear();

        PC->bHasInitializedWorldInventory = true;
	}

	void UpdateInventory()
	{
        reinterpret_cast<InventoryPointer*>(PC)->WorldInventory->Inventory.MarkArrayDirty();

        reinterpret_cast<InventoryPointer*>(PC)->WorldInventory->HandleInventoryLocalUpdate();
        PC->HandleWorldInventoryLocalUpdate();
        reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars->OnRep_PrimaryQuickBar();
        reinterpret_cast<QuickBarsPointer*>(PC)->QuickBars->OnRep_SecondaryQuickBar();
	}

    void CreateBuildPreviews()
    {
        BuildPreviewRoof = static_cast<ABuildingPlayerPrimitivePreview*>(Util::SpawnActor(ABuildingPlayerPrimitivePreview::StaticClass(), {}, {}));
        BuildPreviewRoof->bAlwaysRelevant = true;
        auto pBuildingEditSupportRoof = reinterpret_cast<UBuildingEditModeSupport_Roof*>(Globals::GPS->STATIC_SpawnObject(UBuildingEditModeSupport_Roof::StaticClass(), Globals::World));
        pBuildingEditSupportRoof->Outer = BuildPreviewRoof;
        BuildPreviewRoof->EditModeSupport = pBuildingEditSupportRoof;
        auto pComponent = BuildPreviewRoof->GetBuildingMeshComponent();
        pComponent->SetStaticMesh(RoofBuildMesh);
        pComponent->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(PC)->BuildPreviewMarkerMID);
        BuildPreviewRoof->BuildingType = EFortBuildingType::Roof;
        MetadataRoof = FindObjectFast<UBuildingEditModeMetadata_Roof>("/Game/Building/EditModePatterns/Roof/EMP_Roof_RoofC.EMP_Roof_RoofC");
        BuildPreviewRoof->EditModePatternData = MetadataRoof;
        BuildPreviewRoof->EditModeSupportClass = UBuildingEditModeSupport_Roof::StaticClass();
        BuildPreviewRoof->OnBuildingActorInitialized(EFortBuildingInitializationReason::PlacementTool, EFortBuildingPersistentState::New);

        BuildPreviewStair = static_cast<ABuildingPlayerPrimitivePreview*>(Util::SpawnActor(ABuildingPlayerPrimitivePreview::StaticClass(), {}, {}));
        BuildPreviewStair->bAlwaysRelevant = true;
        auto pBuildingEditSupportStair = reinterpret_cast<UBuildingEditModeSupport_Stair*>(Globals::GPS->STATIC_SpawnObject(UBuildingEditModeSupport_Stair::StaticClass(), Globals::World));
        pBuildingEditSupportStair->Outer = BuildPreviewStair;
        BuildPreviewStair->EditModeSupport = pBuildingEditSupportStair;
        auto pComponent1 = BuildPreviewStair->GetBuildingMeshComponent();
        pComponent1->SetStaticMesh(StairBuildMesh);
        pComponent1->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(PC)->BuildPreviewMarkerMID);
        BuildPreviewStair->BuildingType = EFortBuildingType::Stairs;
        MetadataStair = FindObjectFast<UBuildingEditModeMetadata_Stair>("/Game/Building/EditModePatterns/Stair/EMP_Stair_StairW.EMP_Stair_StairW");
        BuildPreviewStair->EditModePatternData = MetadataStair;
        BuildPreviewStair->EditModeSupportClass = UBuildingEditModeSupport_Stair::StaticClass();
        BuildPreviewStair->OnBuildingActorInitialized(EFortBuildingInitializationReason::PlacementTool, EFortBuildingPersistentState::New);

        BuildPreviewFloor = static_cast<ABuildingPlayerPrimitivePreview*>(Util::SpawnActor(ABuildingPlayerPrimitivePreview::StaticClass(), {}, {}));
        BuildPreviewFloor->bAlwaysRelevant = true;
        auto pBuildingEditSupportFloor = reinterpret_cast<UBuildingEditModeSupport_Floor*>(Globals::GPS->STATIC_SpawnObject(UBuildingEditModeSupport_Floor::StaticClass(), Globals::World));
        pBuildingEditSupportFloor->Outer = BuildPreviewFloor;
        BuildPreviewFloor->EditModeSupport = pBuildingEditSupportFloor;
        auto pComponent2 = BuildPreviewFloor->GetBuildingMeshComponent();
        pComponent2->SetStaticMesh(FloorBuildMesh);
        pComponent2->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(PC)->BuildPreviewMarkerMID);
        BuildPreviewFloor->BuildingType = EFortBuildingType::Floor;
        MetadataFloor = FindObjectFast<UBuildingEditModeMetadata_Floor>("/Game/Building/EditModePatterns/Floor/EMP_Floor_Floor.EMP_Floor_Floor");
        BuildPreviewFloor->EditModePatternData = MetadataFloor;
        BuildPreviewFloor->EditModeSupportClass = UBuildingEditModeSupport_Floor::StaticClass();
        BuildPreviewFloor->OnBuildingActorInitialized(EFortBuildingInitializationReason::PlacementTool, EFortBuildingPersistentState::New);

        BuildPreviewWall = static_cast<ABuildingPlayerPrimitivePreview*>(Util::SpawnActor(ABuildingPlayerPrimitivePreview::StaticClass(), {}, {}));
        BuildPreviewWall->bAlwaysRelevant = true;
        auto pBuildingEditSupportWall = reinterpret_cast<UBuildingEditModeSupport_Wall*>(Globals::GPS->STATIC_SpawnObject(UBuildingEditModeSupport_Wall::StaticClass(), Globals::World));
        pBuildingEditSupportWall->Outer = BuildPreviewWall;
        BuildPreviewWall->EditModeSupport = pBuildingEditSupportWall;
        auto pComponent3 = BuildPreviewWall->GetBuildingMeshComponent();
        pComponent3->SetStaticMesh(WallBuildMesh);
        pComponent3->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(PC)->BuildPreviewMarkerMID);
        BuildPreviewWall->BuildingType = EFortBuildingType::Wall;
        MetadataWall = FindObjectFast<UBuildingEditModeMetadata_Wall>("/Game/Building/EditModePatterns/Wall/EMP_Wall_Solid.EMP_Wall_Solid");
        BuildPreviewWall->EditModePatternData = MetadataWall;
        BuildPreviewWall->EditModeSupportClass = UBuildingEditModeSupport_Wall::StaticClass();
        BuildPreviewWall->OnBuildingActorInitialized(EFortBuildingInitializationReason::PlacementTool, EFortBuildingPersistentState::New);

        BuildPreviewWall->SetActorHiddenInGame(true);
        BuildPreviewFloor->SetActorHiddenInGame(true);
        BuildPreviewRoof->SetActorHiddenInGame(true);
        BuildPreviewStair->SetActorHiddenInGame(true);
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

            if (Util::AreGuidsTheSame(InGuid, WallGuid))
            {
                reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass = BuildClassWall;
                reinterpret_cast<BuildPreviewPointer*>(PC)->BuildPreviewMarker = BuildPreviewWall;
                BuildPreviewWall->SetActorHiddenInGame(false);
                BuildPreviewFloor->SetActorHiddenInGame(true);
                BuildPreviewStair->SetActorHiddenInGame(true);
                BuildPreviewRoof->SetActorHiddenInGame(true);

                ((UFortCheatManager*)PC->CheatManager)->BuildWith(L"Wood");

                BuildClassWall = reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass;
            }

            if (Util::AreGuidsTheSame(InGuid, FloorGuid))
            {
                reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass = BuildClassFloor;
                reinterpret_cast<BuildPreviewPointer*>(PC)->BuildPreviewMarker = BuildPreviewFloor;
                BuildPreviewWall->SetActorHiddenInGame(true);
                BuildPreviewFloor->SetActorHiddenInGame(false);
                BuildPreviewStair->SetActorHiddenInGame(true);
                BuildPreviewRoof->SetActorHiddenInGame(true);

                ((UFortCheatManager*)PC->CheatManager)->BuildWith(L"Wood");

                BuildClassFloor = reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass;
            }

            if (Util::AreGuidsTheSame(InGuid, StairGuid))
            {
                reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass = BuildClassStair;
                reinterpret_cast<BuildPreviewPointer*>(PC)->BuildPreviewMarker = BuildPreviewStair;
                BuildPreviewWall->SetActorHiddenInGame(true);
                BuildPreviewFloor->SetActorHiddenInGame(true);
                BuildPreviewStair->SetActorHiddenInGame(false);
                BuildPreviewRoof->SetActorHiddenInGame(true);

                ((UFortCheatManager*)PC->CheatManager)->BuildWith(L"Wood");

                BuildClassStair = reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass;
            }

            if (Util::AreGuidsTheSame(InGuid, RoofGuid))
            {
                reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass = BuildClassRoof;
                reinterpret_cast<BuildPreviewPointer*>(PC)->BuildPreviewMarker = BuildPreviewRoof;
                BuildPreviewWall->SetActorHiddenInGame(true);
                BuildPreviewFloor->SetActorHiddenInGame(true);
                BuildPreviewStair->SetActorHiddenInGame(true);
                BuildPreviewRoof->SetActorHiddenInGame(false);

                ((UFortCheatManager*)PC->CheatManager)->BuildWith(L"Wood");

                BuildClassRoof = reinterpret_cast<CurrentBuildableClassPointer*>(PC)->CurrentBuildableClass;
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