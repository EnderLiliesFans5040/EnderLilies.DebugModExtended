#include "ZenithCharacterEvent.h"
#include "ZenithInputComponent.h"
#include "LocomotionComponent.h"

AZenithCharacterEvent::AZenithCharacterEvent() {
    this->ZenithInputComponent = CreateDefaultSubobject<UZenithInputComponent>(TEXT("ZenithInputComponent"));
    this->LocomotionComponent = CreateDefaultSubobject<ULocomotionComponent>(TEXT("LocomotionComponent"));
}

