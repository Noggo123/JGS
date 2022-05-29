// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_SprayGun_Generic_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.UserConstructionScript");

	AB_SprayGun_Generic_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnLoaded_F452B84F41E132B2E1CB668CFA098154
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SprayGun_Generic_Athena_C::OnLoaded_F452B84F41E132B2E1CB668CFA098154(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnLoaded_F452B84F41E132B2E1CB668CFA098154");

	AB_SprayGun_Generic_Athena_C_OnLoaded_F452B84F41E132B2E1CB668CFA098154_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Persistent_Fire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SprayGun_Generic_Athena_C::Muzzle_Flash_FX(bool* Persistent_Fire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.Muzzle Flash FX");

	AB_SprayGun_Generic_Athena_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent** SpawnedPSC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_SprayGun_Generic_Athena_C::OnPlayImpactFX(struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface, class UParticleSystemComponent** SpawnedPSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnPlayImpactFX");

	AB_SprayGun_Generic_Athena_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.ExecuteUbergraph_B_SprayGun_Generic_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SprayGun_Generic_Athena_C::ExecuteUbergraph_B_SprayGun_Generic_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.ExecuteUbergraph_B_SprayGun_Generic_Athena");

	AB_SprayGun_Generic_Athena_C_ExecuteUbergraph_B_SprayGun_Generic_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
