#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KnockbackData.h"
#include "DissolveDeathSettings.generated.h"

class UFMODEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FDissolveDeathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackData KnockbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ParticleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent;
    
    ZENITH_API FDissolveDeathSettings();
};

