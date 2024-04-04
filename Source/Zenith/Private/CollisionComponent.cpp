#include "CollisionComponent.h"

UCollisionComponent::UCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldProcessOverlapContacts = false;
    this->ContactDamageSkipStates.AddDefaulted(3);
    this->bIgnoreOneWayPlatform = false;
    this->bIgnoreWorldDynamic = false;
    this->bCanBeJustGuarded = true;
    this->bExecuteGotJustGuardedEvents = true;
    this->bCanBeParried = true;
    this->bExecuteParriedEvents = true;
    this->RootPrimitiveComponent = NULL;
    this->CharacterMovementComponent = NULL;
    this->FactionComponent = NULL;
    this->StateComponent = NULL;
}

void UCollisionComponent::SetCollisionResponseToPawnChannels(TEnumAsByte<ECollisionResponse> CollisionResponse, bool bAsDefault) {
}

void UCollisionComponent::SetCollisionResponseToChannels(TEnumAsByte<ECollisionResponse> CollisionResponseToAllChannels, TEnumAsByte<ECollisionResponse> CollisionResponseToWorldStaticChannel, bool bAsDefault) {
}

void UCollisionComponent::SetCollisionProfile(const FName& NewCollisionProfileName) {
}

void UCollisionComponent::RevertCollisionResponseToPawnChannels() {
}

void UCollisionComponent::OnStateRemoved() {
}

void UCollisionComponent::OnStateAdded() {
}

void UCollisionComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UCollisionComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


