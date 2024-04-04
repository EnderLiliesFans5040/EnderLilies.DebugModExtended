#include "LocomotionComponent.h"

ULocomotionComponent::ULocomotionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Owner = NULL;
    this->PawnOwner = NULL;
    this->StateComponent = NULL;
    this->MovementComponent = NULL;
    this->bUseRootMotionLocomotion = false;
    this->MinXInputForMovement = 0.25f;
    this->MinInputForRun = 0.75f;
    this->ForcedWalkMode = EWalkMode::None;
    this->bSetRotationFromFacing = true;
    this->bUseCheapMove = false;
}

bool ULocomotionComponent::WasFacingRight() const {
    return false;
}

bool ULocomotionComponent::UseRootMotionLocomotion() const {
    return false;
}

bool ULocomotionComponent::UseCheapMove() const {
    return false;
}

void ULocomotionComponent::ToggleFacing() {
}

void ULocomotionComponent::SetForcedWalkMode(EWalkMode NewForcedWalkMode) {
}

void ULocomotionComponent::SetFacingFromInputSnapshot(const FInputSnapshot& InputSnapshot) {
}

void ULocomotionComponent::SetFacingFromDirectionInputType(const EDirectionInputTypes& DirectionInputType) {
}

void ULocomotionComponent::SetFacing(bool bFacingRight) {
}

void ULocomotionComponent::Sample(float DeltaTime, const FInputSnapshot& InputSnapshot, bool bApplyInputVector) {
}

bool ULocomotionComponent::IsFacingRight() const {
    return false;
}

bool ULocomotionComponent::IsDiving() const {
    return false;
}

float ULocomotionComponent::GetXYVelocityRatio() const {
    return 0.0f;
}

FVector ULocomotionComponent::GetInputVector() const {
    return FVector{};
}

bool ULocomotionComponent::CanApplyMove() const {
    return false;
}


