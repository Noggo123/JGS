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

// BlueprintGeneratedClass B_GoinCommandoWeapon.B_GoinCommandoWeapon_C
// 0x00BB (0x0EF4 - 0x0E39)
class AB_GoinCommandoWeapon_C : public AB_Ranged_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E39(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E40(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_GoingCommando_ChargeUp_01;                              // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SpinDownSound;                                            // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SpinUpSound;                                              // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeUp_ChargingTime_46AF3CCF4ABF9B1069FB7989793B0F32;   // 0x0E60(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ChargeUp__Direction_46AF3CCF4ABF9B1069FB7989793B0F32;     // 0x0E64(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E65(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ChargeUp;                                                 // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Boomstick;                                                // 0x0E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0E71(0x0007) MISSED OFFSET
	class UParticleSystem*                             BulletImpact_Lvl0_4;                                      // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BulletImpact_Lvl5;                                        // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterialLvl0_4;                                      // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterialLvl5;                                        // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleLvl5;                                               // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleLvl0_4;                                             // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TracerLvl5;                                               // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TracerLvl0_4;                                             // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Boomstick;                                             // 0x0EB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    Effect_GoingCommando_WeaponArcs;                          // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ChargeupLvl0_4;                                           // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ChargeupLvl5;                                             // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentChargeTime;                                        // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_GoinCommandoWeapon.B_GoinCommandoWeapon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ChargeUp__FinishedFunc();
	void ChargeUp__UpdateFunc();
	void SetUpgradeLevel();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void OnPlayImpactFX(struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface, class UParticleSystemComponent** SpawnedPSC);
	void OnChargeUp();
	void OnChargeDown();
	void OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance);
	void ExecuteUbergraph_B_GoinCommandoWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
