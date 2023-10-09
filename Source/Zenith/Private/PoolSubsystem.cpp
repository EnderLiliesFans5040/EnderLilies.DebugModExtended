#include "PoolSubsystem.h"

class UPoolSystem;

UPoolSystem* UPoolSubsystem::GetPoolSystem() const {
    return NULL;
}

UPoolSubsystem::UPoolSubsystem() {
    this->PoolSystem = NULL;
}

