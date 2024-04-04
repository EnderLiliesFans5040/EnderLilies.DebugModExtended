#include "DropComponent.h"

UDropComponent::UDropComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutomaticallyRegisterOnDeath = true;
    this->CollectableClass = NULL;
    this->ExperienceDrop = 0;
    this->ExperienceCountPerCollectable = 5;
    this->MaxExperienceCollectableCount = 5;
}

void UDropComponent::SetDropDataHandle(const FDataTableRowHandle& NewDropDataHandle) {
}

void UDropComponent::OnDeath(AActor* From) {
}

void UDropComponent::LaunchDropProcess() {
}


