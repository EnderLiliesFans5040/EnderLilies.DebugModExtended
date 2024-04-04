#pragma once
#include "CoreMinimal.h"
#include "StateTimelineEntry.h"
#include "StateTimeline.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FStateTimeline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTimelineEntry> StateEntries;
    
public:
    FStateTimeline();
};

