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

// BlueprintGeneratedClass GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C
// 0x0028 (0x0B08 - 0x0AE0)
class UGAT_ReflectDamage_Melee_C : public UGAT_ReflectDamage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0AE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAT_ReflectDamage_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
