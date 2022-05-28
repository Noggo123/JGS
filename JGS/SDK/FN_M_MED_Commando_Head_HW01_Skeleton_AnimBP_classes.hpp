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

// AnimBlueprintGeneratedClass M_MED_Commando_Head_HW01_Skeleton_AnimBP.M_MED_Commando_Head_HW01_Skeleton_AnimBP_C
// 0x00F0 (0x04C0 - 0x03D0)
class UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D438209241CBEA7C1261418DAF6624DF;      // 0x03D8(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C;// 0x0420(0x0098)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_Commando_Head_HW01_Skeleton_AnimBP.M_MED_Commando_Head_HW01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
