#include "AE_HealAbsoluteComponent.h"
#include "EAbilityEffectQueue.h"

UAE_HealAbsoluteComponent::UAE_HealAbsoluteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityEffectQueue = EAbilityEffectQueue::FIRST;
    this->Heal = 0;
}


