#include "EmulatedSpotLight.h"
#include "Components/SpotLightComponent.h"

AEmulatedSpotLight::AEmulatedSpotLight() {
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightComponent0"));
}

