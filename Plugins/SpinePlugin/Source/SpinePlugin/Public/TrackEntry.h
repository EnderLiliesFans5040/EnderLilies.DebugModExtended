#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineAnimationCompleteDelegateDelegate.h"
#include "SpineAnimationDisposeDelegateDelegate.h"
#include "SpineAnimationEndDelegateDelegate.h"
#include "SpineAnimationEventDelegateDelegate.h"
#include "SpineAnimationInterruptDelegateDelegate.h"
#include "SpineAnimationStartDelegateDelegate.h"
#include "TrackEntry.generated.h"

UCLASS(Blueprintable)
class SPINEPLUGIN_API UTrackEntry : public UObject {
    GENERATED_BODY()
public:
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
    
    UTrackEntry();

    UFUNCTION(BlueprintCallable)
    void SetTrackTime(float trackTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackEnd(float trackEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMixTime(float mixTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMixDuration(float mixDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void SetHold(bool bHold);
    
    UFUNCTION(BlueprintCallable)
    void SetEventThreshold(float eventThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawOrderThreshold(float drawOrderThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetDelay(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentThreshold(float attachmentThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationStart(float NewAnimationStart);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationLast(float animationLast);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationEnd(float NewAnimationEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    float isValidAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsComplete();
    
    UFUNCTION(BlueprintCallable)
    float GetTrackTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTrackIndex();
    
    UFUNCTION(BlueprintCallable)
    float GetTrackEnd();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeScale();
    
    UFUNCTION(BlueprintCallable)
    float GetMixTime();
    
    UFUNCTION(BlueprintCallable)
    float GetMixDuration();
    
    UFUNCTION(BlueprintCallable)
    bool GetLoop();
    
    UFUNCTION(BlueprintCallable)
    float GetEventThreshold();
    
    UFUNCTION(BlueprintCallable)
    float GetDrawOrderThreshold();
    
    UFUNCTION(BlueprintCallable)
    float GetDelay();
    
    UFUNCTION(BlueprintCallable)
    float GetAttachmentThreshold();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationStart();
    
    UFUNCTION(BlueprintCallable)
    FString getAnimationName();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationLast();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationDuration();
    
    UFUNCTION(BlueprintCallable)
    float GetAlpha();
    
};

