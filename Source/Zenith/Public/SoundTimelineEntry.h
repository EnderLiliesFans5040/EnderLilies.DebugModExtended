#pragma once
#include "CoreMinimal.h"
#include "SoundTimelineEntry.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct ZENITH_API FSoundTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFMODEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIs2DSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float From;
    
    FSoundTimelineEntry();
};

