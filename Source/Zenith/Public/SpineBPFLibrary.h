#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESpineTrackLayer.h"
#include "SpineBPFLibrary.generated.h"

class USpineBoneFollowerComponent;
class USpineSkeletonAnimationComponent;

UCLASS(Blueprintable)
class USpineBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpineBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingAnyAnimation(USpineSkeletonAnimationComponent* AnimSkelComponent, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingAnimation(USpineSkeletonAnimationComponent* AnimSkelComponent, const FString& AnimName, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTrackIndex(ESpineTrackLayer TrackLayer);
    
    UFUNCTION(BlueprintCallable)
    static USpineBoneFollowerComponent* AddBoneFollowerComponent(USpineSkeletonAnimationComponent* AnimSkelComponent, const FString& BoneName);
    
};

