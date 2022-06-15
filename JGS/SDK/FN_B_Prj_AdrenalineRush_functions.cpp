// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.DestroyPP
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_AdrenalineRush_C::DestroyPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.DestroyPP");

	AB_Prj_AdrenalineRush_C_DestroyPP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_AdrenalineRush_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.UserConstructionScript");

	AB_Prj_AdrenalineRush_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__FinishedFunc
// (BlueprintEvent)

void AB_Prj_AdrenalineRush_C::PP_Shockwave__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__FinishedFunc");

	AB_Prj_AdrenalineRush_C_PP_Shockwave__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__UpdateFunc
// (BlueprintEvent)

void AB_Prj_AdrenalineRush_C::PP_Shockwave__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__UpdateFunc");

	AB_Prj_AdrenalineRush_C_PP_Shockwave__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PassInfo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerPawn*         Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AOE_Heal                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Upgrade_InstaHeal              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HOT                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          HOT_Duration                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Resurrect                      (Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_AdrenalineRush_C::PassInfo(float Radius, class AFortPlayerPawn* Owner, bool AOE_Heal, bool Upgrade_InstaHeal, bool HOT, float HOT_Duration, bool Resurrect)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PassInfo");

	AB_Prj_AdrenalineRush_C_PassInfo_Params params;
	params.Radius = Radius;
	params.Owner = Owner;
	params.AOE_Heal = AOE_Heal;
	params.Upgrade_InstaHeal = Upgrade_InstaHeal;
	params.HOT = HOT;
	params.HOT_Duration = HOT_Duration;
	params.Resurrect = Resurrect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.ExecuteUbergraph_B_Prj_AdrenalineRush
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_AdrenalineRush_C::ExecuteUbergraph_B_Prj_AdrenalineRush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.ExecuteUbergraph_B_Prj_AdrenalineRush");

	AB_Prj_AdrenalineRush_C_ExecuteUbergraph_B_Prj_AdrenalineRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
