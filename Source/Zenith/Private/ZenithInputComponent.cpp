#include "ZenithInputComponent.h"

UZenithInputComponent::UZenithInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PawnOwner = NULL;
    this->MinInputForDirectionType = 0.50f;
}

FInputSnapshot UZenithInputComponent::GetInputSnapshot() const {
    return FInputSnapshot{};
}


