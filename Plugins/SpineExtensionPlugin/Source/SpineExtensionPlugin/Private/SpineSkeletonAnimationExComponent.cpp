#include "SpineSkeletonAnimationExComponent.h"

class USpineAtlasAsset;
class USpineSkeletonDataAsset;
class UTrackEntry;
class USpineNotifyAsset;

void USpineSkeletonAnimationExComponent::SetPlaybackTimeIgnoreTimescale(float InPlaybackTime, bool bCallDelegates) {
}

void USpineSkeletonAnimationExComponent::ReplaceSpineData(USpineAtlasAsset* NewAtlas, USpineSkeletonDataAsset* NewSkeletonData, USpineNotifyAsset* NewNotifyAsset) {
}

void USpineSkeletonAnimationExComponent::OnAnimationStart(UTrackEntry* Entry) {
}

USpineSkeletonAnimationExComponent::USpineSkeletonAnimationExComponent() {
    this->NotifyData = NULL;
}

