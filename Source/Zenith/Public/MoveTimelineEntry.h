#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoveTimelineEntry.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ZENITH_API FMoveTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float To;
    
    FMoveTimelineEntry();
};

