#include "SpineRootMotionComponent.h"

USpineRootMotionComponent::USpineRootMotionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootMotionFactor = 1.00f;
    this->CharacterOwner = NULL;
    this->SpineRenderer = NULL;
    this->SpineAnimation = NULL;
}

void USpineRootMotionComponent::OnAfterBoneTransformUpdate(USpineSkeletonComponent* SpineSkeletonComponent) {
}


