#include "Breakable.h"
#include "Components/SceneComponent.h"
#include "ClearableComponent.h"
#include "HPComponent.h"

ABreakable::ABreakable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->HPComponent = CreateDefaultSubobject<UHPComponent>(TEXT("HPComponent"));
    this->ClearableComponent = CreateDefaultSubobject<UClearableComponent>(TEXT("ClearableComponent"));
    this->bMarkClearedOnDeath = true;
}

void ABreakable::OnDeath(AActor* From) {
}



