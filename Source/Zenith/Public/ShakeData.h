#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
#include "ShakeData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FShakeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OscillationDuration;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVOscillator LocOscillation;
    
    FShakeData();
};

