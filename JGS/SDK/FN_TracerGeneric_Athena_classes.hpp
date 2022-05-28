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

// BlueprintGeneratedClass TracerGeneric_Athena.TracerGeneric_Athena_C
// 0x006C (0x045C - 0x03F0)
class ATracerGeneric_Athena_C : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class UBulletWhipTrackerComponent_C*               BulletWhipTrackerComponent;                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreviousPlaneDotProd;                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPlayedPassBySound;                                    // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	struct FVector                                     CachedDirectionVector;                                    // 0x0408(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Start;                                                    // 0x0414(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0420(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PassByRadiusMin;                                          // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PassByRadiusMax;                                          // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class USoundBase*                                  PassByFarSound;                                           // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PassByCloseSound;                                         // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PassByClosenessIntensity;                                 // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PassByPawn;                                               // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedPassDistance;                                       // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TracerGeneric_Athena.TracerGeneric_Athena_C");
		return ptr;
	}


	class AFortPlayerPawn* GetLocalPawnForPassBy();
	void PlayPassBySound();
	void TrackPassBy(bool* Changed, float* Pass_Distance);
	void UserConstructionScript();
	void OnInit(struct FVector* Start, struct FVector* End);
	void OnDead();
	void ExecuteUbergraph_TracerGeneric_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
