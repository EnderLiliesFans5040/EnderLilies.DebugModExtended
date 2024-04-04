#include "ReusableActor.h"

AReusableActor::AReusableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDeactivateOnBeginPlay = true;
    this->bEnableCollisionOnActivate = true;
}



bool AReusableActor::IsActive() const {
    return false;
}

void AReusableActor::Deactivate() {
}

void AReusableActor::Activate() {
}


