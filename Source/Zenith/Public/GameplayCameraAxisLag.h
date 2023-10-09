#pragma once
#include "CoreMinimal.h"
#include "GameplayCameraAxisLag.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCameraAxisLag {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MinLagSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxLagSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AttenuationDistance;
    
    ZENITH_API FGameplayCameraAxisLag();
};

