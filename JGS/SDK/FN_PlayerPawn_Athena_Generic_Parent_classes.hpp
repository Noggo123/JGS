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

// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// 0x00C0 (0x1E20 - 0x1D60)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D60(0x0008) (Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>                  Default_Weapon_Materials;                                 // 0x1D68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBackpackMaterials;                                    // 0x1D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHatMaterials;                                         // 0x1D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHeadMaterials;                                        // 0x1D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBodyMaterials;                                        // 0x1DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnCharmMaterials;                                       // 0x1DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnFaceMaterials;                                        // 0x1DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnLegsMaterials;                                        // 0x1DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnTorsoMaterials;                                       // 0x1DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                       PlayerPostProcessFX;                                      // 0x1DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshes;                                           // 0x1E00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnMaterials_ALL;                                        // 0x1E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C");
		return ptr;
	}


	void Teleport(const struct FGameplayCueParameters& GameplayCueParameters, bool TeleportOut_, float Default_PlayLength);
	void UserConstructionScript();
	void GameplayCue_Teleport_Out(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Teleport_In(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
