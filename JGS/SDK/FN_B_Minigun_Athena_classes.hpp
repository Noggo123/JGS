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

// BlueprintGeneratedClass B_Minigun_Athena.B_Minigun_Athena_C
// 0x0067 (0x0EA0 - 0x0E39)
class AB_Minigun_Athena_C : public AB_Ranged_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E39(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E40(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BarrelGlowFX;                                             // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SpinUpSound;                                              // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SpinDownSound;                                            // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_MinigunChargeUp;                                        // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinUpAudioVolume_Volume_Multiplier_9432EB6749F26F646D08C787C7E56ED4;// 0x0E68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpinUpAudioVolume__Direction_9432EB6749F26F646D08C787C7E56ED4;// 0x0E6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpinUpAudioVolume;                                        // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarrelGlow_MuzzleGlowOpacity_6AA244864FFB6D03BB4DAA82CADCA13E;// 0x0E78(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BarrelGlow__Direction_6AA244864FFB6D03BB4DAA82CADCA13E;   // 0x0E7C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BarrelGlow;                                               // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MuzzleGlowMID;                                            // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CurrentSpinAudioComponent;                                // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinVolumeMultiplier;                                     // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedSpinDownAudio;                                     // 0x0E9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedSpinUpAudio;                                       // 0x0E9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CurrentSpinDirection;                                     // 0x0E9E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedSpinSound;                                         // 0x0E9F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Minigun_Athena.B_Minigun_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void BarrelGlow__FinishedFunc();
	void BarrelGlow__UpdateFunc();
	void SpinUpAudioVolume__FinishedFunc();
	void SpinUpAudioVolume__UpdateFunc();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void OnChargeUp();
	void OnChargeDown();
	void OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance);
	void MakeBarrelGlow();
	void StopBarrelGlow();
	void Start_Spin_Up_Audio();
	void Start_Spin_Down_Audio();
	void ExecuteUbergraph_B_Minigun_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
