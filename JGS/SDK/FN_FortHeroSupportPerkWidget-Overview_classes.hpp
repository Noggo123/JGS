#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C
// 0x0011 (0x05C9 - 0x05B8)
class UFortHeroSupportPerkWidget_Overview_C : public UFortHeroSupportPerkWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B8(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            TypeText;                                                 // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C");
		return ptr;
	}


	void OnHeroUpdated();
	void OnSupportTypeUpdated();
	void ExecuteUbergraph_FortHeroSupportPerkWidget_Overview(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
