#include "ZenithCharacterEvent.h"
#include "LocomotionComponent.h"
#include "ZenithCharacterMovementComponent.h"
#include "ZenithInputComponent.h"

AZenithCharacterEvent::AZenithCharacterEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UZenithCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->ZenithInputComponent = CreateDefaultSubobject<UZenithInputComponent>(TEXT("ZenithInputComponent"));
    this->LocomotionComponent = CreateDefaultSubobject<ULocomotionComponent>(TEXT("LocomotionComponent"));
}


