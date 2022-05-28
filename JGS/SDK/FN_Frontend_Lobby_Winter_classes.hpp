#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Frontend_Lobby_Winter.Frontend_Lobby_Winter_C
// 0x0010 (0x0390 - 0x0380)
class AFrontend_Lobby_Winter_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class AEmitter*                                    FogNoise_Winter2_9_ExecuteUbergraph_Frontend_Lobby_Winter_RefProperty;// 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Lobby_Winter.Frontend_Lobby_Winter_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby_Winter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
