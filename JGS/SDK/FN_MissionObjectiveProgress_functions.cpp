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

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgress_C::GetHeightEstimate(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate");

	UMissionObjectiveProgress_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            BarIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgress_C::Update(class AFortObjectiveBase* Objective, int BarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update");

	UMissionObjectiveProgress_C_Update_Params params;
	params.Objective = Objective;
	params.BarIndex = BarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionObjectiveProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.Construct");

	UMissionObjectiveProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.ExecuteUbergraph_MissionObjectiveProgress
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgress_C::ExecuteUbergraph_MissionObjectiveProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.ExecuteUbergraph_MissionObjectiveProgress");

	UMissionObjectiveProgress_C_ExecuteUbergraph_MissionObjectiveProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
