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

// BlueprintGeneratedClass PBWA_BG_QuarterWallHalf.PBWA_BG_QuarterWallHalf_C
// 0x0000 (0x0EF0 - 0x0EF0)
class APBWA_BG_QuarterWallHalf_C : public ABuildingWall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_BG_QuarterWallHalf.PBWA_BG_QuarterWallHalf_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
