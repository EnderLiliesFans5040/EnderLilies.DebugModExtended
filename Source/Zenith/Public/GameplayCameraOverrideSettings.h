#pragma once
#include "CoreMinimal.h"
#include "GameplayCameraOverrideSettings.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FGameplayCameraOverrideSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZoomValue;
    
    FGameplayCameraOverrideSettings();
};

