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

// BlueprintGeneratedClass MissionGen_AthenaEvent2_Explosives.MissionGen_AthenaEvent2_Explosives_C
// 0x0000 (0x0628 - 0x0628)
class UMissionGen_AthenaEvent2_Explosives_C : public UFortMissionGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGen_AthenaEvent2_Explosives.MissionGen_AthenaEvent2_Explosives_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
