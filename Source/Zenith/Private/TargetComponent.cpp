#include "TargetComponent.h"

UTargetComponent::UTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereRadius = 750.00f;
    this->bNeedLineOfSight = false;
    this->SphereComponent = NULL;
    this->InputComponent = NULL;
    this->CurrentTarget = NULL;
}


void UTargetComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTargetComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AActor* UTargetComponent::GetCurrentTarget() const {
    return NULL;
}


