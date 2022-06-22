#include <Windows.h>
#include <vector>

#include "minhook/MinHook.h"

#pragma comment(lib, "minhook/minhook.lib")

#pragma comment(lib, "ChilkatRelDll_x64.lib")

#include "SDK.hpp"

using namespace SDK;

#include "Globals.h"
#include "Util.h"
#include "Discord.h"

#include "Offsets.h"

#include "Containers.h"
#include "Classes.h"

#include "Replication.h"
#include "Inventory.h"
#include "Abilities.h"
#include "Functions.h"
#include "MiscHooks.h"
#include "NetHooks.h"

#include "Hooks.h"

DWORD WINAPI MainThread(LPVOID)
{
    Util::InitConsole();

    LOG("Setting Up!");

    srand(time(0));

    auto BaseAddr = Util::BaseAddress();
    auto GObjectsAddress = BaseAddr + 0x6661380;
    auto FNameToStringAddress = BaseAddr + 0x1302390;
    auto FreeMemoryAddress = BaseAddr + 0x1233210;
    auto ReallocAddress = BaseAddr + 0x123E4C0;
    auto MallocAddress = BaseAddr + 0x0;
    auto GNamesAddress = BaseAddr + 0x66587C8;

    FName::GNames = *reinterpret_cast<TNameEntryArray**>((uintptr_t**)GNamesAddress);
    UObject::GObjects = reinterpret_cast<FUObjectArray*>((uintptr_t*)GObjectsAddress);
    SDK::FNameToString = decltype(SDK::FNameToString)(FNameToStringAddress);
    SDK::FreeInternal = decltype(SDK::FreeInternal)(FreeMemoryAddress);

    Hooks::InternalTryActivateAbilityLong = decltype(Hooks::InternalTryActivateAbilityLong)(BaseAddr + Offsets::InternalTryActivateAbility);
    FMemory_Free = decltype(FMemory_Free)(FreeMemoryAddress);
    FMemory_Realloc = decltype(FMemory_Realloc)(ReallocAddress);
    FMemory_Malloc = decltype(FMemory_Malloc)(MallocAddress);
    Abilities::GiveAbility = decltype(Abilities::GiveAbility)(BaseAddr + Offsets::GiveAbility);

    auto FortEngine = SDK::UObject::FindObject<UFortEngine>("FortEngine_");
    Globals::FortEngine = FortEngine;
    Globals::World = FortEngine->GameViewport->World;
    Globals::GPS = reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());
    Globals::PC = reinterpret_cast<AFortPlayerController*>(FortEngine->GameInstance->LocalPlayers[0]->PlayerController);
    Globals::MathLib = reinterpret_cast<UKismetMathLibrary*>(UKismetMathLibrary::StaticClass());
    Globals::SystemLib = reinterpret_cast<UKismetSystemLibrary*>(UKismetSystemLibrary::StaticClass());

    Globals::HeadPart = FindObjectFast<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
    Globals::BodyPart = FindObjectFast<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");

    Globals::bSTWMode = false;

    auto NewConsole = Globals::GPS->STATIC_SpawnObject(UFortConsole::StaticClass(), FortEngine->GameViewport);
    FortEngine->GameViewport->ViewportConsole = (UFortConsole*)(NewConsole);

    auto NewCheatManager = Globals::GPS->STATIC_SpawnObject(UCheatManager::StaticClass(), FortEngine->GameInstance->LocalPlayers[0]->PlayerController);
    FortEngine->GameInstance->LocalPlayers[0]->PlayerController->CheatManager = (UCheatManager*)(NewCheatManager);

    MH_Initialize();

    LoadLootPools();

    Discord::UpdateStatus("Server is now loading map...");

    Globals::PC->SwitchLevel(TEXT("Athena_Terrain"));

    Replication::InitOffsets();

    Hooks::bIsReady = true;

    Hooks::Init();

    LOG("Setup!");

    return 0;
}

BOOL APIENTRY DllMain(HMODULE mod, DWORD reason, LPVOID res)
{
    if (reason == 1)
        CreateThread(0, 0, MainThread, mod, 0, 0);

    return TRUE;
}