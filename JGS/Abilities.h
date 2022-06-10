#pragma once

namespace Abilities
{
    static void GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
    {
        auto AbilitySystemComponent = TargetPawn->AbilitySystemComponent;

        static UGameplayEffect* DefaultGameplayEffect = UObject::FindObject<UGameplayEffect>("GE_Constructor_ContainmentUnit_Applied_C GE_Constructor_ContainmentUnit_Applied.Default__GE_Constructor_ContainmentUnit_Applied_C");

        if (!DefaultGameplayEffect)
            return;

        TArray<FGameplayAbilitySpecDef> GrantedAbilities = DefaultGameplayEffect->GrantedAbilities;

        // overwrite current gameplay ability with the one we want to activate
        GrantedAbilities[0].Ability = GameplayAbilityClass;

        // give this gameplay effect an infinite duration
        DefaultGameplayEffect->DurationPolicy = EGameplayEffectDurationType::Infinite;

        static auto GameplayEffectClass = UObject::FindObject<UClass>("BlueprintGeneratedClass GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");

        if (!GameplayEffectClass)
            return;

        auto handle = FGameplayEffectContextHandle();

        //LOG("AbilitySystemComp: " << AbilitySystemComponent->GetName() << " Ability: " << GameplayAbilityClass->GetName());

        AbilitySystemComponent->BP_ApplyGameplayEffectToTarget(GameplayEffectClass, AbilitySystemComponent, 1, handle);
    }
}