#include "EmulatedRectLight.h"
#include "Components/RectLightComponent.h"

AEmulatedRectLight::AEmulatedRectLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URectLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->RectLightComponent = (URectLightComponent*)RootComponent;
}


