#include "SpineBoneComponent.h"

USpineBoneComponent::USpineBoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpineAnimComponent = NULL;
    this->NavMovementComponent = NULL;
    this->SceneFeetComponent = NULL;
}


