#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StateTimelineEntry.generated.h"

class UState;

USTRUCT(BlueprintType)
struct ZENITH_API FStateTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UState> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float To;
    
    FStateTimelineEntry();
};

