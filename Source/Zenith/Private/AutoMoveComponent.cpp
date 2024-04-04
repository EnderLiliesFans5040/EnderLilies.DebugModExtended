#include "AutoMoveComponent.h"

UAutoMoveComponent::UAutoMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpeed = 0.00f;
    this->bRotationFollowsVelocity = false;
    this->GravityFactor = 0.00f;
}

void UAutoMoveComponent::SetVelocity(FVector NewVelocity) {
}


