#include "InputSettingsSubsystem.h"

UInputSettingsSubsystem::UInputSettingsSubsystem() {
    this->InputStyle = EInputStyle::INPUTSTYLE_XBOXONE;
}

void UInputSettingsSubsystem::SetupOverride(const APlayerController* PlayerController) {
}

void UInputSettingsSubsystem::SetInputStyle(const EInputStyle& NewInputStyle) {
}

void UInputSettingsSubsystem::SetAxisMappings(const FName& AxisName, const TArray<FInputAxisKeyMapping>& ActionMappings) {
}

void UInputSettingsSubsystem::SetActionMappings(const FName& ActionName, const TArray<FInputActionKeyMapping>& ActionMappings) {
}

void UInputSettingsSubsystem::RestoreDefaultBindings(EBindingType BindingTypeToRestore) {
}

void UInputSettingsSubsystem::RebuildKeymaps() {
}

void UInputSettingsSubsystem::OverrideAxisMapping(const FName& AxisName, const FInputChord& InputChord, float AxisScale, bool bGamepad) {
}

void UInputSettingsSubsystem::OverrideActionMapping(const FName& ActionName, const FInputChord& InputChord, bool bGamepad) {
}

bool UInputSettingsSubsystem::IsKeyMappedForAction(const FName& ActionName, FKey Key) const {
    return false;
}

bool UInputSettingsSubsystem::HasAnyMouseBindings() const {
    return false;
}

TArray<FInputAxisKeyMapping> UInputSettingsSubsystem::GetKeyMappingForAxis(const FName& AxisName, float ScaleSign) const {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> UInputSettingsSubsystem::GetKeyMappingForAction(const FName& ActionName) const {
    return TArray<FInputActionKeyMapping>();
}

EInputStyle UInputSettingsSubsystem::GetInputStyle() const {
    return EInputStyle::INPUTSTYLE_NONE;
}

TArray<FInputChord> UInputSettingsSubsystem::GetInputChordsForAxis(const FName& AxisName, float ScaleSign) const {
    return TArray<FInputChord>();
}

TArray<FInputChord> UInputSettingsSubsystem::GetInputChordsForAction(const FName& ActionName) const {
    return TArray<FInputChord>();
}

EInputStyle UInputSettingsSubsystem::GetDefaultInputStyle() const {
    return EInputStyle::INPUTSTYLE_NONE;
}

void UInputSettingsSubsystem::ActivateActionSet(EInputActionSet ActionSet) {
}


