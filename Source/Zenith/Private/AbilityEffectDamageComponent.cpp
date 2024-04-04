#include "AbilityEffectDamageComponent.h"
#include "EAbilityEffectQueue.h"

UAbilityEffectDamageComponent::UAbilityEffectDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityEffectQueue = EAbilityEffectQueue::FIRST;
    this->DamageAttribute = EDamageAttribute::Default;
}


