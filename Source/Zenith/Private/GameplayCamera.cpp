#include "GameplayCamera.h"

class AController;

void AGameplayCamera::UnregisterEnemyControllers(const TArray<AController*>& EnemyControllersToRemove) {
}

void AGameplayCamera::UnregisterEnemyController(AController* EnemyControllerToRemove) {
}

void AGameplayCamera::UnregisterAllyController(AController* AllyControllerToRemove) {
}

void AGameplayCamera::SetSettings(const FGameplayCameraSettings& NewSettings) {
}

void AGameplayCamera::SetBlendSpeedFactor(float NewBlendSpeedFactor) {
}

void AGameplayCamera::ResetCameraLocation() {
}

void AGameplayCamera::RemoveOverrideSettings(int32 OverrideSettingsID, float BlendTime) {
}

void AGameplayCamera::RegisterEnemyControllers(const TArray<AController*>& EnemyControllersToAdd) {
}

void AGameplayCamera::RegisterEnemyController(AController* EnemyControllerToAdd) {
}

void AGameplayCamera::RegisterAllyController(AController* AllyControllerToAdd) {
}

void AGameplayCamera::OnViewportResized_Implementation() {
}

FVector AGameplayCamera::GetOffsetFromPlayerFeet() {
    return FVector{};
}

float AGameplayCamera::GetFOV() const {
    return 0.0f;
}

FVector AGameplayCamera::GetCurrentMin() const {
    return FVector{};
}

FVector AGameplayCamera::GetCurrentMax() const {
    return FVector{};
}

FVector AGameplayCamera::GetCurrentCenter() const {
    return FVector{};
}

void AGameplayCamera::GetBorderLocationsAtDist(float DistFromCamera, FVector& LeftBorderLocation, FVector& RightBorderLocation) const {
}

void AGameplayCamera::GetBorderLocationsAtAbsoluteX(float AbsoluteX, FVector& LeftBorderLocation, FVector& RightBorderLocation) const {
}

float AGameplayCamera::GetBlendSpeedFactor() const {
    return 0.0f;
}

void AGameplayCamera::ClearSettings() {
}

int32 AGameplayCamera::AddOverrideSettings(const FGameplayCameraOverrideSettings& NewOverrideSettings, float BlendTime) {
    return 0;
}

AGameplayCamera::AGameplayCamera() {
    this->InputMoveLerpSpeed = 5.00f;
    this->InputMoveRadius = 300.00f;
    this->CameraManager = NULL;
}

