#include "DropComponent.h"

class AActor;

void UDropComponent::SetDropDataHandle(const FDataTableRowHandle& NewDropDataHandle) {
}

void UDropComponent::OnDeath(AActor* From) {
}

void UDropComponent::LaunchDropProcess() {
}

UDropComponent::UDropComponent() {
    this->bAutomaticallyRegisterOnDeath = true;
    this->CollectableClass = NULL;
    this->ExperienceDrop = 0;
    this->ExperienceCountPerCollectable = 5;
    this->MaxExperienceCollectableCount = 5;
}

