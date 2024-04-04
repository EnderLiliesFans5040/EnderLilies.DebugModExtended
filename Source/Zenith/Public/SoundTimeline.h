#pragma once
#include "CoreMinimal.h"
#include "SoundTimelineEntry.h"
#include "SoundTimeline.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FSoundTimeline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundTimelineEntry> SoundEntries;
    
public:
    FSoundTimeline();
};

