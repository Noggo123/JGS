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

// Class UACCommon.UACNetComponent
// 0x00B0 (0x01A0 - 0x00F0)
class UUACNetComponent : public UActorComponent
{
public:
	int                                                PlayerID;                                                 // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x00F4(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UACCommon.UACNetComponent");
		return ptr;
	}


	void SendPacketToServer(unsigned char Type, TArray<unsigned char> Packet);
	void SendPacketToClient(unsigned char Type, TArray<unsigned char> Packet);
	void SendClientHello();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
