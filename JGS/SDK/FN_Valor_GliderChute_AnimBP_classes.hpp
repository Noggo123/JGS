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

// AnimBlueprintGeneratedClass Valor_GliderChute_AnimBP.Valor_GliderChute_AnimBP_C
// 0x09D4 (0x0D34 - 0x0360)
class UValor_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_61D7B39F44BFBE29070C37B063EA4242;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ED504665497666F93540ACA4B2C8682F;      // 0x03B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD228E3643C2BC9B754DABA4CCADE7EF;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA5EA56C483CDA4A88A5679690D2A77A;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_291602B344040B199D672FAD327F4B1D;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62B0118341EBEF5B92915BA7BEFA60E9;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02F9B28748AA3C819939DFB6AC597DA6;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0DEDD24D446D2F27C33D4C8F3B9F724F;// 0x06D0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_58215E2945657D2CC292E59F51C319B9;// 0x0718(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_650381E24DE29A4CB2DFF293B62864BB;// 0x0840(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_51F7DA7B455E263449C368A9BC234B16;// 0x0888(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E14AB4C941293C362F9023B619B75FEE;// 0x09B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A4C5501B4AC43D92202FC9BEC12AE6E4;// 0x09F8(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_01D97B434BABC10810646AAB4354795A;// 0x0AD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1C63A2364DFADD8B30ACCCA4339F7BF6;// 0x0BF0(0x0128)
	bool                                               IsParachuteOpen;                                          // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D19(0x0003) MISSED OFFSET
	float                                              AimPitch;                                                 // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployAnimRate;                                           // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveYaw;                                               // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseDynamicsAlpha;                                         // 0x0D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Forward;                                                  // 0x0D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right;                                                    // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Valor_GliderChute_AnimBP.Valor_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_291602B344040B199D672FAD327F4B1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_62B0118341EBEF5B92915BA7BEFA60E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_58215E2945657D2CC292E59F51C319B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_DA5EA56C483CDA4A88A5679690D2A77A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_51F7DA7B455E263449C368A9BC234B16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_1C63A2364DFADD8B30ACCCA4339F7BF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Valor_GliderChute_AnimBP_AnimGraphNode_TransitionResult_FD228E3643C2BC9B754DABA4CCADE7EF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_Valor_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
