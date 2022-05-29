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

// BlueprintGeneratedClass GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C
// 0x0010 (0x0AD8 - 0x0AC8)
class UGAB_SmasherChargeDecelerate_C : public UGAB_AIBaseSimpleMontage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC8(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                GC_GameplayCueNPCSmasherCharge;                           // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_SmasherChargeDecelerate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
