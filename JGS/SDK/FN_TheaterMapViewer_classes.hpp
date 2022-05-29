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

// BlueprintGeneratedClass TheaterMapViewer.TheaterMapViewer_C
// 0x0008 (0x0688 - 0x0680)
class ATheaterMapViewer_C : public AFortTheaterMapViewer
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TheaterMapViewer.TheaterMapViewer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
