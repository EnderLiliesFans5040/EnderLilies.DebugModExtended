#include "ClearableComponent.h"

void UClearableComponent::UnsetUniqueFlag() {
}

void UClearableComponent::UnsetMapCompletionFlag() {
}

void UClearableComponent::OnGameMapReady() {
}

void UClearableComponent::OnClearedObjectManagerReady() {
}

void UClearableComponent::MarkCleared() {
}

bool UClearableComponent::IsUsedForMapCompletion() const {
    return false;
}

bool UClearableComponent::IsUnique() const {
    return false;
}

bool UClearableComponent::IsClearStatusChecked() const {
    return false;
}

bool UClearableComponent::IsCleared() const {
    return false;
}

bool UClearableComponent::CheckPreviousRuns() const {
    return false;
}

UClearableComponent::UClearableComponent() {
    this->bIsUnique = false;
    this->bCheckPreviousRuns = false;
    this->bIsUsedForMapCompletion = false;
    this->bClearStatusChecked = false;
    this->bCleared = false;
}

