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

// Function PackResource.PackResource_C.TryUpdateCount
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPackResource_C::TryUpdateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.TryUpdateCount");

	UPackResource_C_TryUpdateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.TryUpdateBackground
// (Private, BlueprintCallable, BlueprintEvent)

void UPackResource_C::TryUpdateBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.TryUpdateBackground");

	UPackResource_C_TryUpdateBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.UpdateType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortResourceType> ResourceType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPackResource_C::UpdateType(TEnumAsByte<EFortResourceType> ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.UpdateType");

	UPackResource_C_UpdateType_Params params;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.UpdateCount
// (Public, BlueprintCallable, BlueprintEvent)

void UPackResource_C::UpdateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.UpdateCount");

	UPackResource_C_UpdateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPackResource_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.Construct");

	UPackResource_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPackResource_C::ExecuteUbergraph_PackResource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.ExecuteUbergraph_PackResource");

	UPackResource_C_ExecuteUbergraph_PackResource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
