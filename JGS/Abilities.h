#pragma once

namespace Abilities
{
	void GrantGameplayAbility(AFortPlayerPawn* InPawn, UClass* InGameplayAbility)
	{
		auto AbilitySystemComponent = InPawn->AbilitySystemComponent;

		auto DefaultGameplayEffect = UObject::FindObject<UGameplayEffect>("GE_Athena_PurpleStuff_C GE_Athena_PurpleStuff.Default__GE_Athena_PurpleStuff_C");
		if (DefaultGameplayEffect) {
			DefaultGameplayEffect->GrantedAbilities.operator[](0).Ability = InGameplayAbility;
			DefaultGameplayEffect->GrantedAbilities.operator[](0).RemovalPolicy = EGameplayEffectGrantedAbilityRemovePolicy::DoNothing;
			DefaultGameplayEffect->GrantedAbilities.operator[](0).Level = 1.0;
			DefaultGameplayEffect->DurationPolicy = EGameplayEffectDurationType::Infinite;

			auto EffectClass = UObject::FindClass("BlueprintGeneratedClass GE_Athena_PurpleStuff.GE_Athena_PurpleStuff_C");
			if (EffectClass) {
				AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(EffectClass, 1.0, FGameplayEffectContextHandle());
			}
		}
	}
}