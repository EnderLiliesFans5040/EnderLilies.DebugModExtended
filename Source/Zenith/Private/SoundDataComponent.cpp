#include "SoundDataComponent.h"

USoundDataComponent::USoundDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = ESoundMaterial::NONE;
}

ESoundMaterial USoundDataComponent::GetMaterial() const {
    return ESoundMaterial::NONE;
}


