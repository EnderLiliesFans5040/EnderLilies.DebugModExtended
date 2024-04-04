#include "AE_KnockbackComponent.h"
#include "EAbilityEffectQueue.h"

UAE_KnockbackComponent::UAE_KnockbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityEffectQueue = EAbilityEffectQueue::POST_DEFAULT;
    this->IgnoreIfTargetHasAnyState.AddDefaulted(1);
    this->bIgnoreIfTargetGuard = true;
    this->bIgnoreIfTargetJustGuard = true;
    this->bIgnoreIfTargetParry = true;
    this->bBypassStaminaCheck = false;
}

FKnockbackData UAE_KnockbackComponent::GetKnockbackData() const {
    return FKnockbackData{};
}


