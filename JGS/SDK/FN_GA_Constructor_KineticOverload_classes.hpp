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

// BlueprintGeneratedClass GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C
// 0x00F8 (0x0C72 - 0x0B7A)
class UGA_Constructor_KineticOverload_C : public UGAT_ConstructorTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B7A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0B88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0B90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_KineticDamage;                                         // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_BeatDown;                                              // 0x0BA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_BeatDown;                                              // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_KineticOverdrive;                                      // 0x0BC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               KineticOverdrive;                                         // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BE9(0x0003) MISSED OFFSET
	struct FVector                                     MainTargetLocation;                                       // 0x0BEC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            AOETargets;                                               // 0x0BF8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_AoeTarget;                                             // 0x0C18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NiceAndSlow;                                           // 0x0C20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_NiceAndSlowDamage;                                     // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_BluntDamage;                                           // 0x0C48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      PrimaryTarget;                                            // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               NiceAndSlow;                                              // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeatDown;                                                 // 0x0C71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C");
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	struct FTransform GetCustomAbilitySourceTransform();
	void HitTarget();
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload);
	void Cancelled_AEF31BFB4F9F700D450DB3A243436FC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_AEF31BFB4F9F700D450DB3A243436FC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void AbilityTimeout();
	void ExecuteUbergraph_GA_Constructor_KineticOverload(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
