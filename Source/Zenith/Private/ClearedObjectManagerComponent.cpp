#include "ClearedObjectManagerComponent.h"

UClearedObjectManagerComponent::UClearedObjectManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UClearedObjectManagerComponent::ResetClearedObjects() {
}

bool UClearedObjectManagerComponent::IsReady() const {
    return false;
}

float UClearedObjectManagerComponent::GetGameMapCompletionPercentage(const FName& GameMapID, const FGameMapData& GameMapData) const {
    return 0.0f;
}

float UClearedObjectManagerComponent::GetGameMapCompletionActorCount(const FName& GameMapID) const {
    return 0.0f;
}


