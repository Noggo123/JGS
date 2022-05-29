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

// BlueprintGeneratedClass B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C
// 0x00C8 (0x03E0 - 0x0318)
class AB_SprayDecalTest_Flare_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        _1x1x1BoxCenterAligned;                                   // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Fade_Decal_Out_Timeline_Fade_7EF328CF43B35714D32880AEAEB340F4;// 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fade_Decal_Out_Timeline__Direction_7EF328CF43B35714D32880AEAEB340F4;// 0x0334(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fade_Decal_Out_Timeline;                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Decal_Material;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decal_Scale_Min;                                          // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decal_Scale_Max;                                          // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Decal_Rotation;                                           // 0x0350(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Decal_Location;                                           // 0x035C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Decal_MID;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Decal_Color;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Decal_Transform;                                          // 0x0380(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Lifetime;                                           // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decal_Fadeout_Time;                                       // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decal_RT_Delay;                                           // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Opacity;                                            // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Decal_Scale;                                              // 0x03C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Decal_X_Opacity_Hardness;                                 // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decal_Y_Opacity_Hardness;                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decal_Z_Falloff_Hardness;                                 // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Decal_Texture;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C");
		return ptr;
	}


	void UserConstructionScript();
	void Fade_Decal_Out_Timeline__FinishedFunc();
	void Fade_Decal_Out_Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_SprayDecalTest_Flare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
