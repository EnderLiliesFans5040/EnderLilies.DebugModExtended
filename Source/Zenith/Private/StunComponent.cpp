#include "StunComponent.h"

UStunComponent::UStunComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->BreakRecoveryBlockingStates.AddDefaulted(4);
    this->bGenerateAirLaunchVector = true;
    this->CommandComponent = NULL;
    this->KnockbackComponent = NULL;
}


