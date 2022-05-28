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

// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
// 0x09E8 (0x0E28 - 0x0440)
class UMenuScreen_Athena_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC;// 0x0448(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E;// 0x0490(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715;      // 0x04D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57;      // 0x0520(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22;// 0x0590(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8;// 0x0670(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5;// 0x06E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20;// 0x0750(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98;// 0x07C0(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A;// 0x0830(0x00D0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D;// 0x0900(0x00D0)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2;     // 0x09D0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1;// 0x0A70(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54;      // 0x0B28(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B;// 0x0B98(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134;// 0x0C78(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B;// 0x0D58(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224;// 0x0DA8(0x0050)
	struct FScriptMulticastDelegate                    MenuScreenDispatcher;                                     // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HasBeenSelected;                                          // 0x0E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E09(0x0003) MISSED OFFSET
	int                                                PoseInt;                                                  // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetTranslate;                                          // 0x0E10(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetRotate;                                             // 0x0E1C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C");
		return ptr;
	}


	void BlueprintBeginPlay();
	void UserFocus();
	void AnimNotify_playFacialAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22();
	void AnimNotify_LeftB();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_MenuScreen_Athena(int EntryPoint);
	void MenuScreenDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
