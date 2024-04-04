#include "EmulatedFog.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AEmulatedFog::AEmulatedFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->bInfiniteBounds = true;
    this->bActive = false;
    this->BoxComponent->SetupAttachment(RootComponent);
}

void AEmulatedFog::SetFogActive(bool bNewActive) {
}



bool AEmulatedFog::IsInfiniteBounds() const {
    return false;
}

void AEmulatedFog::DeactivateFog(bool bForce) {
}

void AEmulatedFog::ActivateFog(bool bForce) {
}


