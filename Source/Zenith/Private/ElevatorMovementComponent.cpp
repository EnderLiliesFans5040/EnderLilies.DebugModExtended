#include "ElevatorMovementComponent.h"

UElevatorMovementComponent::UElevatorMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Speed = 100.00f;
    this->bSweep = true;
    this->TeleportType = ETeleportType::None;
}

void UElevatorMovementComponent::TeleportToOrigin() {
}

void UElevatorMovementComponent::TeleportToDestination() {
}

void UElevatorMovementComponent::SetSpeedFactor(float NewSpeedFactor) {
}

bool UElevatorMovementComponent::IsMoving() const {
    return false;
}

bool UElevatorMovementComponent::IsDirectionSetToDestination() const {
    return false;
}

void UElevatorMovementComponent::GoToOrigin() {
}

void UElevatorMovementComponent::GoToDestination() {
}

float UElevatorMovementComponent::GetSpeedFactor() const {
    return 0.0f;
}


