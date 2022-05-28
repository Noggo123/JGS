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

// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// 0x0108 (0x0F58 - 0x0E50)
class AParent_Tree_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     Wind_Direction;                                           // 0x0E58(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EmitLeaves_;                                              // 0x0E64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode_;                                               // 0x0E65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugStorms_;                                             // 0x0E66(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<En_LeafTypes_01>                       LeafTypes;                                                // 0x0E67(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LeafEmitterNamesSpherical;                                // 0x0E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LeafEmitterNamesCylindrical;                              // 0x0E78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            LeafEmitterComponents;                                    // 0x0E88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     EmitterSize;                                              // 0x0E98(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Lifetime_Idle_;                                           // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime_Storm_;                                          // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate_Idle_;                                          // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate_Storm_;                                         // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindIntensity_Idle_;                                      // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindIntensity_Storm_;                                     // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MediumLeafMaterialMasked;                                 // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          SmallLeafMaterialMasked;                                  // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LargeLeafMaterialMasked;                                  // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PineLeafMaterialMasked;                                   // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LeafEmitterSetup;                                         // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmitterMaxDrawDistance;                                   // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxEmitterCount;                                          // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentEmitterCount;                                      // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StormActive_;                                             // 0x0EF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EF5(0x0003) MISSED OFFSET
	class UMaterialInterface*                          MediumLeafMaterialTranslucent;                            // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          SmallLeafMaterialTranslucent;                             // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DistanceFieldsEnabled_;                                   // 0x0F08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0F09(0x0007) MISSED OFFSET
	class UMaterialInterface*                          LargeLeafMaterialTranslucent;                             // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PineLeafMaterialTranslucent;                              // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Leaf_Emitter_Setup_Template;                              // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Leaf_Material_Setup;                                      // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortWindImpulseHandle                      WindHandle;                                               // 0x0F30(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugWind;                                                // 0x0F34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0F35(0x0003) MISSED OFFSET
	float                                              Debug_Wind_Intensity;                                     // 0x0F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0F3C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0F4C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_Tree.Parent_Tree_C");
		return ptr;
	}


	void RemoveTestWind(float BlendTime);
	void FX_UpdateEmitterParameters();
	void FX_UpdateEmitterStates();
	void UserConstructionScript();
	void ReceiveDestroyed();
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ExecuteUbergraph_Parent_Tree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
