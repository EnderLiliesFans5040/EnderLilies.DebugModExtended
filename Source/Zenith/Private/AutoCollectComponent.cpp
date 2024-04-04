#include "AutoCollectComponent.h"

UAutoCollectComponent::UAutoCollectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 500.00f;
    this->SphereComponent = NULL;
}

void UAutoCollectComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


