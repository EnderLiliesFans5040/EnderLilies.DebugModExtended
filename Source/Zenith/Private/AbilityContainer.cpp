#include "AbilityContainer.h"

AAbilityContainer::AAbilityContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IgnoreIfTargetHasAnyState.AddDefaulted(4);
    this->bAutoStop = true;
}


