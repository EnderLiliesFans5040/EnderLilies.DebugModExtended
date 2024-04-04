#include "ConstantForceComponent.h"

UConstantForceComponent::UConstantForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector UConstantForceComponent::GetConstantForce() const {
    return FVector{};
}


