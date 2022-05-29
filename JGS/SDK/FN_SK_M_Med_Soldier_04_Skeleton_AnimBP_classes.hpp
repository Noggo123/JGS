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

// AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C
// 0x2158 (0x2568 - 0x0410)
class USK_M_Med_Soldier_04_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_78EB935A430054ADF5E2E89005D9D000;      // 0x0418(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D3F10A774DCEBBC7CF6FACA843FAA56D;// 0x0460(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F50D097B4AF8FD409EBDB7A56995EB71;// 0x04A8(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE;// 0x04F0(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AF49CEBA41A86A5239B445ACCA2A35D2;// 0x05E0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E019B8DC42D4A76813488292D50D4442;// 0x0960(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_53B6F76442E1E5367E83198574A7E337;// 0x0CE0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3B49A128489AAE9305B9BEACDF5446C4;// 0x1060(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_01F0D350476ED069A3D9B380171159E1;// 0x13E0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_49D024DD4CCCDA28D4E6A4B218DA8C95;// 0x1760(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1252AA6E4C48E209E99F5A858FD09EF0;// 0x1AE0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5645113E4C1291E8D49232A713F4ACB6;// 0x1E60(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C22827054B8FE020B6B60AB10AA0C297;// 0x21E0(0x0380)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_E019B8DC42D4A76813488292D50D4442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_53B6F76442E1E5367E83198574A7E337();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_AF49CEBA41A86A5239B445ACCA2A35D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_3B49A128489AAE9305B9BEACDF5446C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_01F0D350476ED069A3D9B380171159E1();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
