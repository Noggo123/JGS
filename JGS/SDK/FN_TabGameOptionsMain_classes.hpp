#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C
// 0x0010 (0x0268 - 0x0258)
class UTabGameOptionsMain_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            TooltipDisplayReference;                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C");
		return ptr;
	}


	void Construct();
	void UpdateOptionsTab();
	void UpdatePossibleLanguages();
	void CenterOnTab();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Setting_Value_Changed(float Slider_Value);
	void ExecuteUbergraph_TabGameOptionsMain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
