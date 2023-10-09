#include "GameplayCameraSettings.h"

FGameplayCameraSettings::FGameplayCameraSettings() {
    this->ProjectionMode = ECameraProjectionMode::Perspective;
    this->FOV = 0.00f;
    this->OrthoWidth = 0.00f;
    this->CameraComponentXOffset = 0.00f;
    this->SoloForwardOffsetBlendSpeed = 0.00f;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->EnemyLocationRadius = 0.00f;
    this->CameraRotationLagSpeed = 0.00f;
    this->bKeepFloorInView = false;
    this->FloorZ = 0.00f;
    this->ComputeOnlyTargetInCameraLock = false;
}

