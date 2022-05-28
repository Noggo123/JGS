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

// BlueprintGeneratedClass GE_SupplyDrop_Cooldown.GE_SupplyDrop_Cooldown_C
// 0x0000 (0x0670 - 0x0670)
class UGE_SupplyDrop_Cooldown_C : public UGET_Cooldown_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_SupplyDrop_Cooldown.GE_SupplyDrop_Cooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
