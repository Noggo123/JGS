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

// BlueprintGeneratedClass PresentXmas5.PresentXmas5_C
// 0x0008 (0x0F68 - 0x0F60)
class APresentXmas5_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F60(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PresentXmas5.PresentXmas5_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLootRepeat();
	void OnBeginSearch();
	void ExecuteUbergraph_PresentXmas5(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
