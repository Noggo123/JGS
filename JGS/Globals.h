#pragma once

#include <iostream>

static auto StaticLoadObjectInternal = reinterpret_cast<UObject* (*)(UClass* InClass, UObject* InOuter, const TCHAR* Name, const TCHAR* FileName, uint32_t LoadFlags, UPackageMap* Sandbox, bool bAllowObjectReconciliation)>(uintptr_t(GetModuleHandle(NULL)) + 0x13E0180);

static UObject* StaticLoadObject(UClass* InClass, const TCHAR* InPath)
{
    return StaticLoadObjectInternal(InClass, nullptr, InPath, nullptr, 0, nullptr, false);
}

namespace Globals
{
	UWorld* World;
	UFortEngine* FortEngine;
	AFortPlayerController* PC;
	APlayerPawn_Generic_C* Pawn;
	UGameplayStatics* GPS;
	UKismetMathLibrary* MathLib;
    UCustomCharacterPart* HeadPart;
    UCustomCharacterPart* BodyPart;
	std::vector<UFortItemDefinition*> RangedWeapons;
    std::vector<UFortItemDefinition*> Traps;
    std::vector<UFortItemDefinition*> Consumables;
}

static void LoadLootPools()
{
    //Ranged Weapons
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_UC_Ore_T03.WID_Assault_Auto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_C_Ore_T02.WID_Assault_Auto_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_UC_Ore_T03.WID_Assault_Auto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_AutoHigh_Athena_VR_Ore_T03.WID_Assault_AutoHigh_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_SemiAuto_Athena_C_Ore_T02.WID_Assault_SemiAuto_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_SemiAuto_Athena_R_Ore_T03.WID_Assault_SemiAuto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_SemiAuto_Athena_UC_Ore_T03.WID_Assault_SemiAuto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Surgical_Athena_R_Ore_T03.WID_Assault_Surgical_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Surgical_Athena_VR_Ore_T03.WID_Assault_Surgical_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Launcher_Grenade_Athena_R_Ore_T03.WID_Launcher_Grenade_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Launcher_Grenade_Athena_SR_Ore_T03.WID_Launcher_Grenade_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Launcher_Grenade_Athena_VR_Ore_T03.WID_Launcher_Grenade_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Launcher_Rocket_Athena_R_Ore_T03.WID_Launcher_Rocket_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Launcher_Rocket_Athena_SR_Ore_T03.WID_Launcher_Rocket_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Launcher_Rocket_Athena_VR_Ore_T03.WID_Launcher_Rocket_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_AutoHeavy_Athena_C_Ore_T02.WID_Pistol_AutoHeavy_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_AutoHeavy_Athena_R_Ore_T03.WID_Pistol_AutoHeavy_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_AutoHeavy_Athena_UC_Ore_T03.WID_Pistol_AutoHeavy_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_Scavenger_Athena_R_Ore_T03.WID_Pistol_Scavenger_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_Scavenger_Athena_UC_Ore_T03.WID_Pistol_Scavenger_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_Scavenger_Athena_VR_Ore_T03.WID_Pistol_Scavenger_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_SemiAuto_Athena_C_Ore_T02.WID_Pistol_SemiAuto_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_SemiAuto_Athena_R_Ore_T03.WID_Pistol_SemiAuto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_SemiAuto_Athena_UC_Ore_T03.WID_Pistol_SemiAuto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_SixShooter_Athena_C_Ore_T02.WID_Pistol_SixShooter_Athena_C_Ore_T02"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_SixShooter_Athena_R_Ore_T03.WID_Pistol_SixShooter_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_SixShooter_Athena_UC_Ore_T03.WID_Pistol_SixShooter_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_SemiAuto_Athena_R_Ore_T03.WID_Shotgun_SemiAuto_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_SemiAuto_Athena_UC_Ore_T03.WID_Shotgun_SemiAuto_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_SemiAuto_Athena_VR_Ore_T03.WID_Shotgun_SemiAuto_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_C_Ore_T03.WID_Shotgun_Standard_Athena_C_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Sniper_AMR_Athena_SR_Ore_T03.WID_Sniper_AMR_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Sniper_BoltAction_Scope_Athena_VR_Ore_T03.WID_Sniper_BoltAction_Scope_Athena_VR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Sniper_Standard_Scope_Athena_SR_Ore_T03.WID_Sniper_Standard_Scope_Athena_SR_Ore_T03"));
    Globals::RangedWeapons.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition WID_Sniper_Standard_Scope_Athena_VR_Ore_T03.WID_Sniper_Standard_Scope_Athena_VR_Ore_T03"));

    //Traps / Femboy traps :hot:
    Globals::Traps.push_back(UObject::FindObject<UFortItemDefinition>("FortTrapItemDefinition TID_Ceiling_Electric_Single_Athena_R_T03.TID_Ceiling_Electric_Single_Athena_R_T03"));
    Globals::Traps.push_back(UObject::FindObject<UFortItemDefinition>("FortTrapItemDefinition TID_Floor_Player_Jump_Pad_Athena.TID_Floor_Player_Jump_Pad_Athena"));
    Globals::Traps.push_back(UObject::FindObject<UFortItemDefinition>("FortTrapItemDefinition TID_Floor_Player_Jump_Pad_Free_Direction_Athena.TID_Floor_Player_Jump_Pad_Free_Direction_Athena"));
    Globals::Traps.push_back(UObject::FindObject<UFortItemDefinition>("FortTrapItemDefinition TID_Floor_Spikes_Athena_R_T03.TID_Floor_Spikes_Athena_R_T03"));
    Globals::Traps.push_back(UObject::FindObject<UFortItemDefinition>("FortTrapItemDefinition TID_Wall_Electric_Athena_R_T03.TID_Wall_Electric_Athena_R_T03"));

    //Consumables
    Globals::Consumables.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition Athena_Bandage.Athena_Bandage"));
    Globals::Consumables.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition Athena_Grenade.Athena_Grenade"));
    Globals::Consumables.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition Athena_Medkit.Athena_Medkit"));
    Globals::Consumables.push_back(UObject::FindObject<UFortItemDefinition>("FortWeaponRangedItemDefinition Athena_Shields.Athena_Shields"));
}