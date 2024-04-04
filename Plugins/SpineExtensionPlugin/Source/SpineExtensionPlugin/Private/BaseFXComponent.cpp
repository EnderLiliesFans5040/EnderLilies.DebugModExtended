#include "BaseFXComponent.h"

UBaseFXComponent::UBaseFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultFXBone = ESpineBone::Hip;
}

void UBaseFXComponent::StopAllRunningFXs() {
}

UParticleSystemComponent* UBaseFXComponent::SpawnFX_Implementation(UParticleSystem* ParticleSystem, ESpineBone Bone, FName CustomBone, FTransform Offset, bool bAttach, bool bFollowBoneRotation, int32 TranslucencySortPriority, EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX) {
    return NULL;
}

ESpineBone UBaseFXComponent::GetDefaultFXBone() const {
    return ESpineBone::None;
}


