#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C
// 0x0018 (0x0AD8 - 0x0AC0)
class UGAB_ShielderAttachPawnEvents_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AC9(0x0007) MISSED OFFSET
	class AShielderPawn_C*                             Shielder;                                                 // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_ShielderAttachPawnEvents(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
