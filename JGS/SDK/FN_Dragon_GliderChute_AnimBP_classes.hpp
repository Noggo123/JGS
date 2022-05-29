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

// AnimBlueprintGeneratedClass Dragon_GliderChute_AnimBP.Dragon_GliderChute_AnimBP_C
// 0x078C (0x0AEC - 0x0360)
class UDragon_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A99615014EA5B13CC3254083B9D5FEDE;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E4E7F1A44C799E996866EFAEFE335FB3;      // 0x03B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_857A34EA4F0A297E27DF8C8427539989;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F88DBB041D7585C55DFCDBE41CF7455;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D240FC4E4CD55E6DB1C9ADA2282691FA;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C8E801E4C9EED53D45DBABFAF43ED35;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C37BB15D46E2FD548BB13589A6F827CB;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_14DFFF1246519F2F4A733EB9CEF80A83;// 0x06D0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_060F8D4C46B093E16BA7C9B571311841;// 0x0718(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_48A5286F45FAFEB052182999527AC6D9;// 0x0840(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BA31A8FF4EBE384F500F70B05460E3C4;// 0x0888(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_566190374510421740624895F4503B6D;// 0x09B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EE98A1244C3B0FD7934F5AB203F0C4FA;// 0x09F8(0x00E0)
	bool                                               IsParachuteOpen;                                          // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AD9(0x0003) MISSED OFFSET
	float                                              AimPitch;                                                 // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployAnimRate;                                           // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveYaw;                                               // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseDynamicsAlpha;                                         // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dragon_GliderChute_AnimBP.Dragon_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_D240FC4E4CD55E6DB1C9ADA2282691FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_5C8E801E4C9EED53D45DBABFAF43ED35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_6F88DBB041D7585C55DFCDBE41CF7455();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_060F8D4C46B093E16BA7C9B571311841();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_BA31A8FF4EBE384F500F70B05460E3C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dragon_GliderChute_AnimBP_AnimGraphNode_TransitionResult_857A34EA4F0A297E27DF8C8427539989();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_dynamicsOff();
	void AnimNotify_dynamicsOn();
	void ExecuteUbergraph_Dragon_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
