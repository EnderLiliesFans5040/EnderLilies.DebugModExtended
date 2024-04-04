#include "SpineSkeletonDataAsset.h"

USpineSkeletonDataAsset::USpineSkeletonDataAsset() {
    this->DefaultMix = 0.00f;
    this->DefaultScale = 1.00f;
}

TArray<FString> USpineSkeletonDataAsset::GetAllAnimationNames(USpineAtlasAsset* AtlasAsset) {
    return TArray<FString>();
}


