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

// BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C
// 0x0060 (0x03D0 - 0x0370)
class AB_StockBattleBus_C : public ABattleBusCosmeticInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Bus;                                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LaunchTheBalloon_van_generator;                           // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BalloonFlame;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Apparatus;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Balloon;                                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bus_Music_Fader_Volume_A587597F47291E46479564BC14A7B45A;  // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Bus_Music_Fader__Direction_A587597F47291E46479564BC14A7B45A;// 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Bus_Music_Fader;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LoopingSound;                                             // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LoopingMusic;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             BusMusic_Inst;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C");
		return ptr;
	}


	void UserConstructionScript();
	void Bus_Music_Fader__FinishedFunc();
	void Bus_Music_Fader__UpdateFunc();
	void ReceiveBeginPlay();
	void Start_Audio();
	void GrabAudioReferences();
	void ExecuteUbergraph_B_StockBattleBus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
