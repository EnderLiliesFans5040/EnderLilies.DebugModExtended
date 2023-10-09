#include "EmulatedFog.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

void AEmulatedFog::SetFogActive(bool bNewActive) {
}



bool AEmulatedFog::IsInfiniteBounds() const {
    return false;
}

void AEmulatedFog::DeactivateFog(bool bForce) {
}

void AEmulatedFog::ActivateFog(bool bForce) {
}

AEmulatedFog::AEmulatedFog() {
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->bInfiniteBounds = true;
    this->bActive = false;
}

