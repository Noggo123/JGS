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

// BlueprintGeneratedClass TT_SupplyDrop.TT_SupplyDrop_C
// 0x0000 (0x0118 - 0x0118)
class UTT_SupplyDrop_C : public UFortGameplayAbilityTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_SupplyDrop.TT_SupplyDrop_C");
		return ptr;
	}


	void InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context, struct FGameplayTag* Tag, struct FGameplayTag* Token, struct FText* OutText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
