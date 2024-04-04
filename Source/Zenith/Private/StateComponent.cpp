#include "StateComponent.h"
#include "Templates/SubclassOf.h"

UStateComponent::UStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStateComponent::RemoveStates(const TArray<TSubclassOf<UState>>& States) {
}

void UStateComponent::RemoveState(const TSubclassOf<UState> State) {
}

void UStateComponent::RemoveAllStates() {
}

bool UStateComponent::HasState(const TSubclassOf<UState> State) const {
    return false;
}

bool UStateComponent::HasAnyState(const TArray<TSubclassOf<UState>> States) const {
    return false;
}

bool UStateComponent::HasAllStates(const TArray<TSubclassOf<UState>> States) const {
    return false;
}

bool UStateComponent::CanUseCommandInput(ECommandInputTypes CommandInput) const {
    return false;
}

void UStateComponent::AddStatesForDuration(const TArray<TSubclassOf<UState>>& States, float Duration) {
}

void UStateComponent::AddStates(const TArray<TSubclassOf<UState>>& States) {
}

void UStateComponent::AddState(const TSubclassOf<UState> State) {
}


