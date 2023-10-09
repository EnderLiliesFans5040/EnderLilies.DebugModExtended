#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SpineAnimNotifyState.generated.h"

class USpineSkeletonAnimationComponent;
class UAnimSequenceBase;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SPINEEXTENSIONPLUGIN_API USpineAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float ExecutionTime;
    
    UPROPERTY()
    float Duration;
    
public:
    USpineAnimNotifyState();
    UFUNCTION(BlueprintImplementableEvent)
    bool Received_SpineNotifyTick(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Received_SpineNotifyEnd(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Received_SpineNotifyBegin(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation, float TotalDuration) const;
    
    UFUNCTION(BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetExecutionRatio() const;
    
};

