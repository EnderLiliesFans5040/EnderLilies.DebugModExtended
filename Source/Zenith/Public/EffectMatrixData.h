#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EffectMatrixData.generated.h"

class UParticleSystem;

UCLASS(BlueprintType)
class ZENITH_API UEffectMatrixData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> StepEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> LandingEffects;
    
    UEffectMatrixData();
};

