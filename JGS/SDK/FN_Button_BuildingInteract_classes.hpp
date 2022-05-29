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

// WidgetBlueprintGeneratedClass Button_BuildingInteract.Button_BuildingInteract_C
// 0x0008 (0x0308 - 0x0300)
class UButton_BuildingInteract_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_BuildingInteract.Button_BuildingInteract_C");
		return ptr;
	}


	void OnClicked();
	void ExecuteUbergraph_Button_BuildingInteract(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
