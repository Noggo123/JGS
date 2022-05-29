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

// BlueprintGeneratedClass GCL_Carmine_Aura.GCL_Carmine_Aura_C
// 0x0014 (0x0454 - 0x0440)
class AGCL_Carmine_Aura_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     LandLoc;                                                  // 0x0448(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Carmine_Aura.GCL_Carmine_Aura_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void JimLanded(const struct FHitResult& Hit);
	void ExecuteUbergraph_GCL_Carmine_Aura(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
