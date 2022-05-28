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

// BlueprintGeneratedClass GA_ContainmentUnit_Melee_Base.GA_ContainmentUnit_Melee_Base_C
// 0x0000 (0x0B08 - 0x0B08)
class UGA_ContainmentUnit_Melee_Base_C : public UGAT_ReflectDamage_Melee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_ContainmentUnit_Melee_Base.GA_ContainmentUnit_Melee_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
