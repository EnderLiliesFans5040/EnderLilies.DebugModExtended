#include "DeathComponent.h"

UDeathComponent::UDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeathStyle = EDeathStyle::ANIMATION;
    this->bDestroyActorOnDeath = true;
}

void UDeathComponent::ResetDeathProcess() {
}


void UDeathComponent::OnReceiveDeadEvent(AActor* From) {
}

void UDeathComponent::OnPlayerDeathTimerComplete() {
}

void UDeathComponent::OnKnockbackTimerComplete() {
}


void UDeathComponent::OnDeathAnimationComplete() {
}

void UDeathComponent::NotifyManualDeathCompleted() {
}

void UDeathComponent::NotifyDissolveDeathCompleted() {
}

bool UDeathComponent::IsDead() const {
    return false;
}

bool UDeathComponent::IsAlive() const {
    return false;
}

void UDeathComponent::ForceDeath() {
}


