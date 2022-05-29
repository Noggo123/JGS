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

// BlueprintGeneratedClass B_Glider_CandyGirl.B_Glider_CandyGirl_C
// 0x0008 (0x0370 - 0x0368)
class AB_Glider_CandyGirl_C : public AFortPlayerParachute
{
public:
	class USkeletalMeshComponent*                      Bits;                                                     // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Glider_CandyGirl.B_Glider_CandyGirl_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
