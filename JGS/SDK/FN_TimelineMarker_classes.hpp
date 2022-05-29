#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C
// 0x0040 (0x0840 - 0x0800)
class UTimelineMarker_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      MarkerIcon;                                               // 0x0808(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              RelativeTime;                                             // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortReplayEventType                               EventType;                                                // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0815(0x0003) MISSED OFFSET
	struct FSlateColor                                 HoveredColor;                                             // 0x0818(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C");
		return ptr;
	}


	void Jump_To_Marker();
	void Construct();
	void OnHovered();
	void OnUnhovered();
	void OnClicked();
	void ExecuteUbergraph_TimelineMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
