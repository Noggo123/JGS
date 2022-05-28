#include <Windows.h>
#include <vector>

#include "minhook/MinHook.h"

#pragma comment(lib, "minhook/minhook.lib")

#include "SDK.hpp"

using namespace SDK;

#include "Globals.h"
#include "Util.h"

#include "Offsets.h"

#include "Replication.h"
#include "Inventory.h"
#include "Abilities.h"
#include "NetHooks.h"

#include "Hooks.h"

DWORD WINAPI MainThread(LPVOID)
{
    Util::InitConsole();

    LOG("Setting Up!");

    auto BaseAddr = Util::BaseAddress();
    auto GObjectsAddress = BaseAddr + 0x44E5CE0;
    auto FNameToStringAddress = BaseAddr + 0xC79B10;
    auto FreeMemoryAddress = BaseAddr + 0xBBCEB0;

    SDK::UObject::GObjects = decltype(SDK::UObject::GObjects)(GObjectsAddress);
    SDK::FNameToString = decltype(SDK::FNameToString)(FNameToStringAddress);
    SDK::FreeInternal = decltype(SDK::FreeInternal)(FreeMemoryAddress);

    auto FortEngine = SDK::UObject::FindObject<UFortEngine>("FortEngine_");
    Globals::FortEngine = FortEngine;
    Globals::World = FortEngine->GameViewport->World;
    Globals::GPS = reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());
    Globals::PC = reinterpret_cast<AFortPlayerController*>(FortEngine->GameInstance->LocalPlayers[0]->PlayerController);
    Globals::MathLib = reinterpret_cast<UKismetMathLibrary*>(UKismetMathLibrary::StaticClass());

    Globals::HeadPart = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
    Globals::BodyPart = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");

    auto NewConsole = Globals::GPS->STATIC_SpawnObject(UFortConsole::StaticClass(), FortEngine->GameViewport);
    FortEngine->GameViewport->ViewportConsole = (UFortConsole*)(NewConsole);

    auto NewCheatManager = Globals::GPS->STATIC_SpawnObject(UCheatManager::StaticClass(), FortEngine->GameInstance->LocalPlayers[0]->PlayerController);
    FortEngine->GameInstance->LocalPlayers[0]->PlayerController->CheatManager = (UCheatManager*)(NewCheatManager);

    MH_Initialize();

    Globals::PC->SwitchLevel(TEXT("Athena_Terrain"));

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