#include "EmulatedRectLight.h"
#include "Components/RectLightComponent.h"

AEmulatedRectLight::AEmulatedRectLight() {
    this->RectLightComponent = CreateDefaultSubobject<URectLightComponent>(TEXT("LightComponent0"));
}

