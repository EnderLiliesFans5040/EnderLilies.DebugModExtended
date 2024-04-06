#include "SpineSkeletonComponent.h"

USpineSkeletonComponent::USpineSkeletonComponent(/*const FObjectInitializer& ObjectInitializer*/) : Super(/*ObjectInitializer*/) {
    this->bAutoActivate = true;
    this->Atlas = NULL;
    this->SkeletonData = NULL;
    this->lastAtlas = NULL;
    this->lastData = NULL;
}

void USpineSkeletonComponent::UpdateWorldTransform() {
}

void USpineSkeletonComponent::SetToSetupPose() {
}

void USpineSkeletonComponent::SetSlotsToSetupPose() {
}

bool USpineSkeletonComponent::SetSkins(const TArray<FString>& SkinNames) {
    return false;
}

bool USpineSkeletonComponent::SetSkinCollection(FName SkinCollectionName) {
    return false;
}

bool USpineSkeletonComponent::SetSkin(const FString& SkinName) {
    return false;
}

void USpineSkeletonComponent::SetScaleY(float ScaleY) {
}

void USpineSkeletonComponent::SetScaleX(float ScaleX) {
}

void USpineSkeletonComponent::SetBoneWorldPosition(const FString& BoneName, const FVector& Position) {
}

void USpineSkeletonComponent::SetBonesToSetupPose() {
}

bool USpineSkeletonComponent::SetAttachment(const FString& SlotName, const FString& attachmentName) {
    return false;
}

bool USpineSkeletonComponent::HasUpdatedThisFrame() const {
    return false;
}

bool USpineSkeletonComponent::HasSlot(const FString& SlotName) {
    return false;
}

bool USpineSkeletonComponent::HasSkin(const FString& SkinName) {
    return false;
}

bool USpineSkeletonComponent::HasBone(const FString& BoneName) {
    return false;
}

bool USpineSkeletonComponent::HasAnimation(const FString& AnimationName) {
    return false;
}

void USpineSkeletonComponent::GetSlots(TArray<FString>& Slots) {
}

void USpineSkeletonComponent::GetSkins(TArray<FString>& Skins) {
}

float USpineSkeletonComponent::GetScaleY() {
    return 0.0f;
}

float USpineSkeletonComponent::GetScaleX() {
    return 0.0f;
}

FTransform USpineSkeletonComponent::GetBoneWorldTransform(const FString& BoneName) {
    return FTransform{};
}

void USpineSkeletonComponent::GetBones(TArray<FString>& Bones) {
}

void USpineSkeletonComponent::GetAnimations(TArray<FString>& Animations) {
}

float USpineSkeletonComponent::GetAnimationDuration(const FString& AnimationName) {
    return 0.0f;
}


