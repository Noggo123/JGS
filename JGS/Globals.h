#pragma once

#include <iostream>

static auto StaticLoadObjectInternal = reinterpret_cast<UObject* (*)(UClass* InClass, UObject* InOuter, const TCHAR* Name, const TCHAR* FileName, uint32_t LoadFlags, UPackageMap* Sandbox, bool bAllowObjectReconciliation)>(uintptr_t(GetModuleHandle(NULL)) + 0x13E0180);

template <typename T>
static T* StaticLoadObject(const TCHAR* InPath)
{
    return (T*)StaticLoadObjectInternal(T::StaticClass(), nullptr, InPath, nullptr, 0, nullptr, false);
}

template <typename T>
static T* FindObjectFast(std::string ObjectName, UClass* ObjectClass = UObject::StaticClass())
{
    auto OrigInName = std::wstring(ObjectName.begin(), ObjectName.end()).c_str();

    auto StaticFindObject = (T * (*)(UClass*, UObject * Package, const wchar_t* OrigInName, bool ExactClass))((uintptr_t)GetModuleHandleA(0) + 0x13DE630);
    return StaticFindObject(ObjectClass, nullptr, OrigInName, false);
}

namespace Globals
{
	UWorld* World;
	UFortEngine* FortEngine;
	AFortPlayerController* PC;
	APlayerPawn_Generic_C* Pawn;
	UGameplayStatics* GPS;
	UKismetMathLibrary* MathLib;
    UKismetSystemLibrary* SystemLib;
    UCustomCharacterPart* HeadPart;
    UCustomCharacterPart* BodyPart;
	std::vector<UFortItemDefinition*> RangedWeapons;
    std::vector<UFortItemDefinition*> Traps;
    std::vector<UFortItemDefinition*> Consumables;
}

static void LoadLootPools()
{
    //Ranged Weapons
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_UC_Ore_T03.WID_Assault_Auto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_C_Ore_T02.WID_Assault_Auto_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_UC_Ore_T03.WID_Assault_Auto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_VR_Ore_T03.WID_Assault_AutoHigh_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_C_Ore_T02.WID_Assault_SemiAuto_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_R_Ore_T03.WID_Assault_SemiAuto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_UC_Ore_T03.WID_Assault_SemiAuto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Surgical_Athena_R_Ore_T03.WID_Assault_Surgical_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Surgical_Athena_VR_Ore_T03.WID_Assault_Surgical_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Grenade_Athena_R_Ore_T03.WID_Launcher_Grenade_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Grenade_Athena_SR_Ore_T03.WID_Launcher_Grenade_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Grenade_Athena_VR_Ore_T03.WID_Launcher_Grenade_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Rocket_Athena_R_Ore_T03.WID_Launcher_Rocket_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Rocket_Athena_SR_Ore_T03.WID_Launcher_Rocket_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Rocket_Athena_VR_Ore_T03.WID_Launcher_Rocket_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavy_Athena_C_Ore_T02.WID_Pistol_AutoHeavy_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavy_Athena_R_Ore_T03.WID_Pistol_AutoHeavy_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavy_Athena_UC_Ore_T03.WID_Pistol_AutoHeavy_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_Scavenger_Athena_R_Ore_T03.WID_Pistol_Scavenger_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_Scavenger_Athena_UC_Ore_T03.WID_Pistol_Scavenger_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_Scavenger_Athena_VR_Ore_T03.WID_Pistol_Scavenger_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SemiAuto_Athena_C_Ore_T02.WID_Pistol_SemiAuto_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SemiAuto_Athena_R_Ore_T03.WID_Pistol_SemiAuto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SemiAuto_Athena_UC_Ore_T03.WID_Pistol_SemiAuto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SixShooter_Athena_C_Ore_T02.WID_Pistol_SixShooter_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SixShooter_Athena_R_Ore_T03.WID_Pistol_SixShooter_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SixShooter_Athena_UC_Ore_T03.WID_Pistol_SixShooter_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_SemiAuto_Athena_R_Ore_T03.WID_Shotgun_SemiAuto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_SemiAuto_Athena_UC_Ore_T03.WID_Shotgun_SemiAuto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_SemiAuto_Athena_VR_Ore_T03.WID_Shotgun_SemiAuto_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Standard_Athena_C_Ore_T03.WID_Shotgun_Standard_Athena_C_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_AMR_Athena_SR_Ore_T03.WID_Sniper_AMR_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_BoltAction_Scope_Athena_VR_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_Standard_Scope_Athena_SR_Ore_T03.WID_Sniper_Standard_Scope_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_Standard_Scope_Athena_VR_Ore_T03.WID_Sniper_Standard_Scope_Athena_VR_Ore_T03"));

    //Traps / Femboy traps :hot:
    Globals::Traps.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Traps/TID_Ceiling_Electric_Single_Athena_R_T03.TID_Ceiling_Electric_Single_Athena_R_T03"));
    Globals::Traps.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Traps/TID_Floor_Player_Jump_Pad_Athena.TID_Floor_Player_Jump_Pad_Athena"));
    Globals::Traps.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Traps/TID_Floor_Player_Jump_Pad_Free_Direction_Athena.TID_Floor_Player_Jump_Pad_Free_Direction_Athena"));
    Globals::Traps.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Traps/TID_Floor_Spikes_Athena_R_T03.TID_Floor_Spikes_Athena_R_T03"));
    Globals::Traps.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Traps/TID_Wall_Electric_Athena_R_T03.TID_Wall_Electric_Athena_R_T03"));

    //Consumables
    Globals::Consumables.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Consumables/Bandage/Athena_Bandage.Athena_Bandage"));
    Globals::Consumables.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Consumables/Grenade/Athena_Grenade.Athena_Grenade"));
    Globals::Consumables.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Consumables/Medkit/Athena_Medkit.Athena_Medkit"));
    Globals::Consumables.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Consumables/Shields/Athena_Shields.Athena_Shields"));
}