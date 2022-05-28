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

// BlueprintGeneratedClass GAT_ReflectDamage.GAT_ReflectDamage_C
// 0x0030 (0x0AE0 - 0x0AB0)
class UGAT_ReflectDamage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                ReflectedTag;                                             // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      DamageGE;                                                 // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilitySystemComponent*                     OriginalDamageInstigator;                                 // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilitySystemComponent*                     OriginalDamageTarget;                                     // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ReflectionRequestTag;                                     // 0x0AD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ReflectDamage.GAT_ReflectDamage_C");
		return ptr;
	}


	void ReflectDamage(class UAbilitySystemComponent* OriginalDmgCauser, class UAbilitySystemComponent* ReflectedDmgDealer, class UAbilitySystemComponent* OriginalDmgReceiver, const struct FGameplayTagContainer& OriginalDmgCauserTags, const struct FGameplayTagContainer& OriginalDmgReceiverTags, float OriginalDmg);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAT_ReflectDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
