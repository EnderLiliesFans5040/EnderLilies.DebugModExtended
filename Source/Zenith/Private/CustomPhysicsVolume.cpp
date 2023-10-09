#include "CustomPhysicsVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

bool ACustomPhysicsVolume::IsPhysicsVolumeEnabled() const {
    return false;
}

int32 ACustomPhysicsVolume::GetPriority() const {
    return 0;
}

ACustomPhysicsVolume::ACustomPhysicsVolume() {
    this->MovementMode = MOVE_Falling;
    this->CustomMovementMode = ECustomMovementMode::None;
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->Priority = 0;
    this->bPhysicsVolumeEnabled = true;
}

