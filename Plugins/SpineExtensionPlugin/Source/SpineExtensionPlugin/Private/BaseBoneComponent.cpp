#include "BaseBoneComponent.h"

UBaseBoneComponent::UBaseBoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FTransform UBaseBoneComponent::GetBoneTransformByName_Implementation(const FString& BoneName, bool bFollowRotation) {
    return FTransform{};
}

FTransform UBaseBoneComponent::GetBoneTransform_Implementation(ESpineBone Bone, bool bFollowRotation) {
    return FTransform{};
}

USceneComponent* UBaseBoneComponent::GetAttachComponentByName_Implementation(const FString& BoneName, bool bFollowRotation) {
    return NULL;
}

USceneComponent* UBaseBoneComponent::GetAttachComponent_Implementation(ESpineBone Bone, bool bFollowRotation) {
    return NULL;
}


