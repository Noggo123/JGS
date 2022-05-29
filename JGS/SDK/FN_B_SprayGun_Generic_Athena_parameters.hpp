#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.UserConstructionScript
struct AB_SprayGun_Generic_Athena_C_UserConstructionScript_Params
{
};

// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnLoaded_F452B84F41E132B2E1CB668CFA098154
struct AB_SprayGun_Generic_Athena_C_OnLoaded_F452B84F41E132B2E1CB668CFA098154_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.Muzzle Flash FX
struct AB_SprayGun_Generic_Athena_C_Muzzle_Flash_FX_Params
{
	bool*                                              Persistent_Fire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnPlayImpactFX
struct AB_SprayGun_Generic_Athena_C_OnPlayImpactFX_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     ImpactPhysicalSurface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent**                   SpawnedPSC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.ExecuteUbergraph_B_SprayGun_Generic_Athena
struct AB_SprayGun_Generic_Athena_C_ExecuteUbergraph_B_SprayGun_Generic_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
