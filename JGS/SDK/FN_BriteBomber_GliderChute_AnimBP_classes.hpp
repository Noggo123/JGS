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

// AnimBlueprintGeneratedClass BriteBomber_GliderChute_AnimBP.BriteBomber_GliderChute_AnimBP_C
// 0x0710 (0x0A70 - 0x0360)
class UBriteBomber_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C985F71D4D9DBE0A46F5DABE43EC328F;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3F0E76FD44D22BCE2EB3D6AE84FE6F1E;      // 0x03B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBB24C314EDD3301D89D58849E8F9240;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2AB838344513C45252EB0C81DDE67084;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67E3ED4843DA37DD210A63B32C13F845;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5740D2DB4345D1C76FDE51A999B4AC82;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A7ABD5E4AB0A3FBAE8378976BCDBCDB;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA7515DB481389CF529FC9864A295FFB;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F383368E438B46219C04F3A54EB292DA;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A2F94C7A4AA85A7ACFD1BF9CFE5E8555;// 0x07C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_60D985E04445E86C1BD168B73582AA91;// 0x0810(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_78C77B594BE6885A47EF4B9E164456FD;// 0x0938(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_099BE1D2437433DD40728A82B33788EB;// 0x0980(0x00E0)
	bool                                               IsParachuteOpen;                                          // 0x0A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A61(0x0003) MISSED OFFSET
	float                                              AimPitch;                                                 // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployAnimRate;                                           // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveYaw;                                               // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BriteBomber_GliderChute_AnimBP.BriteBomber_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_67E3ED4843DA37DD210A63B32C13F845();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_5740D2DB4345D1C76FDE51A999B4AC82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2AB838344513C45252EB0C81DDE67084();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_60D985E04445E86C1BD168B73582AA91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_DBB24C314EDD3301D89D58849E8F9240();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BriteBomber_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
