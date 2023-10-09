#include "SpineRootMotionComponent.h"

class USpineSkeletonComponent;

void USpineRootMotionComponent::OnAfterBoneTransformUpdate(USpineSkeletonComponent* SpineSkeletonComponent) {
}

USpineRootMotionComponent::USpineRootMotionComponent() {
    this->RootMotionFactor = 1.00f;
    this->CharacterOwner = NULL;
    this->SpineRenderer = NULL;
    this->SpineAnimation = NULL;
}

