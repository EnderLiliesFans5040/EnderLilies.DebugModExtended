#include "EffectBPFLibrary.h"

class UObject;
class UParticleSystem;

void UEffectBPFLibrary::StopAllDeactivatingParticleSystems() {
}

UParticleSystem* UEffectBPFLibrary::GetStepEffectForSurfaceType(const UObject* WorldContextObj, TEnumAsByte<EPhysicalSurface> SurfaceType) {
    return NULL;
}

UParticleSystem* UEffectBPFLibrary::GetLandingEffectForSurfaceType(const UObject* WorldContextObj, TEnumAsByte<EPhysicalSurface> SurfaceType) {
    return NULL;
}

UEffectBPFLibrary::UEffectBPFLibrary() {
}

