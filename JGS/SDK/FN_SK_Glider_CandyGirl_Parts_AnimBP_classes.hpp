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

// AnimBlueprintGeneratedClass SK_Glider_CandyGirl_Parts_AnimBP.SK_Glider_CandyGirl_Parts_AnimBP_C
// 0x0140 (0x0550 - 0x0410)
class USK_Glider_CandyGirl_Parts_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A7E516D348960718528E0496F8DF18F6;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_059A551F4FE3D080CE9EF99ADBB39486;// 0x0460(0x00E8)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Glider_CandyGirl_Parts_AnimBP.SK_Glider_CandyGirl_Parts_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_CandyGirl_Parts_AnimBP_AnimGraphNode_CopyPoseFromMesh_059A551F4FE3D080CE9EF99ADBB39486();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Glider_CandyGirl_Parts_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
