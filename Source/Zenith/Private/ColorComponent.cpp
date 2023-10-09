#include "ColorComponent.h"

void UColorComponent::SetDefaultColor(FLinearColor Color) {
}

void UColorComponent::SetColor(FLinearColor Color, float LerpTime) {
}

FLinearColor UColorComponent::GetCurrentColor() const {
    return FLinearColor{};
}

void UColorComponent::ClearColor(float LerpTime) {
}

UColorComponent::UColorComponent() {
    this->SpineRenderer = NULL;
}

