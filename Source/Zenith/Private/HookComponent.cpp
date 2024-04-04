#include "HookComponent.h"

UHookComponent::UHookComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereComponent = NULL;
    this->SphereRadius = 750.00f;
    this->MinHookDistance = 0.00f;
    this->bIgnoreHookPointBelowActor = false;
    this->HookPointBelowActorDistanceWeightMultiplier = 1.00f;
    this->NecessaryAptitude = EAptitudeType::Hook;
    this->CharacterOwner = NULL;
    this->InputComponent = NULL;
}

void UHookComponent::UnlockHook() {
}


void UHookComponent::OnUnlockAptitude() {
}



void UHookComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHookComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UHookComponent::LockCurrentHook() {
}

AHookPoint* UHookComponent::GetCurrentHookPoint() const {
    return NULL;
}


