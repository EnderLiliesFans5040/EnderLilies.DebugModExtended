#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KnockbackData.h"
#include "KnockbackDeathSettings.generated.h"

class UFMODEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FKnockbackDeathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackData KnockbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ParticleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent;
    
    ZENITH_API FKnockbackDeathSettings();
};

