#include "BaseFXComponent.h"

class UParticleSystem;
class UParticleSystemComponent;

void UBaseFXComponent::StopAllRunningFXs() {
}

UParticleSystemComponent* UBaseFXComponent::SpawnFX_Implementation(UParticleSystem* ParticleSystem, ESpineBone Bone, FName CustomBone, FTransform Offset, bool bAttach, bool bFollowBoneRotation, int32 TranslucencySortPriority, EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX) {
    return NULL;
}

ESpineBone UBaseFXComponent::GetDefaultFXBone() const {
    return ESpineBone::None;
}

UBaseFXComponent::UBaseFXComponent() {
    this->DefaultFXBone = ESpineBone::Hip;
}

