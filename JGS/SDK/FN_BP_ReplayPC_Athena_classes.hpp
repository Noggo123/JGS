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

// BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C
// 0x00A8 (0x2BD8 - 0x2B30)
class ABP_ReplayPC_Athena_C : public AFortReplaySpectatorAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B30(0x0008) (Transient, DuplicateTransient)
	TMap<float, class USoundMix*>                      PlaybackRateMap;                                          // 0x2B38(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentPlayRate;                                          // 0x2B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFast;                                                  // 0x2B8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2B8D(0x0003) MISSED OFFSET
	class UAudioComponent*                             SpeedupLoop;                                              // 0x2B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SlowdownLoop;                                             // 0x2B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsHudVisible;                                            // 0x2BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2BA1(0x0007) MISSED OFFSET
	class UAudioComponent*                             ZoomOutLoop;                                              // 0x2BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZoomInLoop;                                               // 0x2BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsSkydivingAudioEnabled;                                 // 0x2BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetParachuting;                                     // 0x2BB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetSkydiving;                                       // 0x2BBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x2BBB(0x0005) MISSED OFFSET
	class UAudioComponent*                             SkydivingAudioLoop;                                       // 0x2BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsPaused;                                                // 0x2BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2BC9(0x0007) MISSED OFFSET
	class USoundBase*                                  CurrentSkydivingSound;                                    // 0x2BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C");
		return ptr;
	}


	void IsGameplayCamera(bool* IsGameplayCamera);
	void SetSkydivingAudioEnabled(bool Enabled);
	class USoundBase* GetSkydivingSound();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnNotifyNewPlaybackMultiplier(float* NewMultiplier);
	void _Speedup_Loops(float Playback_Multiplier);
	void OnReplayHudVisibilityChanged(EHudVisibilityState IsVisible);
	void OnZoomOutEnd();
	void OnZoomOutBegin();
	void OnZoomInEnd();
	void OnZoomInBegin();
	void On_Pause_State_Changed(bool bPaused);
	void Handle_Parachute_Audio_State();
	void Looping_Audio_Update();
	void ExecuteUbergraph_BP_ReplayPC_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
