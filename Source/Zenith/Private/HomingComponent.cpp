#include "HomingComponent.h"

class USceneComponent;

void UHomingComponent::SetTarget(USceneComponent* SceneComponent) {
}

USceneComponent* UHomingComponent::GetTarget() const {
    return NULL;
}

bool UHomingComponent::DidReachTarget() const {
    return false;
}

UHomingComponent::UHomingComponent() {
    this->InitialSpeed = 100.00f;
    this->Acceleration = 0.00f;
    this->MaxSpeed = 0.00f;
    this->InitialAngularSpeed = 100.00f;
    this->AngularAcceleration = 0.00f;
    this->MaxAngularSpeed = 0.00f;
    this->AngularSpeedForStraightToTarget = 700.00f;
    this->bRotationFollowVelocity = false;
    this->InitialForwardDeviation = 0.00f;
    this->AutoStopHomingDelay = 0.00f;
    this->RangeForTargetReach = 25.00f;
}

