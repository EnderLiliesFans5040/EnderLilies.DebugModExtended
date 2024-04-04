#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EffectBPFLibrary.generated.h"

class UObject;
class UParticleSystem;

UCLASS(Blueprintable)
class UEffectBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEffectBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopAllDeactivatingParticleSystems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static UParticleSystem* GetStepEffectForSurfaceType(const UObject* WorldContextObj, TEnumAsByte<EPhysicalSurface> SurfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static UParticleSystem* GetLandingEffectForSurfaceType(const UObject* WorldContextObj, TEnumAsByte<EPhysicalSurface> SurfaceType);
    
};

