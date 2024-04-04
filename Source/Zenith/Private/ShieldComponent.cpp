#include "ShieldComponent.h"

UShieldComponent::UShieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->BreakRecoveryBlockingStates.AddDefaulted(3);
}


