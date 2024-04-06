#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "SpineAnimationCompleteDelegateDelegate.h"
#include "SpineAnimationDisposeDelegateDelegate.h"
#include "SpineAnimationEndDelegateDelegate.h"
#include "SpineAnimationEventDelegateDelegate.h"
#include "SpineAnimationInterruptDelegateDelegate.h"
#include "SpineAnimationStartDelegateDelegate.h"
#include "SpineWidgetAfterUpdateWorldTransformDelegateDelegate.h"
#include "SpineWidgetBeforeUpdateWorldTransformDelegateDelegate.h"
#include "SpineWidget.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USpineAtlasAsset;
class USpineSkeletonDataAsset;
class UTrackEntry;

UCLASS(Blueprintable)
class SPINEPLUGIN_API USpineWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineAtlasAsset* Atlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineSkeletonDataAsset* SkeletonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NormalBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AdditiveBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MultiplyBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ScreenBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineWidgetBeforeUpdateWorldTransformDelegate BeforeUpdateWorldTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineWidgetAfterUpdateWorldTransformDelegate AfterUpdateWorldTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationStartDelegate AnimationStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationInterruptDelegate AnimationInterrupt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEventDelegate AnimationEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationCompleteDelegate AnimationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEndDelegate AnimationEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDisposeDelegate AnimationDispose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> atlasNormalBlendMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> atlasScreenBlendMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UTrackEntry*> trackEntries;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlaying;
    
public:
    USpineWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateWorldTransform();
    
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime, bool CallDelegates);
    
    UFUNCTION(BlueprintCallable)
    void SetToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotsToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    bool SetSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleY(float ScaleY);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleX(float ScaleX);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* SetEmptyAnimation(int32 TrackIndex, float mixDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetBonesToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlay(bool bInAutoPlays);
    
    UFUNCTION(BlueprintCallable)
    bool SetAttachment(const FString& SlotName, const FString& attachmentName);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* SetAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    bool HasSlot(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool HasSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable)
    bool HasBone(const FString& BoneName);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnimation(const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable)
    float GetTimeScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlots(TArray<FString>& Slots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkins(TArray<FString>& Skins);
    
    UFUNCTION(BlueprintCallable)
    float GetScaleY();
    
    UFUNCTION(BlueprintCallable)
    float GetScaleX();
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* GetCurrent(int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBones(TArray<FString>& Bones);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimations(TArray<FString>& Animations);
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationDuration(const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void ClearTracks();
    
    UFUNCTION(BlueprintCallable)
    void ClearTrack(int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* AddEmptyAnimation(int32 TrackIndex, float mixDuration, float Delay);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* AddAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop, float Delay);
    
};

