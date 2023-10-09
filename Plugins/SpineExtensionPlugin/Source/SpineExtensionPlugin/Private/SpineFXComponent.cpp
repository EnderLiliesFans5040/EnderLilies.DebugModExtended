#include "SpineFXComponent.h"

class UParticleSystemComponent;

void USpineFXComponent::OnFXSystemEnd(UParticleSystemComponent* ParticleSystem) {
}

USpineFXComponent::USpineFXComponent() {
    this->RendererComponent = NULL;
    this->BoneComponent = NULL;
    this->NavComponent = NULL;
}

