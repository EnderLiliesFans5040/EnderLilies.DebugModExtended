#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/AnimNotifyQueue.h"
#include "Animation/AnimTypes.h"
#include "SpineAnimInstance.generated.h"

class USpineAnimSequence;
class USpineSkeletonAnimationComponent;

UCLASS()
class SPINEEXTENSIONPLUGIN_API USpineAnimInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    USpineSkeletonAnimationComponent* SpineAnimationComponent;
    
    UPROPERTY(Transient)
    USpineAnimSequence* SourceSequence;
    
    UPROPERTY(Transient)
    FAnimNotifyQueue NotifyQueue;
    
    UPROPERTY(Transient)
    TArray<FAnimNotifyEvent> ActiveAnimNotifyState;
    
    USpineAnimInstance();
};

