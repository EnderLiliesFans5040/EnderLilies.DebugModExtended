#include "SoundDataComponent.h"

ESoundMaterial USoundDataComponent::GetMaterial() const {
    return ESoundMaterial::NONE;
}

USoundDataComponent::USoundDataComponent() {
    this->Material = ESoundMaterial::NONE;
}

