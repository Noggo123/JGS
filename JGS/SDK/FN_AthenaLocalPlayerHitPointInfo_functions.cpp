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

// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.SetViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*  ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLocalPlayerHitPointInfo_C::SetViewModel(class UAthenaPlayerViewModel* ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.SetViewModel");

	UAthenaLocalPlayerHitPointInfo_C_SetViewModel_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
