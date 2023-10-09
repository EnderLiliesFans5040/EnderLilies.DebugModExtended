#include "AutoClimbComponent.h"

class AActor;
class UCommandAction;
class UPrimitiveComponent;

void UAutoClimbComponent::OnStartCommand(UCommandAction* CommandAction) {
}

void UAutoClimbComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAutoClimbComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAutoClimbComponent::IgnoreActorUntilNextCommand(AActor* Actor) {
}

FVector UAutoClimbComponent::GetLastTargetLocation() const {
    return FVector{};
}

float UAutoClimbComponent::GetForwardOffset() const {
    return 0.0f;
}

UAutoClimbComponent::UAutoClimbComponent() {
    this->AllowedMaxZVelocity = 0.00f;
    this->MaxAngleForClimb = 10.00f;
    this->ForwardOffset = 40.00f;
    this->TraceSphereRadius = 25.00f;
    this->MinHeightForAutoClimbHigh = 200.00f;
    this->MaxHeightForAutoClimbHigh = 200.00f;
    this->MinHeightForAutoClimbMiddle = 125.00f;
    this->MaxHeightForAutoClimbMiddle = 125.00f;
    this->MinHeightForAutoClimbLow = 50.00f;
    this->MaxHeightForAutoClimbLow = 50.00f;
    this->DistanceAboveHeadToCheck = 50.00f;
    this->IgnoreAutoClimbStates.AddDefaulted(2);
    this->BoxComponent = NULL;
    this->CharacterOwner = NULL;
}

