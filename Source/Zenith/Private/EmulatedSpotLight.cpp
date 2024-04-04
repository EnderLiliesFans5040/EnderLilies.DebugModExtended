#include "EmulatedSpotLight.h"
#include "Components/SpotLightComponent.h"

AEmulatedSpotLight::AEmulatedSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->SpotLightComponent = (USpotLightComponent*)RootComponent;
}


