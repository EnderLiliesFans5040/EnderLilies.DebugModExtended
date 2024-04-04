#pragma once
#include "CoreMinimal.h"
#include "GameplayCameraAxisLag.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCameraAxisLag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationDistance;
    
    ZENITH_API FGameplayCameraAxisLag();
};

