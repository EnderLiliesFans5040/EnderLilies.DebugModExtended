#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EffectMatrixData.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ZENITH_API UEffectMatrixData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> StepEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> LandingEffects;
    
    UEffectMatrixData();

};

