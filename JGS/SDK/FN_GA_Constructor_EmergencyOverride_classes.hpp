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

// BlueprintGeneratedClass GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C
// 0x001E (0x0B98 - 0x0B7A)
class UGA_Constructor_EmergencyOverride_C : public UGAT_ConstructorTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B7A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0B88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_EmergencyOverride;                                     // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Constructor_EmergencyOverride(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
