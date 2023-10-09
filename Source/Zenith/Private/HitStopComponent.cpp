#include "HitStopComponent.h"

void UHitStopComponent::LaunchHitStop(float HitStopDuration) {
}

bool UHitStopComponent::IsInHitStop() const {
    return false;
}

float UHitStopComponent::GetHitStopFactor() const {
    return 0.0f;
}

UHitStopComponent::UHitStopComponent() {
    this->HitStopFactor = 1.00f;
    this->SpineAnimComponent = NULL;
    this->StateComponent = NULL;
    this->MovementComponent = NULL;
}

