#include "PlayerCameraManagerZenithBase.h"

class AGameplayCamera;
class APlayerCameraManagerZenithBase;
class ACameraClampVolume;
class ACameraActor;
class AActor;
class UObject;
class UCameraComponent;

void APlayerCameraManagerZenithBase::UnregisterGameplayCamera(AGameplayCamera* GameplayCamera) {
}

void APlayerCameraManagerZenithBase::RemoveClampVolume(ACameraClampVolume* ClampVolume) {
}

void APlayerCameraManagerZenithBase::RegisterGameplayCamera(AGameplayCamera* GameplayCamera) {
}



bool APlayerCameraManagerZenithBase::IsGameplayCameraRegistered() const {
    return false;
}

bool APlayerCameraManagerZenithBase::IsClamped() const {
    return false;
}

AActor* APlayerCameraManagerZenithBase::GetViewTargetActor() const {
    return NULL;
}

ACameraClampVolume* APlayerCameraManagerZenithBase::GetRootClampVolume() const {
    return NULL;
}

AGameplayCamera* APlayerCameraManagerZenithBase::GetRegisteredGameplayCamera() const {
    return NULL;
}

APlayerCameraManagerZenithBase* APlayerCameraManagerZenithBase::GetPlayerCameraManagerZenith(UObject* WorldContextObject, int32 PlayerControllerIndex) {
    return NULL;
}

AGameplayCamera* APlayerCameraManagerZenithBase::GetGameplayCamera() const {
    return NULL;
}

UCameraComponent* APlayerCameraManagerZenithBase::GetCameraComponent() const {
    return NULL;
}

ACameraActor* APlayerCameraManagerZenithBase::GetCamera() const {
    return NULL;
}

TEnumAsByte<EAspectRatioAxisConstraint> APlayerCameraManagerZenithBase::GetAspectRatioAxisConstraint() const {
    return AspectRatio_MaintainYFOV;
}

ACameraClampVolume* APlayerCameraManagerZenithBase::GetActiveClampVolume() const {
    return NULL;
}

FVector APlayerCameraManagerZenithBase::ClampLocationInCameraView(FVector Location, float Size) const {
    return FVector{};
}

void APlayerCameraManagerZenithBase::AddClampVolume(ACameraClampVolume* ClampVolume) {
}

APlayerCameraManagerZenithBase::APlayerCameraManagerZenithBase() {
    this->bWarnIfNoClampVolume = false;
    this->WarnIfNoClampVolumeAfterSeconds = 0.00f;
    this->MinTimeBetweenNoClampVolumeWarnings = 5.00f;
    this->bExperimental_DisableAspectRatioConstraint = false;
}

