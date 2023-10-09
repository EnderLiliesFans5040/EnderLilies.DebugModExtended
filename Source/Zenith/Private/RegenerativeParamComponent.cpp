#include "RegenerativeParamComponent.h"

void URegenerativeParamComponent::Subtract(int32 ValueToSub) {
}

void URegenerativeParamComponent::SetMaxValue(float NewMaxValue) {
}

void URegenerativeParamComponent::OnBreak_Implementation() {
}

bool URegenerativeParamComponent::IsInvincible() const {
    return false;
}

bool URegenerativeParamComponent::IsBroken() const {
    return false;
}

int32 URegenerativeParamComponent::GetMaxValue() const {
    return 0;
}

int32 URegenerativeParamComponent::GetCurrValue() const {
    return 0;
}

float URegenerativeParamComponent::GetCurrRatio() const {
    return 0.0f;
}

void URegenerativeParamComponent::FullyRestore() {
}

void URegenerativeParamComponent::Add(int32 ValueToSub) {
}

URegenerativeParamComponent::URegenerativeParamComponent() {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->BreakRecoveryBlockingStates.AddDefaulted(3);
    this->MaxValue = 100;
    this->DelayBeforeRecovery = 0.00f;
    this->RecoveryPerSecond = 0.00f;
    this->BrokenDuration = 0.00f;
    this->bInvincible = false;
    this->AudioEventOnBreak = NULL;
    this->CachedStateComponent = NULL;
    this->CachedDeathComponent = NULL;
}

