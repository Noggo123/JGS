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

// WidgetBlueprintGeneratedClass ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C
// 0x0011 (0x0281 - 0x0270)
class UItemDetailsHeaderItemDisplayText_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            ItemDisplayName;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               Show_New_System;                                          // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C");
		return ptr;
	}


	void GetDisplayName(struct FText* DisplayName);
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemDetailsHeaderItemDisplayText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
