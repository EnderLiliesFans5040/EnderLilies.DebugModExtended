#include "ZenithInputComponent.h"

FInputSnapshot UZenithInputComponent::GetInputSnapshot() const {
    return FInputSnapshot{};
}

UZenithInputComponent::UZenithInputComponent() {
    this->PawnOwner = NULL;
    this->MinInputForDirectionType = 0.50f;
}

