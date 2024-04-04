#pragma once
#include "CoreMinimal.h"
#include "SoundTimelineEntry.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct ZENITH_API FSoundTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs2DSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float From;
    
    FSoundTimelineEntry();
};

