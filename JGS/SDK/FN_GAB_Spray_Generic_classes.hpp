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

// BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C
// 0x0070 (0x0B38 - 0x0AC8)
class UGAB_Spray_Generic_C : public UGAB_Emote_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC8(0x0008) (Transient, DuplicateTransient)
	float                                              DecalSize;                                                // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	class UAthenaSprayItemDefinition*                  MySpray;                                                  // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalTraceDistance;                                       // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0AE4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GAB_Spray_Generic.GAB_Spray_Generic_C.DefaultSprayMontage_M
	unsigned char                                      UnknownData03[0x28];                                      // 0x0B10(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GAB_Spray_Generic.GAB_Spray_Generic_C.DefaultSprayMontage_F

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C");
		return ptr;
	}


	void GetMontageToPlay(class UFortMontageItemDefinitionBase** EmoteAsset, TEnumAsByte<EFortCustomBodyType>* BodyType, TEnumAsByte<EFortCustomGender>* Gender);
	void TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal);
	void OnMontageStartedPlaying();
	void ExecuteUbergraph_GAB_Spray_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
