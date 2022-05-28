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

// BlueprintGeneratedClass GE_ReflectDamage_BASE.GE_ReflectDamage_BASE_C
// 0x0000 (0x0670 - 0x0670)
class UGE_ReflectDamage_BASE_C : public UGET_ReflectDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_ReflectDamage_BASE.GE_ReflectDamage_BASE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
