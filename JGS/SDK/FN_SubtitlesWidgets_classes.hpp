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

// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// 0x0030 (0x0058 - 0x0028)
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UOverlays*                                   SourceSubtitles;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.FortMediaSubtitlesPlayer");
		return ptr;
	}


	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


// Class SubtitlesWidgets.SubtitleDisplay
// 0x0270 (0x0370 - 0x0100)
class USubtitleDisplay : public UWidget
{
public:
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0100(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WrapTextAt;                                               // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20C];                                     // 0x0164(0x020C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.SubtitleDisplay");
		return ptr;
	}


	bool HasSubtitles();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
