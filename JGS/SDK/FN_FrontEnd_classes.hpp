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

// BlueprintGeneratedClass Frontend.FrontEnd_C
// 0x00A0 (0x0420 - 0x0380)
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	bool                                               CameraTargetMovementUnlocked;                             // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	TArray<EFrontEndCamera>                            UnlockedCameraTypes;                                      // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MouseDown;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	TArray<EFortItemType>                              UnlockedItemTypes;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ItemMovementUnlocked;                                     // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TArray<EFortItemType>                              WorldRotationAllowed;                                     // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EFortItemType                                      CurrentType;                                              // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class UMeshComponent*                              PreviewMesh;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThumbstickTolerance;                                      // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpawnerRotation;                                          // 0x03E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStoredInitialRotation;                                   // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	int                                                ActiveTouchIndex;                                         // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousTouchLocation;                                    // 0x03F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TouchDelta;                                               // 0x0404(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class APartyDisplayManagerBP_C*                    PartyDisplayManagerBP_574_ExecuteUbergraph_Frontend_RefProperty;// 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;   // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend.FrontEnd_C");
		return ptr;
	}


	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1(const struct FKey& Key);
	void InpTchEvt_Moved(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5(float AxisValue);
	void ResetRotation();
	void StoreInitialRotation();
	void OnMatchStarted();
	void EnableTutorial();
	void ReceiveBeginPlay();
	void UnlockCameraTargetMovement(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void UnlockItemMovement(class UFortItem* Item);
	void BindFrontendEvents();
	void ExecuteUbergraph_FrontEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
