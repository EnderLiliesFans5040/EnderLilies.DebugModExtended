#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "SpineTransitionDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSpineTransitionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationFromName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationToName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFromAnimPlayedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition TransitionDefinition;
    
    ZENITH_API FSpineTransitionDefinition();
};

