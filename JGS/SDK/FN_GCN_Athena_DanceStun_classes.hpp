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

// BlueprintGeneratedClass GCN_Athena_DanceStun.GCN_Athena_DanceStun_C
// 0x004C (0x04DC - 0x0490)
class AGCN_Athena_DanceStun_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AnimPivot;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutroAnim_Scale_1822DA5D44681175D96B369D2350B5A1;         // 0x04A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OutroAnim__Direction_1822DA5D44681175D96B369D2350B5A1;    // 0x04AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OutroAnim;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntroAnim_BallScale_B22BD0D945C252484DAB94BD6D5DC469;     // 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IntroAnim__Direction_B22BD0D945C252484DAB94BD6D5DC469;    // 0x04BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IntroAnim;                                                // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BallOffset;                                               // 0x04D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_DanceStun.GCN_Athena_DanceStun_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void IntroAnim__FinishedFunc();
	void IntroAnim__UpdateFunc();
	void OutroAnim__FinishedFunc();
	void OutroAnim__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void AnimateIn();
	void AnimateOut();
	void ExecuteUbergraph_GCN_Athena_DanceStun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
