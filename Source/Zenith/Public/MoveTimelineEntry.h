#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoveTimelineEntry.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ZENITH_API FMoveTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* MoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float To;
    
    FMoveTimelineEntry();
};

