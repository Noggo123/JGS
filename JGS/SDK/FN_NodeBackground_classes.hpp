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

// WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C
// 0x0078 (0x0878 - 0x0800)
class UNodeBackground_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<ESkillTreeGroups>                      Group;                                                    // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	struct FSkillTreeGroupColors                       GroupColors;                                              // 0x080C(0x0054) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Horizontal;                                               // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	class UClass*                                      VerticalStyle;                                            // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HorizontalStyle;                                          // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C");
		return ptr;
	}


	void SetBackgroundColor();
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void ExecuteUbergraph_NodeBackground(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
