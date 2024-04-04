#include "EmulatedPointLight.h"
#include "Components/PointLightComponent.h"

AEmulatedPointLight::AEmulatedPointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->PointLightComponent = (UPointLightComponent*)RootComponent;
    this->ActorAffectRadiusOffset = 200.00f;
}


