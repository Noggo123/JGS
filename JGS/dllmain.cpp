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

#include "Replication.h"
#include "Inventory.h"
#include "Abilities.h"
#include "NetHooks.h"

#include "Hooks.h"

DWORD WINAPI MainThread(LPVOID)
{
    Util::InitConsole();

    LOG("Setting Up!");

    srand(time(0));

    auto BaseAddr = Util::BaseAddress();

    auto pGObjectAddress = Util::FindPattern("\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6", "xxx????x????x????x????xxx");
    auto pGObjectOffset = *reinterpret_cast<uint32_t*>(pGObjectAddress + 3);
    SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(pGObjectAddress + 7 + pGObjectOffset);

    auto pGNameAddress = Util::FindPattern("\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x50\xB9\x00\x00\x00\x00\x48\x89\x5C\x24", "xxx????xxxxxx????xxxx");
    auto pGNameOffset = *reinterpret_cast<uint32_t*>(pGNameAddress + 3);

    SDK::FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>(pGNameAddress + 7 + pGNameOffset);

    Hooks::InternalTryActivateAbilityLong = decltype(Hooks::InternalTryActivateAbilityLong)(BaseAddr + Offsets::InternalTryActivateAbility);

    auto FortEngine = SDK::UObject::FindObject<UFortEngine>("FortEngine_");
    Globals::FortEngine = FortEngine;
    Globals::World = FortEngine->GameViewport->World;
    Globals::GPS = reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());
    Globals::PC = reinterpret_cast<AFortPlayerController*>(FortEngine->GameInstance->LocalPlayers[0]->PlayerController);
    Globals::MathLib = reinterpret_cast<UKismetMathLibrary*>(UKismetMathLibrary::StaticClass());
    Globals::SystemLib = reinterpret_cast<UKismetSystemLibrary*>(UKismetSystemLibrary::StaticClass());
    Globals::FortLib = reinterpret_cast<UFortKismetLibrary*>(UFortKismetLibrary::StaticClass());

    printf("Before FindObjectFast!\n");

    Globals::HeadPart = FindObjectFast<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
    Globals::BodyPart = FindObjectFast<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");

    printf("After FindObjectFast!\n");

    auto NewConsole = Globals::GPS->STATIC_SpawnObject(UFortConsole::StaticClass(), FortEngine->GameViewport);
    FortEngine->GameViewport->ViewportConsole = (UFortConsole*)(NewConsole);

    auto NewCheatManager = Globals::GPS->STATIC_SpawnObject(UCheatManager::StaticClass(), FortEngine->GameInstance->LocalPlayers[0]->PlayerController);
    FortEngine->GameInstance->LocalPlayers[0]->PlayerController->CheatManager = (UCheatManager*)(NewCheatManager);

    MH_Initialize();

    LoadLootPools();

    Discord::UpdateStatus("Server is now loading map...");

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