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

// BlueprintGeneratedClass GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C
// 0x0042 (0x0BCC - 0x0B8A)
class UGA_Constructor_FeelTheBase_DeathListener_C : public UGAT_GenericTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B8A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B90(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      StackCount;                                               // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       OverflowTag;                                              // 0x0BA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Stack1;                                                   // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stack2;                                                   // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stack3;                                                   // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C");
		return ptr;
	}


	void ActivateBaseStacks(int StackCount, class AB_Constructor_BASE_C* BaseReference);
	void Exceute_GC(class AB_Constructor_BASE_C* BaseReference, bool* Overflow);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
