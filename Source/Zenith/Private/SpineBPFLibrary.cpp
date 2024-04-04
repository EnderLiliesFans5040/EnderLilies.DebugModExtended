#include "SpineBPFLibrary.h"

USpineBPFLibrary::USpineBPFLibrary() {
}

bool USpineBPFLibrary::IsPlayingAnyAnimation(USpineSkeletonAnimationComponent* AnimSkelComponent, int32 TrackIndex) {
    return false;
}

bool USpineBPFLibrary::IsPlayingAnimation(USpineSkeletonAnimationComponent* AnimSkelComponent, const FString& AnimName, int32 TrackIndex) {
    return false;
}

int32 USpineBPFLibrary::GetTrackIndex(ESpineTrackLayer TrackLayer) {
    return 0;
}

USpineBoneFollowerComponent* USpineBPFLibrary::AddBoneFollowerComponent(USpineSkeletonAnimationComponent* AnimSkelComponent, const FString& BoneName) {
    return NULL;
}


