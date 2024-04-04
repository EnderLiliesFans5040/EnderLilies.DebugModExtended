#include "AbilityEffectTimedComponent.h"

UAbilityEffectTimedComponent::UAbilityEffectTimedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityEffectDuration = 0.00f;
}

float UAbilityEffectTimedComponent::GetAbilityEffectDuration() const {
    return 0.0f;
}


