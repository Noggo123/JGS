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

// Function Tree_Pine_01_Christmas.Tree_Pine_01_Christmas_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATree_Pine_01_Christmas_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tree_Pine_01_Christmas.Tree_Pine_01_Christmas_C.UserConstructionScript");

	ATree_Pine_01_Christmas_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
