#include "LightEmulatorComponent.h"

ULightEmulatorComponent::ULightEmulatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = true;
    this->MaxTopScale = 4.00f;
    this->MaxLateralScale = 4.00f;
    this->MinLightIntensityForMaxLightScale = 100.00f;
    this->LightEmulatorMode = ELightEmulatorMode::LightSimulation;
}

void ULightEmulatorComponent::SetLightEmulatorMode(ELightEmulatorMode NewLightEmulatorMode) {
}

void ULightEmulatorComponent::SetCustomLightScaleValues(FVector NewLightScaleCustomValues) {
}

void ULightEmulatorComponent::RefreshTranslucencySortPriority() {
}

void ULightEmulatorComponent::OnSpineMaterialsUpdated() {
}


