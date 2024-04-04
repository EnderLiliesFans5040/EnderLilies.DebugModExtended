#include "ZenithCharacterMovementComponent.h"

UZenithCharacterMovementComponent::UZenithCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTickBeforeOwner = false;
    this->bUseAccelerationForPaths = true;
    this->bClampInWater = false;
    this->ZenithCharacter = NULL;
    this->StateComponent = NULL;
    this->LocomotionComponent = NULL;
    this->MaxRunSpeed = 100.00f;
    this->MaxDashSpeed = 100.00f;
    this->DashAcceleration = 2048.00f;
    this->ImmersionDepthForOutOfWater = 0.25f;
    this->MaxZVelocityForStickingToWaterSurface = 500.00f;
    this->MinImmersionDepthForStickingToWaterSurface = 0.25f;
    this->MaxImmersionDepthForStickingToWaterSurface = 0.75f;
    this->HeightOffsetForStickingToWaterSurface = 0.00f;
    this->bSlideAlongUnderwaterSurfaces = false;
}

void UZenithCharacterMovementComponent::TraceJump(const FVector Input, const FLinearColor Color, const float LifeTime) const {
}

void UZenithCharacterMovementComponent::SetWalkMode(EWalkMode NewWalkMode) {
}

void UZenithCharacterMovementComponent::SetCustomPhysicsVolume(ACustomPhysicsVolume* NewCustomPhysicsVolume) {
}

void UZenithCharacterMovementComponent::SetClampedInCamera(bool bClamped) {
}

void UZenithCharacterMovementComponent::SetClampedInArea(bool bClamped) {
}

void UZenithCharacterMovementComponent::SetClampArea(const FVector& NewClampAreaMin, FVector NewClampAreaMax) {
}

void UZenithCharacterMovementComponent::OnStateRemoved() {
}

void UZenithCharacterMovementComponent::OnStateAdded() {
}

void UZenithCharacterMovementComponent::OnGameMapSwitch() {
}

void UZenithCharacterMovementComponent::OnEventStop() {
}

void UZenithCharacterMovementComponent::OnEventStart() {
}

bool UZenithCharacterMovementComponent::IsClampedInCamera() const {
    return false;
}

bool UZenithCharacterMovementComponent::IsClampedInArea() const {
    return false;
}

float UZenithCharacterMovementComponent::GetWaterImmersionDepth(bool bForceRecompute) const {
    return 0.0f;
}

EWalkMode UZenithCharacterMovementComponent::GetWalkMode() const {
    return EWalkMode::None;
}

float UZenithCharacterMovementComponent::GetTimeSinceLastWallGrab() const {
    return 0.0f;
}

float UZenithCharacterMovementComponent::GetTimeSinceLastGround() const {
    return 0.0f;
}

FVector UZenithCharacterMovementComponent::GetLastNonFallingLocation() const {
    return FVector{};
}

bool UZenithCharacterMovementComponent::GetJumpTimeForZTarget(float ZTarget, float& out_ResultA, float& out_ResultB) const {
    return false;
}

ACustomPhysicsVolume* UZenithCharacterMovementComponent::GetCustomPhysicsVolume() const {
    return NULL;
}

FVector UZenithCharacterMovementComponent::ComputeLaunchVelocityToDestination(const FVector& DestinationLocation, float Duration) const {
    return FVector{};
}

void UZenithCharacterMovementComponent::ClearCustomPhysicsVolume() {
}

bool UZenithCharacterMovementComponent::CanReachTargetByJump(FVector TargetLocation, bool bDrawDebug) const {
    return false;
}


