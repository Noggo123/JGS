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

// AnimBlueprintGeneratedClass Carbide_GliderChute_AnimBP.Carbide_GliderChute_AnimBP_C
// 0x09D4 (0x0D34 - 0x0360)
class UCarbide_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_55709FAA4BAED1A756898DABB2345AD5;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F76FF39A41DD0CF2F00BA786EE9E6A03;      // 0x03B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85236D0F4B241E1FD020DAB6D126D8E6;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EADF24044D4F8CC4DCCE9ACB8382F31;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA921104B841B362E4FC2A293E85ABC;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E04E997240880BCA3CE1878A391471B8;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94CEE00F44ED6FFEE3329D8224B587E0;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ADBF148340DF164912903599A5C1770F;// 0x06D0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3A87BA0E4BA250557F4D51BA149D83C1;// 0x0718(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_41E0690A4E3AE1BBEF74DAB4DE478E46;// 0x0840(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_269B86374FCC6E76D97C6F95D95C73E0;// 0x0888(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0224067748268E440836D9923432CD37;// 0x09B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F07AEB884B8D1EE3F6ABEDB0134BF1FE;// 0x09F8(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C62A14B54521E584481E27898B622D00;// 0x0AD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_61F66877472CBC9AC03996AF5DAE875A;// 0x0BF0(0x0128)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Carbide_GliderChute_AnimBP.Carbide_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_8AA921104B841B362E4FC2A293E85ABC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_E04E997240880BCA3CE1878A391471B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_3A87BA0E4BA250557F4D51BA149D83C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_4EADF24044D4F8CC4DCCE9ACB8382F31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_269B86374FCC6E76D97C6F95D95C73E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_61F66877472CBC9AC03996AF5DAE875A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Carbide_GliderChute_AnimBP_AnimGraphNode_TransitionResult_85236D0F4B241E1FD020DAB6D126D8E6();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_Carbide_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
