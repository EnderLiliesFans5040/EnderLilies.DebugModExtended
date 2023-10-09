#include "AE_DamageComponent.h"

UAE_DamageComponent::UAE_DamageComponent() {
    this->DamageEffectType = EDamageEffectType::AttackParameter;
    this->AbsoluteDamage = 0;
    this->TargetPercentageDamage = 0.00f;
}

