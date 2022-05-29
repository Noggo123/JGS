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

// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
// 0x0638 (0x0A48 - 0x0410)
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode_0E491F3A4C933A03AAE42DA602295362;// 0x0418(0x00C8)
	struct FAnimNode_Root                              AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C;      // 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94E41D364E86D3FFC2D042845913D0EE;// 0x0528(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E;// 0x05D8(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B0BAEC37412A3BDE897683AA32FAE4E1;// 0x06C0(0x00E0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3971854A46E6B529767EA2AB708A8D46;// 0x07A0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D687C7FB4A07645ECE24DBB182B71823;// 0x08C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19E6568A48732F90AD2036B56ECA0D46;// 0x09A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C898D19D46B0E9723DD75AA4710C2707;// 0x09F0(0x0050)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
