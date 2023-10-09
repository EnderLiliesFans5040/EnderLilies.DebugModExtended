#include "EmulatedPointLight.h"
#include "Components/PointLightComponent.h"

AEmulatedPointLight::AEmulatedPointLight() {
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent0"));
    this->ActorAffectRadiusOffset = 200.00f;
}

