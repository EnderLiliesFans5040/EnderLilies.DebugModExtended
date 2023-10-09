#pragma once
#include "CoreMinimal.h"
#include "EImpartRootMotionVelocityType.h"
#include "Engine/EngineTypes.h"
#include "SpineAnimationDelegateDelegate.h"
#include "SpineAnimationDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSpineAnimationDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EImpartRootMotionVelocityType ImpartRootMotionVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> MovementModeToSetOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> MovementModeToSetOnEnd;
    
    UPROPERTY(BlueprintReadWrite)
    FSpineAnimationDelegate OnAnimComplete;
    
    UPROPERTY(BlueprintReadWrite)
    FSpineAnimationDelegate OnAnimEnd;
    
    ZENITH_API FSpineAnimationDefinition();
};

