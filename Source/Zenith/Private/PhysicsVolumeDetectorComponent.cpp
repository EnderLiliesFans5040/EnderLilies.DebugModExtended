#include "PhysicsVolumeDetectorComponent.h"

class AActor;

void UPhysicsVolumeDetectorComponent::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UPhysicsVolumeDetectorComponent::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

UPhysicsVolumeDetectorComponent::UPhysicsVolumeDetectorComponent() {
    this->Owner = NULL;
    this->MovementComponent = NULL;
}

