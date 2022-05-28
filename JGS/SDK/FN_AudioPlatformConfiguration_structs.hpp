#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
	Max                            = 0,
	High                           = 1,
	Medium                         = 2,
	Low                            = 3,
	Min                            = 4,
	MatchDevice                    = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioPlatformConfiguration.PlatformCompressionOverrides
// 0x0060
struct FPlatformCompressionOverrides
{
	bool                                               bOverrideCompressionTimes;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DurationThreshold;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumRandomBranches;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResampleForDevice;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TMap<ESoundwaveSampleRateSettings, float>          PlatformSampleRates;                                      // 0x0010(0x0050) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
