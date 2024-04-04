#include "SpineSkeletonAnimationExComponent.h"

USpineSkeletonAnimationExComponent::USpineSkeletonAnimationExComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NotifyData = NULL;
}

void USpineSkeletonAnimationExComponent::SetPlaybackTimeIgnoreTimescale(float InPlaybackTime, bool bCallDelegates) {
}

void USpineSkeletonAnimationExComponent::ReplaceSpineData(USpineAtlasAsset* NewAtlas, USpineSkeletonDataAsset* NewSkeletonData, USpineNotifyAsset* NewNotifyAsset) {
}

void USpineSkeletonAnimationExComponent::OnAnimationStart(UTrackEntry* Entry) {
}


