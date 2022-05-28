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

// AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP.M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_C
// 0x1580 (0x1A00 - 0x0480)
class UM_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A3739B5E48C0B7776ACAAC9C7CF0A270;      // 0x0488(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A42EFEA44A1FDA2C0A8381B421F7900B;// 0x04D0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DC3A3A1E461B38F619E23AB4116DEAE0;// 0x0750(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D9AF93E64B2CD141DF2F1D850E370836;// 0x09D0(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0C54A35A4E0FBACBFCD8BF874BE814C5;// 0x0C50(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5BD2D0894B978F9028E8DF86CDCD9D85;// 0x0C98(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_AB4673DC44FC6444268919858C878B38;// 0x0CE0(0x0098)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DA9B54054FD5CDF642CD86ADD51347EB;// 0x0D78(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A4505A7646E2056C448E8C900A3F47D3;// 0x0FF8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A5456E3649FE595D73809BBB039544D4;// 0x1278(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C247181B4AA976C204BA5388817B25F2;// 0x14F8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3D512BEA4DE8245F35E315A41CCDC5CD;// 0x1778(0x0280)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x19F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP.M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A5456E3649FE595D73809BBB039544D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A4505A7646E2056C448E8C900A3F47D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_DA9B54054FD5CDF642CD86ADD51347EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_AB4673DC44FC6444268919858C878B38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_C247181B4AA976C204BA5388817B25F2();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
