#include "ReusableActor.h"



bool AReusableActor::IsActive() const {
    return false;
}

void AReusableActor::Deactivate() {
}

void AReusableActor::Activate() {
}

AReusableActor::AReusableActor() {
    this->bDeactivateOnBeginPlay = true;
    this->bEnableCollisionOnActivate = true;
}

