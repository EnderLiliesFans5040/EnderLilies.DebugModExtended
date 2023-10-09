#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerDeathSettings.generated.h"

class UParticleSystem;
class UForceFeedbackEffect;
class UFMODEvent;

USTRUCT(BlueprintType)
struct FPlayerDeathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeDilationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeDilationBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeDilationBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeBeforeFinishDeathProcess;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* ParticleTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform ParticleOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFMODEvent* SoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedback;
    
    ZENITH_API FPlayerDeathSettings();
};

