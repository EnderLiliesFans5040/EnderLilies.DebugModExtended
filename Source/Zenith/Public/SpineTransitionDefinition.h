#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "SpineTransitionDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSpineTransitionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AnimationFromName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AnimationToName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFromAnimPlayedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpineAnimationDefinition TransitionDefinition;
    
    ZENITH_API FSpineTransitionDefinition();
};

