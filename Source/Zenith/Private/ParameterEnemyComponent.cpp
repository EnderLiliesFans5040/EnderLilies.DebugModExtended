#include "ParameterEnemyComponent.h"

UParameterEnemyComponent::UParameterEnemyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelTable = NULL;
}

void UParameterEnemyComponent::OnDifficultyLevelChanged() {
}


