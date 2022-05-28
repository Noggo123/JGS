// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Minigun_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript");

	AB_Minigun_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__FinishedFunc
// (BlueprintEvent)

void AB_Minigun_Athena_C::BarrelGlow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__FinishedFunc");

	AB_Minigun_Athena_C_BarrelGlow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__UpdateFunc
// (BlueprintEvent)

void AB_Minigun_Athena_C::BarrelGlow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__UpdateFunc");

	AB_Minigun_Athena_C_BarrelGlow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinUpAudioVolume__FinishedFunc
// (BlueprintEvent)

void AB_Minigun_Athena_C::SpinUpAudioVolume__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.SpinUpAudioVolume__FinishedFunc");

	AB_Minigun_Athena_C_SpinUpAudioVolume__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinUpAudioVolume__UpdateFunc
// (BlueprintEvent)

void AB_Minigun_Athena_C::SpinUpAudioVolume__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.SpinUpAudioVolume__UpdateFunc");

	AB_Minigun_Athena_C_SpinUpAudioVolume__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Minigun_Athena_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX");

	AB_Minigun_Athena_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp
// (Event, Protected, BlueprintEvent)

void AB_Minigun_Athena_C::OnChargeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp");

	AB_Minigun_Athena_C_OnChargeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown
// (Event, Protected, BlueprintEvent)

void AB_Minigun_Athena_C::OnChargeDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown");

	AB_Minigun_Athena_C_OnChargeDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification* CosmeticMod                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic** DynamicMaterialInstance        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Minigun_Athena_C::OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations");

	AB_Minigun_Athena_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.MakeBarrelGlow
// (BlueprintCallable, BlueprintEvent)

void AB_Minigun_Athena_C::MakeBarrelGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.MakeBarrelGlow");

	AB_Minigun_Athena_C_MakeBarrelGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.StopBarrelGlow
// (BlueprintCallable, BlueprintEvent)

void AB_Minigun_Athena_C::StopBarrelGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.StopBarrelGlow");

	AB_Minigun_Athena_C_StopBarrelGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio
// (BlueprintCallable, BlueprintEvent)

void AB_Minigun_Athena_C::Start_Spin_Up_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio");

	AB_Minigun_Athena_C_Start_Spin_Up_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio
// (BlueprintCallable, BlueprintEvent)

void AB_Minigun_Athena_C::Start_Spin_Down_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio");

	AB_Minigun_Athena_C_Start_Spin_Down_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Minigun_Athena_C::ExecuteUbergraph_B_Minigun_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena");

	AB_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
