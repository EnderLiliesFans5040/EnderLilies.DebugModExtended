#include "FollowCameraComponent.h"

UFollowCameraComponent::UFollowCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceFromCamera = 100.00f;
    this->Owner = NULL;
}


