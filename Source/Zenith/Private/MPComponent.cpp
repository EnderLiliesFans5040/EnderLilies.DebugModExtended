#include "MPComponent.h"

void UMPComponent::Subtract(int32 MPToSub) {
}

void UMPComponent::SetMaxMP(int32 NewMaxMP) {
}

void UMPComponent::Reset() {
}

int32 UMPComponent::GetMaxMP() const {
    return 0;
}

float UMPComponent::GetCurrMPRatio() const {
    return 0.0f;
}

int32 UMPComponent::GetCurrMP() const {
    return 0;
}

void UMPComponent::Add(int32 MPToAdd) {
}

UMPComponent::UMPComponent() {
    this->MaxMP = 100;
    this->CurrMP = 0;
    this->BonusMPAddPercentage = 0.00f;
}

