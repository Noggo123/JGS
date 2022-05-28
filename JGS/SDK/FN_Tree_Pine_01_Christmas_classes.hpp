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

// BlueprintGeneratedClass Tree_Pine_01_Christmas.Tree_Pine_01_Christmas_C
// 0x0008 (0x0F60 - 0x0F58)
class ATree_Pine_01_Christmas_C : public AParent_Tree_C
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tree_Pine_01_Christmas.Tree_Pine_01_Christmas_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
