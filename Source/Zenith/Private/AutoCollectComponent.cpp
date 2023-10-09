#include "AutoCollectComponent.h"

class UPrimitiveComponent;
class AActor;

void UAutoCollectComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UAutoCollectComponent::UAutoCollectComponent() {
    this->Radius = 500.00f;
    this->SphereComponent = NULL;
}

