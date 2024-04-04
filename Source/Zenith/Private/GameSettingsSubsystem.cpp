#include "GameSettingsSubsystem.h"

UGameSettingsSubsystem::UGameSettingsSubsystem() {
}

bool UGameSettingsSubsystem::SetUseForceFeedback(bool bUseForceFeedback) {
    return false;
}

bool UGameSettingsSubsystem::SetUseCameraShake(bool bUseCameraShake) {
    return false;
}

float UGameSettingsSubsystem::SetResolutionScale(float NewResolutionScale) {
    return 0.0f;
}

bool UGameSettingsSubsystem::SetNoAutoClimbWhilePressingDown(bool bNoAutoClimbWhilePressingDown) {
    return false;
}

bool UGameSettingsSubsystem::SetHoldForSummonSetSwitch(bool bSetHoldForSummonSetSwitch) {
    return false;
}

float UGameSettingsSubsystem::SetGammaPercentage(float GammaPercentage) {
    return 0.0f;
}

float UGameSettingsSubsystem::SetGamma(float NewGamma) {
    return 0.0f;
}

void UGameSettingsSubsystem::SetGameEndingReached(EGameEndingType GameEndingType) {
}

bool UGameSettingsSubsystem::SetEnableDamageAreaPostProcess(bool bEnableDamageAreaPostProcess) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayPlayerUI(bool bDisplayPlayerUI) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayInternalAchievementNotifications(bool bDisplayNotifications) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayHealValues(bool bDisplayHealValues) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayEnemyFloatingGauges(bool bDisplayEnemyFloatingGauges) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayDamageValues(bool bDisplayDamageValues) {
    return false;
}

void UGameSettingsSubsystem::ResetVideoSettingsToDefault() {
}

void UGameSettingsSubsystem::ResetGameSettingsToDefault() {
}

bool UGameSettingsSubsystem::GetUseForceFeedback() const {
    return false;
}

bool UGameSettingsSubsystem::GetUseCameraShake() const {
    return false;
}

float UGameSettingsSubsystem::GetResolutionScale() const {
    return 0.0f;
}

bool UGameSettingsSubsystem::GetNoAutoClimbWhilePressingDown() const {
    return false;
}

bool UGameSettingsSubsystem::GetHoldForSummonSetSwitch() const {
    return false;
}

float UGameSettingsSubsystem::GetGammaPercentage() const {
    return 0.0f;
}

float UGameSettingsSubsystem::GetGamma() const {
    return 0.0f;
}

bool UGameSettingsSubsystem::GetEnableDamageAreaPostProcess() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayPlayerUI() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayInternalAchievementNotifications() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayHealValues() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayEnemyFloatingGauges() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayDamageValues() const {
    return false;
}

bool UGameSettingsSubsystem::DidReachGameEnding(EGameEndingType GameEndingType) const {
    return false;
}


