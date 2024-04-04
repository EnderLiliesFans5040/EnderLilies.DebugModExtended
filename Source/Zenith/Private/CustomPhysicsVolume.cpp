#include "CustomPhysicsVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ACustomPhysicsVolume::ACustomPhysicsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MovementMode = MOVE_Falling;
    this->CustomMovementMode = ECustomMovementMode::None;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->Priority = 0;
    this->bPhysicsVolumeEnabled = true;
    this->BoxComponent->SetupAttachment(RootComponent);
}

bool ACustomPhysicsVolume::IsPhysicsVolumeEnabled() const {
    return false;
}

int32 ACustomPhysicsVolume::GetPriority() const {
    return 0;
}


