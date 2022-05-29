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

// Class UACBase.UACNetworkComponent
// 0x0150 (0x0240 - 0x00F0)
class UUACNetworkComponent : public UActorComponent
{
public:
	int                                                PlayerID;                                                 // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14C];                                     // 0x00F4(0x014C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UACBase.UACNetworkComponent");
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
