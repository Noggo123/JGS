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

// AnimBlueprintGeneratedClass F_MED_CAU_Armstrong_01_Skeleton_AnimBP.F_MED_CAU_Armstrong_01_Skeleton_AnimBP_C
// 0x0518 (0x0998 - 0x0480)
class UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0EC26DC347D7E40CA9392680E3F1A752;      // 0x0488(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764;// 0x04D0(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8D1C069949068E49AA68DC8A8B44667E;      // 0x0568(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F1CCD822439E57B485188E9BE6399F53;// 0x05D8(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9374D3DC4CFB636084873392DF9E8E45;// 0x06B8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361;// 0x0798(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9;// 0x0868(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0CABFE4A496CC11CE98E88957AA63F33;// 0x0900(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6AC04744409DE2AEE363C79CDEBDCF53;// 0x0948(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_CAU_Armstrong_01_Skeleton_AnimBP.F_MED_CAU_Armstrong_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
