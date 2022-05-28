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

// BlueprintGeneratedClass B_Pickups.B_Pickups_C
// 0x0210 (0x05C8 - 0x03B8)
class AB_Pickups_C : public AFortPickupEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        Light;                                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Background;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pivot_Offset;                                             // 0x03E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation_Bias;                                            // 0x03EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup;                                     // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkeletalMesh;                                           // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_a_Backpack;                                            // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ListOfMaterialsExemptFromReparenting;                     // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimitiveComponent*                         SkeletalOrStaticMeshAssetPrimitive;                       // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentElementIndex;                                      // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                 // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          CurrentMaterial;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CurrentParentMaterial;                                    // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MaterialParentIsValid;                                    // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ListOfParentMaterialsExemptFromReparenting;               // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             BackpackParticleSystem;                                   // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Accumulation;                                        // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed_After_Being_picked_up;                              // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Tossed;                                                   // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Activate_Rarity_Particle_Systems;                         // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x047A(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup_Hologram;                            // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Hologram_MIDs;                                            // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                            NormalMaps;                                               // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                Rarity_Color;                                             // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Rarity_Level;                                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Current_MID;                                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sweep_Brightness;                                         // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Sweep_Speed;                                              // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Component_Radius__Scaled_;                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Component_Radius_Multiplier;                              // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    Empty_Normal;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup_Hologram;                              // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         SkeletalOrStaticMeshHologramAssetPrimitive;               // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Ground_;                              // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        Outline_Rarity_Colors;                                    // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Component_Radius;                                         // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Delay_Before_Glow;                              // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_In_Time;                                   // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Hold_Time;                                      // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_Out_Time;                                  // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Sweep_Speed;                                    // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBluglo;                                                 // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class UParticleSystem*                             BlugloParticleSystem;                                     // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Picked_Up_Trail_PS;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Picked_Up_;                           // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Lifetime__Picked_Up_;                                     // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          Hologram_Material;                                        // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLootGiftForOthers;                                      // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	class UForceFeedbackEffect*                        PickupForceFeedback;                                      // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Violentium_Particle;                                      // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ViolentiumParticleSystem;                                 // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Violentium;                                            // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	TArray<int>                                        MIDsNeedingRelease;                                       // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  MaterialToRestoreAfterRelease;                            // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups.B_Pickups_C");
		return ptr;
	}


	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void SetupLight();
	void DestroyBackgroundVisualComponents();
	void ReleaseStretchMIDs();
	void ScaleHologramTimingsForPvP();
	void CreateHologramMIDs();
	void SetHologramPickedUpParams(bool Tier_0);
	void SpawnPickedUpTrailPS();
	void SetRarityColor();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnTossed();
	void OnAboutToEnterBackpack(class AFortPawn** PickupTarget);
	void ReceiveDestroyed();
	void InitializeMaterial();
	void OnPickedUp();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
