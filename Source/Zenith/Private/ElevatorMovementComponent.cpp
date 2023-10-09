#include "ElevatorMovementComponent.h"

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

UElevatorMovementComponent::UElevatorMovementComponent() {
    this->Speed = 100.00f;
    this->bSweep = true;
    this->TeleportType = ETeleportType::None;
}

