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

// BlueprintGeneratedClass GA_Athena_RCRocket.GA_Athena_RCRocket_C
// 0x0028 (0x0AE8 - 0x0AC0)
class UGA_Athena_RCRocket_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (Transient, DuplicateTransient)
	class AB_PrjPawn_Athena_RCRocket_C*                SpawnedRocket;                                            // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GT_EventWeaponFire;                                       // 0x0AD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GT_EventWeaponFire_RCRocket;                              // 0x0AE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_RCRocket.GA_Athena_RCRocket_C");
		return ptr;
	}


	struct FVector Calculate_Launch_Forward_Adjustment();
	struct FVector Calculate_Launch_Up_Adjustment();
	struct FVector Calculate_Launch_Right_Adjustment();
	void CalculateRocketSpawnLocation(struct FTransform* Transform);
	void GetAthenaPlayerPawn(class AFortPlayerPawnAthena** AsFort_Player_Pawn_Athena);
	void GetAthenaPlayerController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_RCRocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
