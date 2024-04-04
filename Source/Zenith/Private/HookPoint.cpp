#include "HookPoint.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AHookPoint::AHookPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SphereComponent->SetupAttachment(RootComponent);
}


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


