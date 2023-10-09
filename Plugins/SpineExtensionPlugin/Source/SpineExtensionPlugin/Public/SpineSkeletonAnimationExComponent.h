#pragma once
#include "CoreMinimal.h"
#include "SpineSkeletonAnimationComponent.h"
#include "SpineSkeletonAnimationExComponent.generated.h"

class USpineAnimInstance;
class UTrackEntry;
class USpineNotifyAsset;
class USpineAtlasAsset;
class USpineSkeletonDataAsset;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API USpineSkeletonAnimationExComponent : public USpineSkeletonAnimationComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<USpineAnimInstance*> LastAnimInstances;
    
    UPROPERTY(Transient)
    TMap<FString, USpineAnimInstance*> AnimInstanceForAnimations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USpineNotifyAsset* NotifyData;
    
    USpineSkeletonAnimationExComponent();
    UFUNCTION(BlueprintCallable)
    void SetPlaybackTimeIgnoreTimescale(float InPlaybackTime, bool bCallDelegates);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceSpineData(USpineAtlasAsset* NewAtlas, USpineSkeletonDataAsset* NewSkeletonData, USpineNotifyAsset* NewNotifyAsset);
    
private:
    UFUNCTION()
    void OnAnimationStart(UTrackEntry* Entry);
    
};

