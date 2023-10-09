#include "HookPoint.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

class AZenithCharacter;


void AHookPoint::NotifyHookPointUsed(AZenithCharacter* UsingCharacter) {
}

FTransform AHookPoint::GetHookTransform() const {
    return FTransform{};
}

FVector AHookPoint::GetHookLocation() const {
    return FVector{};
}

USceneComponent* AHookPoint::GetHookAttachComponent() const {
    return NULL;
}

AHookPoint::AHookPoint() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

