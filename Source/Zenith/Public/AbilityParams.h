#pragma once
#include "CoreMinimal.h"
#include "AbilityParams.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FAbilityParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxExecutionTimeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    FAbilityParams();
};

