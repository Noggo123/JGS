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

// BlueprintGeneratedClass DefaultSkillNodeStyle.DefaultSkillNodeStyle_C
// 0x0000 (0x0470 - 0x0470)
class UDefaultSkillNodeStyle_C : public UCommonButtonStyle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultSkillNodeStyle.DefaultSkillNodeStyle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
