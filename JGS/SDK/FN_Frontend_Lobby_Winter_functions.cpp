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

// Function Frontend_Lobby_Winter.Frontend_Lobby_Winter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontend_Lobby_Winter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Lobby_Winter.Frontend_Lobby_Winter_C.ReceiveBeginPlay");

	AFrontend_Lobby_Winter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Lobby_Winter.Frontend_Lobby_Winter_C.ExecuteUbergraph_Frontend_Lobby_Winter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Lobby_Winter_C::ExecuteUbergraph_Frontend_Lobby_Winter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Lobby_Winter.Frontend_Lobby_Winter_C.ExecuteUbergraph_Frontend_Lobby_Winter");

	AFrontend_Lobby_Winter_C_ExecuteUbergraph_Frontend_Lobby_Winter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
