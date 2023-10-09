#include "FollowTargetComponent.h"

class USceneComponent;

void UFollowTargetComponent::TeleportToTarget() {
}

void UFollowTargetComponent::SetFollowTarget(USceneComponent* NewFollowTarget, bool bSnapToTarget) {
}

FVector UFollowTargetComponent::GetTargetLocation() const {
    return FVector{};
}

FVector UFollowTargetComponent::GetFollowTargetLocation() const {
    return FVector{};
}

FVector UFollowTargetComponent::GetFollowTargetForward() const {
    return FVector{};
}

FVector UFollowTargetComponent::GetFollowTargetDeltaLocation() const {
    return FVector{};
}

USceneComponent* UFollowTargetComponent::GetFollowTarget() const {
    return NULL;
}

void UFollowTargetComponent::ClearFollowTarget() {
}

UFollowTargetComponent::UFollowTargetComponent() {
    this->bUpdateOwnerLocation = true;
    this->BlendSpeed = 0.00f;
    this->OscillationScale = 0.00f;
    this->Owner = NULL;
}

