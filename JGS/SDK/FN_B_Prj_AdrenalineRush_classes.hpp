#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C
// 0x008C (0x088C - 0x0800)
class AB_Prj_AdrenalineRush_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_AdrenalineRush_HealingSparkleInit_01;                   // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       ShockwavePostProcess;                                     // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Shockwave;                                                // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_Shockwave_Transition_9A3E45BA49610747DB8700A8BAA24ED4; // 0x0820(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PP_Shockwave_Fader_9A3E45BA49610747DB8700A8BAA24ED4;      // 0x0824(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PP_Shockwave__Direction_9A3E45BA49610747DB8700A8BAA24ED4; // 0x0828(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	class UTimelineComponent*                          PP_Shockwave;                                             // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shockwave_Ring_Size_Z;                                    // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	class UPostProcessComponent*                       ShockwavePP;                                              // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      PP_Shockwave_PlayRate;                                    // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      PP_Shockwave_SpawnRate;                                   // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Shockwave_Particle_Max_Radius_Clamp;                      // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_AdrenalineRush_Start;                               // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_AdrenalineShockWave_FP;                             // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_AdrenalineShockWave_TP;                             // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShockWave_PlayRate;                                       // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C");
		return ptr;
	}


	void DestroyPP();
	void UserConstructionScript();
	void PP_Shockwave__FinishedFunc();
	void PP_Shockwave__UpdateFunc();
	void PassInfo(float Radius, class AFortPlayerPawn* Owner, bool AOE_Heal, bool Upgrade_InstaHeal, bool HOT, float HOT_Duration, bool Resurrect);
	void ExecuteUbergraph_B_Prj_AdrenalineRush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
