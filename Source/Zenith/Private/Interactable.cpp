#include "Interactable.h"
#include "ClearableComponent.h"

AInteractable::AInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClearableComponent = CreateDefaultSubobject<UClearableComponent>(TEXT("ClearableComponent"));
    this->InteractionInputType = EInteractableInputType::NONE;
    this->FacingMode = EInteractableFacingMode::NONE;
}

bool AInteractable::TryMarkAsCleared() {
    return false;
}

void AInteractable::SetFacingMode(EInteractableFacingMode NewFacingMode) {
}

void AInteractable::OnTargetRemoveState() {
}

void AInteractable::OnTargetAddState() {
}

void AInteractable::OnReleaseInteract() {
}

void AInteractable::OnPressInteract() {
}

bool AInteractable::OnIsInteractable_Implementation(APlayerController* Controller) const {
    return false;
}



void AInteractable::OnInputOverrideChanged() {
}

void AInteractable::OnInputDeviceChanged() {
}


void AInteractable::OnClearedStatusChecked(bool bCleared) {
}


bool AInteractable::IsInteractableActive() const {
    return false;
}

bool AInteractable::IsInteractable(APlayerController* Controller) const {
    return false;
}

FText AInteractable::GetInteractionText_Implementation() const {
    return FText::GetEmpty();
}

APlayerController* AInteractable::GetInteractingController() const {
    return NULL;
}

EInteractableInputType AInteractable::GetInteractableInputType() const {
    return EInteractableInputType::NONE;
}

void AInteractable::DeactivateInteractable(APlayerController* Controller) {
}

bool AInteractable::CanBeMarkedAsCleared_Implementation() const {
    return false;
}

void AInteractable::ActivateInteractable(APlayerController* Controller) {
}


