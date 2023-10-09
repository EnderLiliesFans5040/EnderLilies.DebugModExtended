#include "Trigger.h"
#include "ClearableComponent.h"


void ATrigger::OnClearedStatusChecked(bool bCleared) {
}

void ATrigger::MarkAsTriggered() {
}

bool ATrigger::CanTrigger_Implementation() const {
    return false;
}

ATrigger::ATrigger() {
    this->ClearableComponent = CreateDefaultSubobject<UClearableComponent>(TEXT("ClearableComponent"));
    this->bIsRepeatable = true;
    this->MinDelayBetweenRepeat = 0.00f;
}

