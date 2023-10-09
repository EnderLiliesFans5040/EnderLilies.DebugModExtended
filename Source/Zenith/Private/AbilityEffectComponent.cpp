#include "AbilityEffectComponent.h"

class AActor;

void UAbilityEffectComponent::OnFinalizeEffect_Implementation(AActor* From, AActor* To, const FHitInfos& HitInfos) {
}

void UAbilityEffectComponent::OnApplyEffect_Implementation(AActor* From, AActor* To, const FHitInfos& HitInfos) {
}

void UAbilityEffectComponent::OnAbilityLaunched_Implementation() {
}

bool UAbilityEffectComponent::IsEffectActive() const {
    return false;
}

bool UAbilityEffectComponent::IsComplete(float TotalExecutionTime, float& out_OverTime) const {
    return false;
}

UAbilityEffectComponent::UAbilityEffectComponent() {
    this->bActive = true;
    this->AbilityEffectQueue = EAbilityEffectQueue::DEFAULT;
    this->bOnlyApplyIfTargetAlive = true;
    this->bOnlyApplyOnPawn = false;
    this->bIgnoreIfTargetGuard = false;
    this->bIgnoreIfTargetJustGuard = false;
    this->bIgnoreIfTargetParry = false;
    this->TargetType = EAbilityTargetTypes::OPPONENTS;
    this->FactionFilter = EFaction::None;
    this->ApplicationProbability = 1.00f;
}

