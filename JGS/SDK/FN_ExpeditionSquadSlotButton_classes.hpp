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

// WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C
// 0x0041 (0x0841 - 0x0800)
class UExpeditionSquadSlotButton_C : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (Transient, DuplicateTransient)
	int                                                SquadSlotIndex;                                           // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSquadSlotSelected;                                      // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadSlotUpdated;                                       // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadSlotOpened;                                        // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EFortItemCardSize                                  SlottedItemCardSize;                                      // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C");
		return ptr;
	}


	void Get_Squad_Data(struct FName* OutSquadId, int* OutSquadSlotIndex, TArray<EFortItemType>* ItemTypes);
	void PreConstruct(bool* IsDesignTime);
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void OnSelected();
	void BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void Construct();
	void Destruct();
	void Open_Squad_Slot(int SquadSlotIndex);
	void ExecuteUbergraph_ExpeditionSquadSlotButton(int EntryPoint);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item);
	void OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
