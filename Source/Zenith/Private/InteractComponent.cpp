#include "InteractComponent.h"

UInteractComponent::UInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 100.00f;
    this->ForbiddenStates.AddDefaulted(2);
    this->SphereComponent = NULL;
    this->PawnOwner = NULL;
}

void UInteractComponent::OnStartCommand(UCommandAction* CommandAction) {
}

void UInteractComponent::OnEndCommand(UCommandAction* CommandAction, ECommandRemoveTypes RemoveType) {
}

void UInteractComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UInteractComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


