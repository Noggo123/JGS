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

// AnimBlueprintGeneratedClass SpaceShuttle_GliderChute_AnimBP.SpaceShuttle_GliderChute_AnimBP_C
// 0x09D4 (0x0D34 - 0x0360)
class USpaceShuttle_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_77E022674899D3E62C2970B75A7B8565;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3EFD8A9F4177341F38CC498CB707F3C9;      // 0x03B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2167403E4371F0934D5EFDB7A2DC0AAA;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C1CA6E64B611CC39049589FD6F5EE90;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD066E9543C0F5BF5A70EE990420C9E5;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C62A4F1E4E21B9C73EE8A082AC2412CE;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FDBB7EB74F76A8437CBD8594ADBA1789;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5115986140287B46E9055CA6B20EBC21;// 0x06D0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C58653345D00DD8586FDB8C05BE6D49;// 0x0718(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CA0C3F3843471D750B7587BE3BE4D037;// 0x0840(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DCED731844684FF6E50014BC28FCF929;// 0x0888(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_55ADBB7C47FC83548BCD87A2D7CFB37E;// 0x09B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_88D47CB04F56A0E2A689B6A91CB1C49E;// 0x09F8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EF8792574E49D3D818921EA3D9BC8B18;// 0x0AD8(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5B1D763444AAB8DF48311EB39DDB4FA7;// 0x0C00(0x0118)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpaceShuttle_GliderChute_AnimBP.SpaceShuttle_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_AD066E9543C0F5BF5A70EE990420C9E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_C62A4F1E4E21B9C73EE8A082AC2412CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_4C58653345D00DD8586FDB8C05BE6D49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_1C1CA6E64B611CC39049589FD6F5EE90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_DCED731844684FF6E50014BC28FCF929();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_EF8792574E49D3D818921EA3D9BC8B18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2167403E4371F0934D5EFDB7A2DC0AAA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
