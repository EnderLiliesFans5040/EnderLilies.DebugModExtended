#include "AE_DamageComponent.h"

UAE_DamageComponent::UAE_DamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageEffectType = EDamageEffectType::AttackParameter;
    this->AbsoluteDamage = 0;
    this->TargetPercentageDamage = 0.00f;
}


