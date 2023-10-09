#include "AutoMoveComponent.h"

void UAutoMoveComponent::SetVelocity(FVector NewVelocity) {
}

UAutoMoveComponent::UAutoMoveComponent() {
    this->MaxSpeed = 0.00f;
    this->bRotationFollowsVelocity = false;
    this->GravityFactor = 0.00f;
}

