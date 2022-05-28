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

// AnimBlueprintGeneratedClass F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP.F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C
// 0x0518 (0x0998 - 0x0480)
class UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0B40686742835C44D79BBF912D9EE786;      // 0x0488(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756;// 0x04D0(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_647DFDF241CA0D786C7678A9DA110BA2;      // 0x0568(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0A434B384ABE9775ABE93A9D2614EB63;// 0x05D8(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C4B69DBA48E9D799B2611CBC4C2E21C0;// 0x06B8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42;// 0x0798(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D;// 0x0868(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C22854E142B1FF2C4EA56C9F5DA77887;// 0x0900(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_17B4681A41228AABE5D3828791B20C56;// 0x0948(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP.F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
