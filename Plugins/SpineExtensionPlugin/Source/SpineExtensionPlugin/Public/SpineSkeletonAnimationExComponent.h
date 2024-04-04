#pragma once
#include "CoreMinimal.h"
#include "SpineSkeletonAnimationComponent.h"
#include "SpineSkeletonAnimationExComponent.generated.h"

class USpineAnimInstance;
class USpineAtlasAsset;
class USpineNotifyAsset;
class USpineSkeletonDataAsset;
class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API USpineSkeletonAnimationExComponent : public USpineSkeletonAnimationComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USpineAnimInstance*> LastAnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USpineAnimInstance*> AnimInstanceForAnimations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineNotifyAsset* NotifyData;
    
    USpineSkeletonAnimationExComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlaybackTimeIgnoreTimescale(float InPlaybackTime, bool bCallDelegates);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceSpineData(USpineAtlasAsset* NewAtlas, USpineSkeletonDataAsset* NewSkeletonData, USpineNotifyAsset* NewNotifyAsset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationStart(UTrackEntry* Entry);
    
};

