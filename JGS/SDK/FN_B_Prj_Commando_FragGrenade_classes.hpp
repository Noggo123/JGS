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

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// 0x0240 (0x0A20 - 0x07E0)
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           OverlapCapsule;                                           // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Fuse_Particle;                                            // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             GrenadeFuse_AudioComponent;                               // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Distance;                                          // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             P_Explosion;                                              // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0820(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x082C(0x0004) MISSED OFFSET
	class USoundBase*                                  Cue_DistantSound;                                         // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0840(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfBouncesTillExplode;                               // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNumberOfBounces;                                   // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	class USoundBase*                                  Cue_GrenadeFuseSound;                                     // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BouncePawnAgainstPawnGravityScale;                        // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	struct FHitResult                                  StoredHit;                                                // 0x0860(0x0080) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxClusterGrenades;                                       // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	struct FGameplayTag                                EC_ClusterExplosion;                                      // 0x08F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasCluster;                                              // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	class UClass*                                      Prj_Cluster;                                              // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            ClusterContainerSpec;                                     // 0x0910(0x0080) (Edit, BlueprintVisible)
	bool                                               bHasKeepOut;                                              // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	struct FFortGameplayEffectContainerSpec            KeepOutContainerSpec;                                     // 0x0998(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_KeepOut;                                              // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C");
		return ptr;
	}


	void SpawnKeepOut();
	void SpawnClusters();
	float CalcGrenadeSpeed(float Angle);
	void OnRep_StoredHit();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult* Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnBounce(struct FHitResult* Hit);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void Bind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Unbind_Destroy_Grenade();
	void TriggerDoExplsoion();
	void ReceiveDestroyed();
	void CheckKeepOutAndCluster();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
