#pragma once
#include "CoreMinimal.h"
#include "FXTimelineEntry.h"
#include "FXTimeline.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FFXTimeline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFXTimelineEntry> FXEntries;
    
public:
    FFXTimeline();
};

