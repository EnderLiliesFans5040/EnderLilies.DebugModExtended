#pragma once
#include "CoreMinimal.h"
#include "KnockbackData.h"
#include "UObject/NoExportTypes.h"
#include "KnockbackDeathSettings.generated.h"

class UFMODEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FKnockbackDeathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKnockbackData KnockbackData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* ParticleTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform ParticleOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFMODEvent* SoundEvent;
    
    ZENITH_API FKnockbackDeathSettings();
};

