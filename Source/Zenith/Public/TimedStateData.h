#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TimedStateData.generated.h"

class UState;

USTRUCT(BlueprintType)
struct ZENITH_API FTimedStateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TSubclassOf<UState>> States;
    
    UPROPERTY()
    float RemainingTime;
    
    FTimedStateData();
};

