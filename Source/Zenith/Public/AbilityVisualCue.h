#pragma once
#include "CoreMinimal.h"
#include "AbilityVisualCue.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct ZENITH_API FAbilityVisualCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseVisualCue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* VisualCueFX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeadTime;
    
    FAbilityVisualCue();
};

