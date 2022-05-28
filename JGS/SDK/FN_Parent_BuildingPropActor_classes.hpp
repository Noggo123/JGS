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

// BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C
// 0x00D0 (0x0F20 - 0x0E50)
class AParent_BuildingPropActor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	bool                                               DebugWind;                                                // 0x0E58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E59(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x0E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDayPhaseFloats                             Light_Intensity_Over_Time_of_Day_;                        // 0x0E98(0x0010) (Edit, BlueprintVisible)
	struct FDayPhaseFloats                             Emissive_Intensity_Over_Time_of_Day;                      // 0x0EA8(0x0010) (Edit, BlueprintVisible)
	int                                                CodeControlled_NumberOfMaterials;                         // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        CodeControlled_EmissiveColor;                             // 0x0EC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      CodeControlled_LightConeOpacity;                          // 0x0ED0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Animate_Emissive_and_Lights_Over_Time;                    // 0x0EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EE1(0x0003) MISSED OFFSET
	float                                              Day_Phase_Transition_Length;                              // 0x0EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_TOD_Lights_and_Material_Emissive_Values;          // 0x0EE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active;// 0x0EE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0EEA(0x0006) MISSED OFFSET
	class UStaticMesh*                                 AlternateShadowStaticMesh;                                // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_;      // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0EF9(0x0003) MISSED OFFSET
	float                                              Volumetric_Light_Scattering_Intensity;                    // 0x0EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Cast_Volumetric_Shadows;                                  // 0x0F00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls;// 0x0F01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0F02(0x0006) MISSED OFFSET
	class UCurveFloat*                                 LightAnimationCurve;                                      // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_Animation_Curve_Animation_Length;          // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls;// 0x0F14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0F15(0x0003) MISSED OFFSET
	float                                              Random_Time_Scale_Percent;                                // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_CurrentTimeLength;                         // 0x0F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C");
		return ptr;
	}


	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables);
	void Call_Animation_Curve_Again();
	void Add_to_TOD_Light_Array(class ULightComponent** NewItem);
	void Set__MID_Values_For_Lights();
	void Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha);
	void UserConstructionScript();
	void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase>* CurrentDayPhase, TEnumAsByte<EFortDayPhase>* PreviousDayPhase, bool* bAtCreation);
	void ReceiveBeginPlay();
	void OnBounceAnimationUpdate(struct FFortBounceData* Data);
	void Loop_Animation_Curve();
	void ExecuteUbergraph_Parent_BuildingPropActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
