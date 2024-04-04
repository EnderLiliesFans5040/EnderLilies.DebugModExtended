#include "HitStopComponent.h"

UHitStopComponent::UHitStopComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitStopFactor = 1.00f;
    this->SpineAnimComponent = NULL;
    this->StateComponent = NULL;
    this->MovementComponent = NULL;
}

void UHitStopComponent::LaunchHitStop(float HitStopDuration) {
}

bool UHitStopComponent::IsInHitStop() const {
    return false;
}

float UHitStopComponent::GetHitStopFactor() const {
    return 0.0f;
}


