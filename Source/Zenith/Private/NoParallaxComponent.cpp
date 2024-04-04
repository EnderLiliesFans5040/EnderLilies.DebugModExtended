#include "NoParallaxComponent.h"

UNoParallaxComponent::UNoParallaxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseParentZOffset = false;
    this->bUseMovementFactorOverride = false;
    this->MovementFactorOverride = 0.00f;
}


