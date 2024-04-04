#pragma once
#include "CoreMinimal.h"
#include "FMODAttenuationDetails.generated.h"

USTRUCT(BlueprintType)
struct FFMODAttenuationDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistance;
    
    FMODSTUDIO_API FFMODAttenuationDetails();
};

