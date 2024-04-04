#include "Collectable.h"

ACollectable::ACollectable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDeactivateOnBeginPlay = false;
    this->bAutoCollectOnActivate = true;
}


void ACollectable::OnGameMapSwitch() {
}


bool ACollectable::IsDropGranted() const {
    return false;
}

void ACollectable::GrantDrop() {
}

int32 ACollectable::GetExperienceValue() const {
    return 0;
}

APlayerController* ACollectable::GetCollectingPlayerController() const {
    return NULL;
}

void ACollectable::Collect(APlayerController* PlayerController) {
}


