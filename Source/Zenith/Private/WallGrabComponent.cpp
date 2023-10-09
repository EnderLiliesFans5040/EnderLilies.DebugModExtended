#include "WallGrabComponent.h"

class UPrimitiveComponent;
class AActor;

void UWallGrabComponent::OnWallGrab_Implementation() {
}

void UWallGrabComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UWallGrabComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UWallGrabComponent::IsGrabingWall() const {
    return false;
}

UWallGrabComponent::UWallGrabComponent() {
    this->MinVerticalityForWallGrab = 0.90f;
    this->DistanceToWallGrabOffset = 10.00f;
    this->MaxZVelocityForGrab = -10.00f;
    this->NecessaryAptitude = EAptitudeType::Wallgrab;
    this->WallGrabCommandActionClass = NULL;
    this->NoWallGrabStates.AddDefaulted(2);
    this->CharacterOwner = NULL;
    this->BoxComponent = NULL;
    this->CommandQueueComponent = NULL;
    this->StateComponent = NULL;
    this->InputComponent = NULL;
}

