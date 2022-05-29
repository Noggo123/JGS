#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_EmptyBaseGlider.B_EmptyBaseGlider_C
// 0x0001 (0x0369 - 0x0368)
class AB_EmptyBaseGlider_C : public AFortPlayerParachute
{
public:
	bool                                               FX_GliderFullyDeployed;                                   // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_EmptyBaseGlider.B_EmptyBaseGlider_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
