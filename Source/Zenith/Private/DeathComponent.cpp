#include "DeathComponent.h"

class AActor;

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

UDeathComponent::UDeathComponent() {
    this->DeathStyle = EDeathStyle::ANIMATION;
    this->bDestroyActorOnDeath = true;
}

