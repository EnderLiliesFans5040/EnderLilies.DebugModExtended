#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StateTimelineEntry.generated.h"

class UState;

USTRUCT(BlueprintType)
struct ZENITH_API FStateTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UState> State;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float From;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float To;
    
    FStateTimelineEntry();
};

