#include "ColorComponent.h"

UColorComponent::UColorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpineRenderer = NULL;
}

void UColorComponent::SetDefaultColor(FLinearColor Color) {
}

void UColorComponent::SetColor(FLinearColor Color, float LerpTime) {
}

FLinearColor UColorComponent::GetCurrentColor() const {
    return FLinearColor{};
}

void UColorComponent::ClearColor(float LerpTime) {
}


