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

// BlueprintGeneratedClass B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C
// 0x0030 (0x0BD8 - 0x0BA8)
class AB_Dev_Test_Pickaxe_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BA8(0x0008) (Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Kill;                                                     // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxKills;                                                 // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillGlowThreshold;                                        // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillHornThreshold;                                        // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           NewVar_0_1;                                               // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_OnProgressiveCosmeticWatchedStatChanged(struct FName* StatName, int* NewValue);
	void ExecuteUbergraph_B_Dev_Test_Pickaxe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
