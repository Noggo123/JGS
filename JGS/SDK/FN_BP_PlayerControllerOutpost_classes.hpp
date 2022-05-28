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

// BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
// 0x0019 (0x2A79 - 0x2A60)
class ABP_PlayerControllerOutpost_C : public AFortPlayerControllerOutpost
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2A60(0x0008) (Transient, DuplicateTransient)
	class AOutpostStructureBase*                       NewVar_0_1;                                               // 0x2A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOutpostStructureBase*                       NewVar_1_2;                                               // 0x2A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               GetHelp;                                                  // 0x2A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C");
		return ptr;
	}


	void UserConstructionScript();
	void ServerStartExpandingOutpost(bool GetHelp);
	void ExecuteUbergraph_BP_PlayerControllerOutpost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
