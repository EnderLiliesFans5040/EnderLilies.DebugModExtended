#include "AE_KnockbackComponent.h"

FKnockbackData UAE_KnockbackComponent::GetKnockbackData() const {
    return FKnockbackData{};
}

UAE_KnockbackComponent::UAE_KnockbackComponent() {
    this->bBypassStaminaCheck = false;
}

