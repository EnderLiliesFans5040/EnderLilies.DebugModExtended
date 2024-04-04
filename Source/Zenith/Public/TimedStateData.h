#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TimedStateData.generated.h"

class UState;

USTRUCT(BlueprintType)
struct ZENITH_API FTimedStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingTime;
    
    FTimedStateData();
};

