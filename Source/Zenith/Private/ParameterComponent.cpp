#include "ParameterComponent.h"

float UParameterComponent::GetStunDamageFactor() const {
    return 0.0f;
}

float UParameterComponent::GetStaminaDamageFactor() const {
    return 0.0f;
}

float UParameterComponent::GetPostDamageInvincibilityBonusTime() const {
    return 0.0f;
}

int32 UParameterComponent::GetMPRestoreBonusPercentage() const {
    return 0;
}

float UParameterComponent::GetDamageCutPercentageForAttribute(EDamageAttribute DamageAttribute) const {
    return 0.0f;
}

float UParameterComponent::GetDamageCutPercentage() const {
    return 0.0f;
}

int32 UParameterComponent::GetDamageAfterDamageCut(int32 RawDamage, EDamageAttribute DamageAttribute) const {
    return 0;
}

int32 UParameterComponent::GetAttackFromRate(float Rate, bool bIgnoreOverride) const {
    return 0;
}

int32 UParameterComponent::GetAttack(bool bIgnoreOverride) const {
    return 0;
}

UParameterComponent::UParameterComponent() {
}

