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

//#define CHEATS
//#define DBNO_ENABLED
//#define SAME_TEAM
//#define LOG_RPCS

struct CharPart
{
    UCustomCharacterPart* HeadPart;
    UCustomCharacterPart* BodyPart;
    UCustomCharacterPart* HatPart;
};

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
    std::vector<UFortItemDefinition*> STWWeapons;
    std::vector<UFortItemDefinition*> Traps;
    std::vector<UFortItemDefinition*> Consumables;
    std::vector<UFortItemDefinition*> SupplyDrop;
    std::vector<CharPart> CharacterParts;
    bool bSTWMode = false;
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

    //STW Shit
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Sniper/AMR/WID_Sniper_AMR_VR_Ore_T01.WID_Sniper_AMR_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Sniper/AMR/WID_Sniper_AMR_SR_Ore_T01.WID_Sniper_AMR_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Sniper/AMR/WID_Sniper_AMR_R_Ore_T01.WID_Sniper_AMR_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical_Extended/WID_Shotgun_Tactical_Precision_VR_Ore_T01.WID_Shotgun_Tactical_Precision_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical_Extended/WID_Shotgun_Tactical_Precision_SR_Ore_T01.WID_Shotgun_Tactical_Precision_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical_Extended/WID_Shotgun_Tactical_Precision_R_Ore_T01.WID_Shotgun_Tactical_Precision_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical/WID_Shotgun_Tactical_UC_Ore_T01.WID_Shotgun_Tactical_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical/WID_Shotgun_Tactical_R_Ore_T01.WID_Shotgun_Tactical_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical/WID_Shotgun_Tactical_Founders_VR_Ore_T01.WID_Shotgun_Tactical_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical/WID_Shotgun_Tactical_Founders_SR_Ore_T01.WID_Shotgun_Tactical_Founders_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical/WID_Shotgun_Tactical_Founders_R_Ore_T01.WID_Shotgun_Tactical_Founders_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Tactical/WID_Shotgun_Tactical_C_Ore_T01.WID_Shotgun_Tactical_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Standard_High/WID_Shotgun_Standard_VR_Ore_T01.WID_Shotgun_Standard_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Standard_High/WID_Shotgun_Standard_SR_Ore_T01.WID_Shotgun_Standard_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Standard/WID_Shotgun_Standard_UC_Ore_T01.WID_Shotgun_Standard_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Standard/WID_Shotgun_Standard_R_Ore_T01.WID_Shotgun_Standard_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Standard/WID_Shotgun_Standard_C_Ore_T01.WID_Shotgun_Standard_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/SemiAuto/WID_Shotgun_SemiAuto_VR_Ore_T01.WID_Shotgun_SemiAuto_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/SemiAuto/WID_Shotgun_SemiAuto_UC_Ore_T01.WID_Shotgun_SemiAuto_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/SemiAuto/WID_Shotgun_SemiAuto_SR_Ore_T01.WID_Shotgun_SemiAuto_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/SemiAuto/WID_Shotgun_SemiAuto_R_Ore_T01.WID_Shotgun_SemiAuto_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Scavenger_Break/WID_Shotgun_Break_Scavenger_VR_Ore_T01.WID_Shotgun_Break_Scavenger_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Scavenger_Break/WID_Shotgun_Break_Scavenger_SR_Ore_T01.WID_Shotgun_Break_Scavenger_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Scavenger/WID_Shotgun_SemiAuto_Scavenger_VR_Ore_T01.WID_Shotgun_SemiAuto_Scavenger_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Scavenger/WID_Shotgun_SemiAuto_Scavenger_SR_Ore_T01.WID_Shotgun_SemiAuto_Scavenger_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Minigun/WID_Shotgun_Minigun_SR_Ore_T01.WID_Shotgun_Minigun_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/LongArm/WID_Shotgun_Longarm_VR_Ore_T01.WID_Shotgun_Longarm_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/LongArm/WID_Shotgun_Longarm_SR_Ore_T01.WID_Shotgun_Longarm_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Hydraulic/WID_Shotgun_Hydraulic_VR_Ore_T01.WID_Shotgun_Hydraulic_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Hydraulic/WID_Shotgun_Hydraulic_SR_Ore_T01.WID_Shotgun_Hydraulic_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Heavy/WID_Shotgun_Heavy_SR_Ore_T01.WID_Shotgun_Heavy_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break_OU_High/WID_Shotgun_Break_OU_VR_Ore_T01.WID_Shotgun_Break_OU_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break_OU_High/WID_Shotgun_Break_OU_SR_Ore_T01.WID_Shotgun_Break_OU_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break_OU/WID_Shotgun_Break_OU_UC_Ore_T01.WID_Shotgun_Break_OU_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break_OU/WID_Shotgun_Break_OU_R_Ore_T01.WID_Shotgun_Break_OU_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break_High/WID_Shotgun_Break_VR_Ore_T01.WID_Shotgun_Break_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break_High/WID_Shotgun_Break_SR_Ore_T01.WID_Shotgun_Break_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break/WID_Shotgun_Break_UC_Ore_T01.WID_Shotgun_Break_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break/WID_Shotgun_Break_R_Ore_T01.WID_Shotgun_Break_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Break/WID_Shotgun_Break_C_Ore_T01.WID_Shotgun_Break_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Auto_High/WID_Shotgun_Auto_VR_Ore_T01.WID_Shotgun_Auto_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Auto_High/WID_Shotgun_Auto_SR_Ore_T01.WID_Shotgun_Auto_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Auto_High/WID_Shotgun_Auto_Founders_VR_Ore_T01.WID_Shotgun_Auto_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Auto/WID_Shotgun_Auto_UC_Ore_T01.WID_Shotgun_Auto_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Shotgun/Auto/WID_Shotgun_Auto_R_Ore_T01.WID_Shotgun_Auto_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Zapper/WID_Pistol_Zapper_VR_Ore_T01.WID_Pistol_Zapper_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Zapper/WID_Pistol_Zapper_SR_Ore_T01.WID_Pistol_Zapper_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Space/WID_Pistol_Space_VR_Ore_T01.WID_Pistol_Space_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Space/WID_Pistol_Space_SR_Ore_T01.WID_Pistol_Space_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SixShooter/WID_Pistol_SixShooter_UC_Ore_T01.WID_Pistol_SixShooter_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SixShooter/WID_Pistol_SixShooter_R_Ore_T01.WID_Pistol_SixShooter_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SixShooter/WID_Pistol_SixShooter_C_Ore_T01.WID_Pistol_SixShooter_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SemiAuto_High/WID_Pistol_SemiAuto_VR_Ore_T01.WID_Pistol_SemiAuto_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SemiAuto_High/WID_Pistol_SemiAuto_SR_Ore_T01.WID_Pistol_SemiAuto_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SemiAuto_High/WID_Pistol_SemiAuto_Founders_VR_Ore_T01.WID_Pistol_SemiAuto_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SemiAuto/WID_Pistol_SemiAuto_UC_Ore_T01.WID_Pistol_SemiAuto_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SemiAuto/WID_Pistol_SemiAuto_R_Ore_T01.WID_Pistol_SemiAuto_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/SemiAuto/WID_Pistol_SemiAuto_C_Ore_T01.WID_Pistol_SemiAuto_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Scavenger/WID_Pistol_Scavenger_VR_Ore_T01.WID_Pistol_Scavenger_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Scavenger/WID_Pistol_Scavenger_SR_Ore_T01.WID_Pistol_Scavenger_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Rocket/WID_Pistol_Rocket_SR_Ore_T01.WID_Pistol_Rocket_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Rapid/WID_Pistol_Rapid_VR_Ore_T01.WID_Pistol_Rapid_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Rapid/WID_Pistol_Rapid_SR_Ore_T01.WID_Pistol_Rapid_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Rapid/WID_Pistol_Rapid_R_Ore_T01.WID_Pistol_Rapid_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Rapid/WID_Pistol_Rapid_Founders_VR_Ore_T01.WID_Pistol_Rapid_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Hydraulic/WID_Pistol_Hydraulic_VR_Ore_T01.WID_Pistol_Hydraulic_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Hydraulic/WID_Pistol_Hydraulic_SR_Ore_T01.WID_Pistol_Hydraulic_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Handcannon_Semi_High/WID_Pistol_Handcannon_Semi_VR_Ore_T01.WID_Pistol_Handcannon_Semi_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Handcannon_Semi_High/WID_Pistol_Handcannon_Semi_SR_Ore_T01.WID_Pistol_Handcannon_Semi_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Handcannon_Semi/WID_Pistol_Handcannon_Semi_R_Ore_T01.WID_Pistol_Handcannon_Semi_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Handcannon/WID_Pistol_Handcannon_VR_Ore_T01.WID_Pistol_Handcannon_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Handcannon/WID_Pistol_Handcannon_SR_Ore_T01.WID_Pistol_Handcannon_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Handcannon/WID_Pistol_Handcannon_R_Ore_T01.WID_Pistol_Handcannon_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Handcannon/WID_Pistol_Handcannon_Founders_VR_Ore_T01.WID_Pistol_Handcannon_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Gatling/WID_Pistol_Gatling_VR_Ore_T01.WID_Pistol_Gatling_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Gatling/WID_Pistol_Gatling_SR_Ore_T01.WID_Pistol_Gatling_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/FireCracker/WID_Pistol_FireCracker_VR_Ore_T01.WID_Pistol_FireCracker_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/FireCracker/WID_Pistol_FireCracker_SR_Ore_T01.WID_Pistol_FireCracker_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/FireCracker/WID_Pistol_FireCracker_R_Ore_T01.WID_Pistol_FireCracker_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Dragon/WID_Pistol_Dragon_VR_Ore_T01.WID_Pistol_Dragon_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Dragon/WID_Pistol_Dragon_SR_Ore_T01.WID_Pistol_Dragon_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/BoltRevolver/WID_Pistol_BoltRevolver_UC_Ore_T01.WID_Pistol_BoltRevolver_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/BoltRevolver/WID_Pistol_BoltRevolver_R_Ore_T01.WID_Pistol_BoltRevolver_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/BoltRevolver/WID_Pistol_BoltRevolver_C_Ore_T01.WID_Pistol_BoltRevolver_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Bolt/WID_Pistol_Bolt_VR_Ore_T01.WID_Pistol_Bolt_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Bolt/WID_Pistol_Bolt_SR_Ore_T01.WID_Pistol_Bolt_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/AutoHeavy_High/WID_Pistol_AutoHeavy_VR_Ore_T01.WID_Pistol_AutoHeavy_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/AutoHeavy_High/WID_Pistol_AutoHeavy_SR_Ore_T01.WID_Pistol_AutoHeavy_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/AutoHeavy_High/WID_Pistol_AutoHeavy_Founders_VR_Ore_T01.WID_Pistol_AutoHeavy_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/AutoHeavy_High/WID_Pistol_AutoHeavy_Founders_SR_Ore_T01.WID_Pistol_AutoHeavy_Founders_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/AutoHeavy/WID_Pistol_AutoHeavy_R_Ore_T01.WID_Pistol_AutoHeavy_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/AutoHeavy/WID_Pistol_AutoHeavy_Founders_R_Ore_T01.WID_Pistol_AutoHeavy_Founders_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Auto_High/WID_Pistol_Auto_VR_Ore_T01.WID_Pistol_Auto_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Auto_High/WID_Pistol_Auto_SR_Ore_T01.WID_Pistol_Auto_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Auto/WID_Pistol_Auto_UC_Ore_T01.WID_Pistol_Auto_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Auto/WID_Pistol_Auto_R_Ore_T01.WID_Pistol_Auto_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Pistol/Auto/WID_Pistol_Auto_C_Ore_T01.WID_Pistol_Auto_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Surgical/WID_Assault_Surgical_VR_Ore_T01.WID_Assault_Surgical_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Surgical/WID_Assault_Surgical_SR_Ore_T01.WID_Assault_Surgical_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SingleShot/WID_Assault_SingleShot_VR_Ore_T01.WID_Assault_SingleShot_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SingleShot/WID_Assault_SingleShot_SR_Ore_T01.WID_Assault_SingleShot_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SingleShot/WID_Assault_SingleShot_R_Ore_T01.WID_Assault_SingleShot_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SemiAuto_High/WID_Assault_SemiAuto_VR_Ore_T01.WID_Assault_SemiAuto_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SemiAuto_High/WID_Assault_SemiAuto_SR_Ore_T01.WID_Assault_SemiAuto_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SemiAuto_High/WID_Assault_SemiAuto_Founders_VR_Ore_T01.WID_Assault_SemiAuto_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SemiAuto/WID_Assault_SemiAuto_UC_Ore_T01.WID_Assault_SemiAuto_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SemiAuto/WID_Assault_SemiAuto_R_Ore_T01.WID_Assault_SemiAuto_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/SemiAuto/WID_Assault_SemiAuto_C_Ore_T01.WID_Assault_SemiAuto_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Scavenger/WID_Assault_Scavenger_VR_Ore_T01.WID_Assault_Scavenger_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Scavenger/WID_Assault_Scavenger_SR_Ore_T01.WID_Assault_Scavenger_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Raygun/WID_Assault_Raygun_VR_Ore_T01.WID_Assault_Raygun_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Raygun/WID_Assault_Raygun_SR_Ore_T01.WID_Assault_Raygun_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/LMG/WID_Assault_Surgical_Drum_Founders_R_Ore_T01.WID_Assault_Surgical_Drum_Founders_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/LMG/WID_Assault_LMG_VR_Ore_T01.WID_Assault_LMG_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/LMG/WID_Assault_LMG_SR_Ore_T01.WID_Assault_LMG_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/LMG/WID_Assault_LMG_R_Ore_T01.WID_Assault_LMG_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/LMG/WID_Assault_LMG_Drum_Founders_VR_Ore_T01.WID_Assault_LMG_Drum_Founders_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/LMG/WID_Assault_LMG_Drum_Founders_SR_Ore_T01.WID_Assault_LMG_Drum_Founders_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Hydraulic/WID_Assault_Hydraulic_Drum_VR_Ore_T01.WID_Assault_Hydraulic_Drum_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Hydraulic/WID_Assault_Hydraulic_Drum_SR_Ore_T01.WID_Assault_Hydraulic_Drum_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Hydra/WID_Assault_Hydra_SR_Ore_T01.WID_Assault_Hydra_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/DoubleShot/WID_Assault_Doubleshot_VR_Ore_T01.WID_Assault_Doubleshot_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/DoubleShot/WID_Assault_Doubleshot_SR_Ore_T01.WID_Assault_Doubleshot_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Burst_High/WID_Assault_Burst_VR_Ore_T01.WID_Assault_Burst_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Burst_High/WID_Assault_Burst_SR_Ore_T01.WID_Assault_Burst_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Burst/WID_Assault_Burst_UC_Ore_T01.WID_Assault_Burst_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Burst/WID_Assault_Burst_R_Ore_T01.WID_Assault_Burst_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Burst/WID_Assault_Burst_C_Ore_T01.WID_Assault_Burst_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto_High/WID_Assault_Auto_VR_Ore_T01.WID_Assault_Auto_VR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto_High/WID_Assault_Auto_SR_Ore_T01.WID_Assault_Auto_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto_High/WID_Assault_Auto_Founders_SR_Ore_T01.WID_Assault_Auto_Founders_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto/WID_OB_Assault_Auto_C_Ore_T01.WID_OB_Assault_Auto_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto/WID_Assault_Auto_UC_Ore_T01.WID_Assault_Auto_UC_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto/WID_Assault_Auto_R_Ore_T01.WID_Assault_Auto_R_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto/WID_Assault_Auto_Halloween_SR_Ore_T01.WID_Assault_Auto_Halloween_SR_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/Assault/Auto/WID_Assault_Auto_C_Ore_T01.WID_Assault_Auto_C_Ore_T01"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/WIP/GnomeGun2.GnomeGun2"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/WIP/ShotGod.ShotGod"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/WIP/TestGod.TestGod"));
    Globals::STWWeapons.push_back(FindObjectFast<UFortItemDefinition>("/Game/Items/Weapons/Ranged/WIP/WannaGun.WannaGun"));

    // loot pool for supply drop (weapons only)
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_AMR_Athena_SR_Ore_T03.WID_Sniper_AMR_Athena_SR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_Standard_Scope_Athena_SR_Ore_T03.WID_Sniper_Standard_Scope_Athena_SR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Grenade_Athena_VR_Ore_T03.WID_Launcher_Grenade_Athena_VR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Launcher_Grenade_Athena_SR_Ore_T03.WID_Launcher_Grenade_Athena_SR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Surgical_Athena_VR_Ore_T03.WID_Assault_Surgical_Athena_VR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_VR_Ore_T03.WID_Assault_AutoHigh_Athena_VR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Sniper_Standard_Scope_Athena_VR_Ore_T03.WID_Sniper_Standard_Scope_Athena_VR_Ore_T03"));
    Globals::SupplyDrop.push_back(FindObjectFast<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_SemiAuto_Athena_VR_Ore_T03.WID_Shotgun_SemiAuto_Athena_VR_Ore_T03"));
}

