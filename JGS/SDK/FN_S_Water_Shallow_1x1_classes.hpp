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

// BlueprintGeneratedClass S_Water_Shallow_1x1.S_Water_Shallow_1x1_C
// 0x0000 (0x042B - 0x042B)
class AS_Water_Shallow_1x1_C : public A_WaterMeshBlueprintMaster_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass S_Water_Shallow_1x1.S_Water_Shallow_1x1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
