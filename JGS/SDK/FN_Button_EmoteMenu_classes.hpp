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

// WidgetBlueprintGeneratedClass Button_EmoteMenu.Button_EmoteMenu_C
// 0x0028 (0x0328 - 0x0300)
class UButton_EmoteMenu_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       Dancer;                                                   // 0x0308(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_EmoteMenu.Button_EmoteMenu_C");
		return ptr;
	}


	void OnClicked();
	void ExecuteUbergraph_Button_EmoteMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
