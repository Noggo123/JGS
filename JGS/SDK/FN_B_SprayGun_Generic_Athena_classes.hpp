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

// BlueprintGeneratedClass B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C
// 0x0044 (0x0ED0 - 0x0E8C)
class AB_SprayGun_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E8C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E90(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    RearMuzzle;                                               // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                BannerSecondaryColor;                                     // 0x0EA0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BannerPrimaryColor;                                       // 0x0EB0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  BannerIconLarge;                                          // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAthenaSprayItemDefinition*                  MySpray;                                                  // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoaded_F452B84F41E132B2E1CB668CFA098154(class UObject* Loaded);
	void Muzzle_Flash_FX(bool* Persistent_Fire);
	void OnPlayImpactFX(struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface, class UParticleSystemComponent** SpawnedPSC);
	void ExecuteUbergraph_B_SprayGun_Generic_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
