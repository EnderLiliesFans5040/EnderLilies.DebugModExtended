#include "KnockbackComponent.h"

UKnockbackComponent::UKnockbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementFactor = 1.00f;
    this->bAirborneKnockbackTriggerLaunch = false;
    this->bAutoManageRecovery = true;
    this->OwnerCharacter = NULL;
    this->AbilityComponent = NULL;
    this->SpineAnimComponent = NULL;
    this->StateComponent = NULL;
    this->DeathComponent = NULL;
}

void UKnockbackComponent::StopKnockback() {
}

void UKnockbackComponent::OnLanded(FHitResult HitResult) {
}

void UKnockbackComponent::OnGameMapSwitch() {
}

int32 UKnockbackComponent::LaunchKnockback(const FKnockbackData& KnockbackData, FVector KnockbackDirection) {
    return 0;
}

bool UKnockbackComponent::IsInKnockbackRecovery() const {
    return false;
}

bool UKnockbackComponent::IsInKnockback() const {
    return false;
}

FKnockbackRuntimeData UKnockbackComponent::GetRunningKnockback() const {
    return FKnockbackRuntimeData{};
}

bool UKnockbackComponent::CanLaunchKnockback() const {
    return false;
}

void UKnockbackComponent::CancelKnockback() {
}


