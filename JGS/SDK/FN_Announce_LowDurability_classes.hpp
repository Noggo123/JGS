#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_LowDurability.Announce_LowDurability_C
// 0x0010 (0x04F8 - 0x04E8)
class AAnnounce_LowDurability_C : public AFortClientAnnouncement_Basic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_LowDurability.Announce_LowDurability_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnClientAnnouncementStart();
	void ExecuteUbergraph_Announce_LowDurability(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
