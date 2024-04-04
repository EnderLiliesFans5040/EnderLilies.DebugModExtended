#pragma once
#include "CoreMinimal.h"
#include "MoveTimelineEntry.h"
#include "MoveTimeline.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FMoveTimeline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoveTimelineEntry> MoveEntries;
    
public:
    FMoveTimeline();
};

