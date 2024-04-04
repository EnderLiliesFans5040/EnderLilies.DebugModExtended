#include "SpineBoneFollowerComponent.h"

USpineBoneFollowerComponent::USpineBoneFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Target = NULL;
    this->UseComponentTransform = false;
    this->UsePosition = true;
    this->UseRotation = true;
    this->UseScale = true;
}


