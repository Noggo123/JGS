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

// BlueprintGeneratedClass GA_Athena_DanceGrenade_WithTrajectory.GA_Athena_DanceGrenade_WithTrajectory_C
// 0x0000 (0x0D0C - 0x0D0C)
class UGA_Athena_DanceGrenade_WithTrajectory_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_DanceGrenade_WithTrajectory.GA_Athena_DanceGrenade_WithTrajectory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
