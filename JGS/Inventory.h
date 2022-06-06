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

        static auto PickaxeDef = FindObjectFast<UFortWeaponItemDefinition>("/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
        static auto EditToolDef = FindObjectFast<SDK::UFortEditToolItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");
        static auto WallBuildDef = FindObjectFast<SDK::UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
        static auto FloorBuildDef = FindObjectFast<SDK::UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
        static auto StairBuildDef = FindObjectFast<SDK::UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
        static auto RoofBuildDef = FindObjectFast<SDK::UFortBuildingItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

        auto EditToolItem = EditToolDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WorldEditToolItem = (UFortWorldItem*)EditToolItem;
        WorldEditToolItem->ItemEntry.Count = 1;
        FortInventory->Inventory.ReplicatedEntries.Add(WorldEditToolItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldEditToolItem);

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

    void CreateBuildPreviews()
    {
        AFortPlayerController* playerController = PC;
        playerController->CheatManager->Summon(TEXT("BuildingPlayerPrimitivePreview"));
        m_pBuildPreviewRoof = static_cast<SDK::ABuildingPlayerPrimitivePreview*>(polaris::utilities::SDKUtils::FindActor(SDK::ABuildingPlayerPrimitivePreview::StaticClass()));
        auto pBuildingEditSupportRoof = reinterpret_cast<SDK::UBuildingEditModeSupport_Roof*>(globals::StaticConstructObject_Internal(SDK::UBuildingEditModeSupport_Roof::StaticClass(), (*globals::gpWorld), SDK::FName("None"), 0, SDK::FUObjectItem::ObjectFlags::None, NULL, false, NULL, false));
        pBuildingEditSupportRoof->Outer = m_pBuildPreviewRoof;
        m_pBuildPreviewRoof->EditModeSupport = pBuildingEditSupportRoof;
        auto pComponent = m_pBuildPreviewRoof->GetBuildingMeshComponent();
        m_pStaticRoof = SDK::UObject::FindObject<SDK::UStaticMesh>("StaticMesh PBW_W1_RoofC.PBW_W1_RoofC");
        pComponent->SetStaticMesh(m_pStaticRoof);
        pComponent->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(globals::gpPlayerController)->BuildPreviewMarkerMID);
        m_pBuildPreviewRoof->BuildingType = SDK::EFortBuildingType::Roof;
        m_pMetadataRoof = SDK::UObject::FindObject<SDK::UBuildingEditModeMetadata_Roof>("BuildingEditModeMetadata_Roof EMP_Roof_RoofC.EMP_Roof_RoofC");
        m_pBuildPreviewRoof->EditModePatternData = m_pMetadataRoof;
        m_pBuildPreviewRoof->EditModeSupportClass = SDK::UBuildingEditModeSupport_Roof::StaticClass();
        m_pBuildPreviewRoof->OnBuildingActorInitialized(SDK::EFortBuildingInitializationReason::PlacementTool, SDK::EFortBuildingPersistentState::New);

        playerController->CheatManager->Summon(TEXT("BuildingPlayerPrimitivePreview"));
        m_pBuildPreviewStair = static_cast<SDK::ABuildingPlayerPrimitivePreview*>(polaris::utilities::SDKUtils::FindActor(SDK::ABuildingPlayerPrimitivePreview::StaticClass(), 1));
        auto pBuildingEditSupportStair = reinterpret_cast<SDK::UBuildingEditModeSupport_Stair*>(globals::StaticConstructObject_Internal(SDK::UBuildingEditModeSupport_Stair::StaticClass(), (*globals::gpWorld), SDK::FName("None"), 0, SDK::FUObjectItem::ObjectFlags::None, NULL, false, NULL, false));
        pBuildingEditSupportStair->Outer = m_pBuildPreviewStair;
        m_pBuildPreviewStair->EditModeSupport = pBuildingEditSupportStair;
        auto pComponent1 = m_pBuildPreviewStair->GetBuildingMeshComponent();
        m_pStaticStair = SDK::UObject::FindObject<SDK::UStaticMesh>("StaticMesh PBW_W1_StairW.PBW_W1_StairW");
        pComponent1->SetStaticMesh(m_pStaticStair);
        pComponent1->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(globals::gpPlayerController)->BuildPreviewMarkerMID);
        m_pBuildPreviewStair->BuildingType = SDK::EFortBuildingType::Stairs;
        m_pMetadataStair = SDK::UObject::FindObject<SDK::UBuildingEditModeMetadata_Stair>("BuildingEditModeMetadata_Stair EMP_Stair_StairW.EMP_Stair_StairW");
        m_pBuildPreviewStair->EditModePatternData = m_pMetadataStair;
        m_pBuildPreviewStair->EditModeSupportClass = SDK::UBuildingEditModeSupport_Stair::StaticClass();
        m_pBuildPreviewStair->OnBuildingActorInitialized(SDK::EFortBuildingInitializationReason::PlacementTool, SDK::EFortBuildingPersistentState::New);

        playerController->CheatManager->Summon(TEXT("BuildingPlayerPrimitivePreview"));
        m_pBuildPreviewFloor = static_cast<SDK::ABuildingPlayerPrimitivePreview*>(polaris::utilities::SDKUtils::FindActor(SDK::ABuildingPlayerPrimitivePreview::StaticClass(), 2));
        auto pBuildingEditSupportFloor = reinterpret_cast<SDK::UBuildingEditModeSupport_Floor*>(globals::StaticConstructObject_Internal(SDK::UBuildingEditModeSupport_Floor::StaticClass(), (*globals::gpWorld), SDK::FName("None"), 0, SDK::FUObjectItem::ObjectFlags::None, NULL, false, NULL, false));
        pBuildingEditSupportFloor->Outer = reinterpret_cast<AFortAsBuildPreview*>(globals::gpPlayerController)->BuildPreviewMarker;
        m_pBuildPreviewFloor->EditModeSupport = pBuildingEditSupportFloor;
        auto pComponent2 = m_pBuildPreviewFloor->GetBuildingMeshComponent();
        m_pStaticFloor = SDK::UObject::FindObject<SDK::UStaticMesh>("StaticMesh PBW_W1_Floor.PBW_W1_Floor");
        pComponent2->SetStaticMesh(m_pStaticFloor);
        pComponent2->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(globals::gpPlayerController)->BuildPreviewMarkerMID);
        m_pBuildPreviewFloor->BuildingType = SDK::EFortBuildingType::Floor;
        m_pMetadataFloor = SDK::UObject::FindObject<SDK::UBuildingEditModeMetadata_Floor>("BuildingEditModeMetadata_Floor EMP_Floor_Floor.EMP_Floor_Floor");
        m_pBuildPreviewFloor->EditModePatternData = m_pMetadataFloor;
        m_pBuildPreviewFloor->EditModeSupportClass = SDK::UBuildingEditModeSupport_Floor::StaticClass();
        m_pBuildPreviewFloor->OnBuildingActorInitialized(SDK::EFortBuildingInitializationReason::PlacementTool, SDK::EFortBuildingPersistentState::New);

        playerController->CheatManager->Summon(TEXT("BuildingPlayerPrimitivePreview"));
        m_pBuildPreviewWall = static_cast<SDK::ABuildingPlayerPrimitivePreview*>(polaris::utilities::SDKUtils::FindActor(SDK::ABuildingPlayerPrimitivePreview::StaticClass(), 3));
        auto pBuildingEditSupportWall = reinterpret_cast<SDK::UBuildingEditModeSupport_Wall*>(globals::StaticConstructObject_Internal(SDK::UBuildingEditModeSupport_Wall::StaticClass(), (*globals::gpWorld), SDK::FName("None"), 0, SDK::FUObjectItem::ObjectFlags::None, NULL, false, NULL, false));
        pBuildingEditSupportWall->Outer = m_pBuildPreviewWall;
        m_pBuildPreviewWall->EditModeSupport = pBuildingEditSupportWall;
        auto pComponent3 = m_pBuildPreviewWall->GetBuildingMeshComponent();
        m_pStaticWall = SDK::UObject::FindObject<SDK::UStaticMesh>("StaticMesh PBW_W1_Solid.PBW_W1_Solid");
        pComponent3->SetStaticMesh(m_pStaticWall);
        pComponent3->SetMaterial(0, reinterpret_cast<AFortAsBuildPreviewMID*>(globals::gpPlayerController)->BuildPreviewMarkerMID);
        m_pBuildPreviewWall->BuildingType = SDK::EFortBuildingType::Wall;
        m_pMetadataWall = SDK::UObject::FindObject<SDK::UBuildingEditModeMetadata_Wall>("BuildingEditModeMetadata_Wall EMP_Wall_Solid.EMP_Wall_Solid");
        m_pBuildPreviewWall->EditModePatternData = m_pMetadataWall;
        m_pBuildPreviewWall->EditModeSupportClass = SDK::UBuildingEditModeSupport_Wall::StaticClass();
        m_pBuildPreviewWall->OnBuildingActorInitialized(SDK::EFortBuildingInitializationReason::PlacementTool, SDK::EFortBuildingPersistentState::New);

        m_pBuildPreviewWall->SetActorHiddenInGame(true);
        m_pBuildPreviewFloor->SetActorHiddenInGame(true);
        m_pBuildPreviewStair->SetActorHiddenInGame(true);
        m_pBuildPreviewRoof->SetActorHiddenInGame(true);
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