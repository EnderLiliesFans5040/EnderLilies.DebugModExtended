#include "StaminaComponent.h"

UStaminaComponent::UStaminaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->BreakRecoveryBlockingStates.AddDefaulted(3);
    this->KnockbackComponent = NULL;
}

void UStaminaComponent::OnKnockbackEnd(FKnockbackRuntimeData KnockbackRuntimeData) {
}


