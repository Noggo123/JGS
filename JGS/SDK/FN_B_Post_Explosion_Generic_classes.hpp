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

// BlueprintGeneratedClass B_Post_Explosion_Generic.B_Post_Explosion_Generic_C
// 0x0558 (0x08C0 - 0x0368)
class AB_Post_Explosion_Generic_C : public AActor
{
public:
	class UPostProcessComponent*                       PostFX;                                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            PostFX_SphereComponent;                                   // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PostFX_PreviewScale;                                      // 0x0378(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PostFX_BlendRadius;                                       // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PostFX_ShakeEpicenter;                                    // 0x0388(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PostFX_ShakeOuterradius;                                  // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostFX_ShakeInnerRadius;                                  // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseCameraShake;                                           // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UClass*                                      CameraShakeClass;                                         // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseForceFeedback;                                         // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              DeactivateDelay;                                          // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPostProcessSettings                        PostFX_Settings;                                          // 0x03B0(0x0500) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                        ForceFeedbackNear;                                        // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackFar;                                         // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Post_Explosion_Generic.B_Post_Explosion_Generic_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
