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

// BlueprintGeneratedClass B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C
// 0x0018 (0x08D8 - 0x08C0)
class AB_Post_SupplyDrop_Impact_C : public AB_Post_Explosion_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_0_BlendWeight_69D06A67407476376496A4814EB654AE;  // 0x08C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_69D06A67407476376496A4814EB654AE;   // 0x08CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SpawnPostFX(float PostFX_BoxScaleDyn, const struct FVector& PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay, bool PostFX_UseForceFeedback);
	void ExecuteUbergraph_B_Post_SupplyDrop_Impact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
