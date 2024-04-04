#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/AnimTypes.h"
#include "Animation/AnimNotifyQueue.h"
#include "SpineAnimInstance.generated.h"

class USpineAnimSequence;
class USpineSkeletonAnimationComponent;

UCLASS(Blueprintable)
class SPINEEXTENSIONPLUGIN_API USpineAnimInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SpineAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpineAnimSequence* SourceSequence;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimNotifyQueue NotifyQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotifyEvent> ActiveAnimNotifyState;
    
    USpineAnimInstance();

};

