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

// Function GAT_GenericActiveAbility.GAT_GenericActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_GenericActiveAbility_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericActiveAbility.GAT_GenericActiveAbility_C.K2_ActivateAbility");

	UGAT_GenericActiveAbility_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_GenericActiveAbility.GAT_GenericActiveAbility_C.ExecuteUbergraph_GAT_GenericActiveAbility
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericActiveAbility_C::ExecuteUbergraph_GAT_GenericActiveAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericActiveAbility.GAT_GenericActiveAbility_C.ExecuteUbergraph_GAT_GenericActiveAbility");

	UGAT_GenericActiveAbility_C_ExecuteUbergraph_GAT_GenericActiveAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
