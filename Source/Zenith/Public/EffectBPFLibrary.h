#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EffectBPFLibrary.generated.h"

class UParticleSystem;
class UObject;

UCLASS(BlueprintType)
class UEffectBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEffectBPFLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopAllDeactivatingParticleSystems();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static UParticleSystem* GetStepEffectForSurfaceType(const UObject* WorldContextObj, TEnumAsByte<EPhysicalSurface> SurfaceType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static UParticleSystem* GetLandingEffectForSurfaceType(const UObject* WorldContextObj, TEnumAsByte<EPhysicalSurface> SurfaceType);
    
};

