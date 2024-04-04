#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "SpineAnimDamageSetDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSpineAnimDamageSetDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> DamageStartDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> DamageStopDefinitions;
    
    ZENITH_API FSpineAnimDamageSetDefinition();
};

