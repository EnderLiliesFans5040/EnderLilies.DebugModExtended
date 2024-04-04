#pragma once
#include "CoreMinimal.h"
#include "AbilityVisualCue.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct ZENITH_API FAbilityVisualCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVisualCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* VisualCueFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeadTime;
    
    FAbilityVisualCue();
};

