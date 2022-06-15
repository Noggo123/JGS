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

// BlueprintGeneratedClass GA_SupplyDrop.GA_SupplyDrop_C
// 0x01FF (0x0D09 - 0x0B0A)
class UGA_SupplyDrop_C : public UGAT_GenericActiveAbilityNoCommit_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B0A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventComplete;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                          // 0x0B20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortAbilityTargetSelection                 T_Explosion;                                              // 0x0B28(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  ActivationSound;                                          // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEventData                          EventData_0_1;                                            // 0x0B90(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AbilityMultiplier;                                        // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C3C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_CoreResourceUpgrade1;                                  // 0x0C40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_CoreResourceUpgrade2;                                  // 0x0C60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_RandomItemUpgrade1;                                    // 0x0C80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_RandomItemUpgrade2;                                    // 0x0CA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_RandomItemUpgrade3;                                    // 0x0CC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSupplyDropUnlocks                          UnlockTiers;                                              // 0x0CE0(0x0005) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CE5(0x0003) MISSED OFFSET
	int                                                WoodCount;                                                // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExtraCraftingCount;                                       // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MetalCount;                                               // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StoneCount;                                               // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WoodItems;                                                // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StoneItems;                                               // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MetalItems;                                               // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CraftingItems;                                            // 0x0D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTraps;                                                   // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SupplyDrop.GA_SupplyDrop_C");
		return ptr;
	}


	void SetTierFiveData(bool Condition);
	void SetTierFourData(bool Condition);
	void SetTierThreeData(bool Condition);
	void SetTierTwoData(bool Conditions);
	void SetTierOneData(bool Condition);
	void Setup_Ability(class UAbilitySystemComponent* AbilitySystemComponentRef);
	void GetAttributeValue();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_SupplyDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
