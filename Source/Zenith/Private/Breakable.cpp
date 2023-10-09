#include "Breakable.h"
#include "Components/SceneComponent.h"
#include "HPComponent.h"
#include "ClearableComponent.h"

class AActor;

void ABreakable::OnDeath(AActor* From) {
}


ABreakable::ABreakable() {
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->HPComponent = CreateDefaultSubobject<UHPComponent>(TEXT("HPComponent"));
    this->ClearableComponent = CreateDefaultSubobject<UClearableComponent>(TEXT("ClearableComponent"));
    this->bMarkClearedOnDeath = true;
}

