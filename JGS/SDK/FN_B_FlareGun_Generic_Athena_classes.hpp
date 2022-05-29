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

// BlueprintGeneratedClass B_FlareGun_Generic_Athena.B_FlareGun_Generic_Athena_C
// 0x0014 (0x0EA0 - 0x0E8C)
class AB_FlareGun_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E8C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E90(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    RearMuzzle;                                               // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_FlareGun_Generic_Athena.B_FlareGun_Generic_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void Muzzle_Flash_FX(bool* Persistent_Fire);
	void ExecuteUbergraph_B_FlareGun_Generic_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
