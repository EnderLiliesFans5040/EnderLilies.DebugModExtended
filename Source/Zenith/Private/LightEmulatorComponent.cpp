#include "LightEmulatorComponent.h"

void ULightEmulatorComponent::SetLightEmulatorMode(ELightEmulatorMode NewLightEmulatorMode) {
}

void ULightEmulatorComponent::SetCustomLightScaleValues(FVector NewLightScaleCustomValues) {
}

void ULightEmulatorComponent::RefreshTranslucencySortPriority() {
}

void ULightEmulatorComponent::OnSpineMaterialsUpdated() {
}

ULightEmulatorComponent::ULightEmulatorComponent() {
    this->bEnable = true;
    this->MaxTopScale = 4.00f;
    this->MaxLateralScale = 4.00f;
    this->MinLightIntensityForMaxLightScale = 100.00f;
    this->LightEmulatorMode = ELightEmulatorMode::LightSimulation;
}

