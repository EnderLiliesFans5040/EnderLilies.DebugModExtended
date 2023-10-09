#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "SpineAnimDamageSetDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSpineAnimDamageSetDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> DamageStartDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> DamageStopDefinitions;
    
    ZENITH_API FSpineAnimDamageSetDefinition();
};

