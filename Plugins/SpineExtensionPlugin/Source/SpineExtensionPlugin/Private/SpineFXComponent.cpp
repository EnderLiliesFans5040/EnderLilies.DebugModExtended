#include "SpineFXComponent.h"

USpineFXComponent::USpineFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RendererComponent = NULL;
    this->BoneComponent = NULL;
    this->NavComponent = NULL;
}

void USpineFXComponent::OnFXSystemEnd(UParticleSystemComponent* ParticleSystem) {
}


