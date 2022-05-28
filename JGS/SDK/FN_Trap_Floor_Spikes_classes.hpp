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

// BlueprintGeneratedClass Trap_Floor_Spikes.Trap_Floor_Spikes_C
// 0x00B0 (0x0FD0 - 0x0F20)
class ATrap_Floor_Spikes_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F20(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TraceLocation;                                            // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Spike_Mesh;                                               // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459;        // 0x0F48(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459;  // 0x0F4C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F4D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ResetSpikes;                                              // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD;            // 0x0F58(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD;      // 0x0F5C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F5D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Retract;                                                  // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF;               // 0x0F68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF;         // 0x0F6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fire;                                                     // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0F78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Reload_Sound;                                             // 0x0F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeRestingScale;                                        // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeActiveScale;                                         // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeHoldOnFireLength;                                    // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0FAC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SpikesMID;                                                // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepExponent;                                            // 0x0FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SweepColor;                                               // 0x0FBC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepSpeed;                                               // 0x0FCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Spikes.Trap_Floor_Spikes_C");
		return ptr;
	}


	struct FTransform GetFireLocationAndRotation();
	void MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent);
	void SetSpikePosition(float NewSpikePosition);
	void UserConstructionScript();
	void Fire__FinishedFunc();
	void Fire__UpdateFunc();
	void Retract__FinishedFunc();
	void Retract__UpdateFunc();
	void Retract__Sounds__EventFunc();
	void ResetSpikes__FinishedFunc();
	void ResetSpikes__UpdateFunc();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Floor_Spikes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
