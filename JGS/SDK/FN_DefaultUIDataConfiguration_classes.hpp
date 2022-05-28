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

// BlueprintGeneratedClass DefaultUIDataConfiguration.DefaultUIDataConfiguration_C
// 0x0000 (0x2D98 - 0x2D98)
class UDefaultUIDataConfiguration_C : public UFortUIDataConfiguration
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultUIDataConfiguration.DefaultUIDataConfiguration_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
