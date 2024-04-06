#include "SpineSkeletonAnimationComponent.h"

USpineSkeletonAnimationComponent::USpineSkeletonAnimationComponent(/*const FObjectInitializer& ObjectInitializer*/) : Super(/*ObjectInitializer*/) {
    this->LastAppliedDeltaTime = 0.00f;
    this->bLowFrequencyWhenOffScreen = false;
    this->bAutoPlaying = true;
}

void USpineSkeletonAnimationComponent::SetTimeScale(float TimeScale) {
}

void USpineSkeletonAnimationComponent::SetPlaybackTime(float InPlaybackTime, bool bCallDelegates) {
}

UTrackEntry* USpineSkeletonAnimationComponent::SetEmptyAnimation(int32 TrackIndex, float mixDuration) {
    return NULL;
}

void USpineSkeletonAnimationComponent::SetAutoPlay(bool bInAutoPlays) {
}

UTrackEntry* USpineSkeletonAnimationComponent::SetAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop) {
    return NULL;
}

float USpineSkeletonAnimationComponent::GetTimeScale() {
    return 0.0f;
}

UTrackEntry* USpineSkeletonAnimationComponent::GetCurrent(int32 TrackIndex) {
    return NULL;
}

void USpineSkeletonAnimationComponent::ForceTick(float DeltaTime) {
}

void USpineSkeletonAnimationComponent::ClearTracks() {
}

void USpineSkeletonAnimationComponent::ClearTrack(int32 TrackIndex) {
}

UTrackEntry* USpineSkeletonAnimationComponent::AddEmptyAnimation(int32 TrackIndex, float mixDuration, float Delay) {
    return NULL;
}

UTrackEntry* USpineSkeletonAnimationComponent::AddAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop, float Delay) {
    return NULL;
}


