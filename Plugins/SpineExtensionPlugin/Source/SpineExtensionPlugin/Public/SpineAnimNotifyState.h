#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SpineAnimNotifyState.generated.h"

class UAnimSequenceBase;
class USpineSkeletonAnimationComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class SPINEEXTENSIONPLUGIN_API USpineAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    USpineAnimNotifyState();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotifyTick(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotifyEnd(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotifyBegin(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation, float TotalDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionRatio() const;
    
};

