#include "GameStatsComponent.h"

UGameStatsComponent::UGameStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FString UGameStatsComponent::GetPlayTimeAsString() const {
    return TEXT("");
}

float UGameStatsComponent::GetPlayTime() const {
    return 0.0f;
}


