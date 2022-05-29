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

// BlueprintGeneratedClass GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C
// 0x0050 (0x0B10 - 0x0AC0)
class UGAB_TakerSwoopLevitate_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     Pawn_Destination;                                         // 0x0AC8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Pawn_Location;                                            // 0x0AD4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET
	class ATakerPawn_C*                                Taker;                                                    // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FarAngleForTakerToLevitateTo;                             // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FarDistance;                                              // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseAngleForTakerToLevitateTo;                           // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseDistance;                                            // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TakerCollisionProfileWhenSwooping;                        // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LevitateAnimationTranslationDistance;                     // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugLevitateStartTime;                                   // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C");
		return ptr;
	}


	void EventReceived_9815869441DE62BDFB6A3794B3593B2E(const struct FGameplayEventData& Payload);
	void OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerSwoopLevitate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
