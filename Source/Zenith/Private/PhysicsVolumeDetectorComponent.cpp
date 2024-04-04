#include "PhysicsVolumeDetectorComponent.h"

UPhysicsVolumeDetectorComponent::UPhysicsVolumeDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Owner = NULL;
    this->MovementComponent = NULL;
}

void UPhysicsVolumeDetectorComponent::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UPhysicsVolumeDetectorComponent::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


