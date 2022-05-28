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

// AnimBlueprintGeneratedClass M_MED_Commando_Head_Cowl__Skeleton_AnimBP.M_MED_Commando_Head_Cowl__Skeleton_AnimBP_C
// 0x0518 (0x0998 - 0x0480)
class UM_MED_Commando_Head_Cowl__Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_261A643B44BADFBADE442DAE95CB374E;      // 0x0488(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_41442FB8422E32239DE7E2A6A24E8112;// 0x04D0(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08131C5B469273FEBB3286B09ACE6DCA;      // 0x0568(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_46BD4D1E4E1B4B6CFA1AB7842578B7A1;// 0x05D8(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2454B839401D3501969AA48AD5B37B49;// 0x06B8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FA277253427E15AC5D27C88699B807AA;// 0x0798(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_B734E9D8418A14BDB00F379ACE17873E;// 0x0868(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6FDA3BD94F499C362A0952BE55D1FCE4;// 0x0900(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7F33ED3649844BCA1981928F0ABDEAFD;// 0x0948(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_Commando_Head_Cowl__Skeleton_AnimBP.M_MED_Commando_Head_Cowl__Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_B734E9D8418A14BDB00F379ACE17873E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP_AnimGraphNode_BlendListByBool_FA277253427E15AC5D27C88699B807AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_41442FB8422E32239DE7E2A6A24E8112();
	void BlueprintInitializeAnimation();
	void Playface();
	void ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