static void LoadCharacterParts()
{
    //HID_Commando_Athena_05
    //HID_Commando_Athena_06
    //HID_Commando_Athena_09
    //HID_Commando_Athena_12
    //HID_Commando_Athena_14
    //HID_Commando_Athena_22
    //HID_Commando_Athena_25
    //HID_Commando_Athena_26

    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Heads/M_MED_ASN_Jae_Head_01_ATH.M_MED_ASN_Jae_Head_01_ATH"); //05
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Bodies/M_Med_Soldier_01_CV05_ATH.M_Med_Soldier_01_CV05_ATH"); //05
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Heads/M_MED_HIS_Sparks_Head_01_ATH.M_MED_HIS_Sparks_Head_01_ATH"); //06
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Bodies/M_Med_Soldier_01_TV14_ATH.M_Med_Soldier_01_TV14_ATH"); //06
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Male/Medium/Heads/M_MED_HIS_Sparks_Head_01.M_MED_HIS_Sparks_Head_01"); //09
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Male/Medium/Bodies/M_Med_Soldier_01_TV16.M_Med_Soldier_01_TV16"); //09
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Heads/F_MED_BLK_Red_Head_01_ATH.F_MED_BLK_Red_Head_01_ATH"); //12
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_TV12_ATH.F_Med_Soldier_TV12_ATH"); //12
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Heads/F_MED_CAU_Armstrong_Head_01_ATH.F_MED_CAU_Armstrong_Head_01_ATH"); //14
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_TV17_ATH.F_Med_Soldier_TV17_ATH"); //14
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_CV02_ATH.F_Med_Soldier_CV02_ATH"); //22
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Heads/F_Med_Head1_ATH.F_Med_Head1_ATH"); //22
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Hats/Ramirez_Glasses.Ramirez_Glasses"); //22
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Heads/F_MED_ASN_Sarah_Head_01_ATH.F_MED_ASN_Sarah_Head_01_ATH"); //25
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_CV04_ATH.F_Med_Soldier_CV04_ATH"); //25
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Heads/M_Med_Soldier_Head_01_ATH.M_Med_Soldier_Head_01_ATH"); //26
    StaticLoadObject<UCustomCharacterPart>(L"/Game/Athena/Heroes/Meshes/Bodies/M_Med_Soldier_01_Base_ATH.M_Med_Soldier_01_Base_ATH"); //26

    //05
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Heads/M_MED_ASN_Jae_Head_01_ATH.M_MED_ASN_Jae_Head_01_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Bodies/M_Med_Soldier_01_CV05_ATH.M_Med_Soldier_01_CV05_ATH"),
        nullptr
    });

    //06
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Heads/M_MED_HIS_Sparks_Head_01_ATH.M_MED_HIS_Sparks_Head_01_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Bodies/M_Med_Soldier_01_TV14_ATH.M_Med_Soldier_01_TV14_ATH"),
        nullptr
    });

    //09
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Characters/CharacterParts/Male/Medium/Heads/M_MED_HIS_Sparks_Head_01.M_MED_HIS_Sparks_Head_01"),
        FindObjectFast<UCustomCharacterPart>("/Game/Characters/CharacterParts/Male/Medium/Bodies/M_Med_Soldier_01_TV16.M_Med_Soldier_01_TV16"),
        nullptr
    });

    //12
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Heads/F_MED_BLK_Red_Head_01_ATH.F_MED_BLK_Red_Head_01_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_TV12_ATH.F_Med_Soldier_TV12_ATH"),
        nullptr
    });

    //14
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Heads/F_MED_CAU_Armstrong_Head_01_ATH.F_MED_CAU_Armstrong_Head_01_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_TV17_ATH.F_Med_Soldier_TV17_ATH"),
        nullptr
    });

    //22
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Heads/F_Med_Head1_ATH.F_Med_Head1_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_CV02_ATH.F_Med_Soldier_CV02_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Characters/CharacterParts/Hats/Ramirez_Glasses.Ramirez_Glasses")
    });

    //25
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Heads/F_MED_ASN_Sarah_Head_01_ATH.F_MED_ASN_Sarah_Head_01_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Bodies/F_Med_Soldier_CV04_ATH.F_Med_Soldier_CV04_ATH"),
        nullptr
    });

    //26
    Globals::CharacterParts.push_back({
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Heads/M_Med_Soldier_Head_01_ATH.M_Med_Soldier_Head_01_ATH"),
        FindObjectFast<UCustomCharacterPart>("/Game/Athena/Heroes/Meshes/Bodies/M_Med_Soldier_01_Base_ATH.M_Med_Soldier_01_Base_ATH"),
        nullptr
    });
}
