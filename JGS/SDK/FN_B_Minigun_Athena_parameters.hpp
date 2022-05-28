#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
struct AB_Minigun_Athena_C_UserConstructionScript_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__FinishedFunc
struct AB_Minigun_Athena_C_BarrelGlow__FinishedFunc_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__UpdateFunc
struct AB_Minigun_Athena_C_BarrelGlow__UpdateFunc_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinUpAudioVolume__FinishedFunc
struct AB_Minigun_Athena_C_SpinUpAudioVolume__FinishedFunc_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinUpAudioVolume__UpdateFunc
struct AB_Minigun_Athena_C_SpinUpAudioVolume__UpdateFunc_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
struct AB_Minigun_Athena_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp
struct AB_Minigun_Athena_C_OnChargeUp_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown
struct AB_Minigun_Athena_C_OnChargeDown_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
struct AB_Minigun_Athena_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification*                  CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic**                   DynamicMaterialInstance;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.MakeBarrelGlow
struct AB_Minigun_Athena_C_MakeBarrelGlow_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.StopBarrelGlow
struct AB_Minigun_Athena_C_StopBarrelGlow_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio
struct AB_Minigun_Athena_C_Start_Spin_Up_Audio_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio
struct AB_Minigun_Athena_C_Start_Spin_Down_Audio_Params
{
};

// Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
struct AB_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
