#include "SpineBoneDriverComponent.h"

USpineBoneDriverComponent::USpineBoneDriverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Target = NULL;
    this->UseComponentTransform = false;
    this->UsePosition = true;
    this->UseRotation = true;
    this->UseScale = true;
}

void USpineBoneDriverComponent::BeforeUpdateWorldTransform(USpineSkeletonComponent* Skeleton) {
}


