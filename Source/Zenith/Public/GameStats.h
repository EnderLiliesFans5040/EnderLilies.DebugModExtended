#pragma once
#include "CoreMinimal.h"
#include "GameStats.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FGameStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float PlayTime;
    
    FGameStats();
};

