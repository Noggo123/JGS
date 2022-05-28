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

// BlueprintGeneratedClass GE_Commando_FragGrenadeKeepOutDamage.GE_Commando_FragGrenadeKeepOutDamage_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Commando_FragGrenadeKeepOutDamage_C : public UGET_DirectEnergyDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Commando_FragGrenadeKeepOutDamage.GE_Commando_FragGrenadeKeepOutDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
