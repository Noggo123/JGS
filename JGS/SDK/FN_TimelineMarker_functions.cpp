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

// Function TimelineMarker.TimelineMarker_C.Jump To Marker
// (Public, BlueprintCallable, BlueprintEvent)

void UTimelineMarker_C::Jump_To_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.Jump To Marker");

	UTimelineMarker_C_Jump_To_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTimelineMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.Construct");

	UTimelineMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.OnHovered");

	UTimelineMarker_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.OnUnhovered");

	UTimelineMarker_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UTimelineMarker_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.OnClicked");

	UTimelineMarker_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTimelineMarker_C::ExecuteUbergraph_TimelineMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker");

	UTimelineMarker_C_ExecuteUbergraph_TimelineMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
