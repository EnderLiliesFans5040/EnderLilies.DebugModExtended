#include "ZenithAIController.h"
#include "ParameterEnemyComponent.h"

class AZenithCharacter;

void AZenithAIController::OnPawnDeathEvent() {
}




bool AZenithAIController::IsActive() const {
    return false;
}

FName AZenithAIController::GetSpawnLocationBlackboardKey() const {
    return NAME_None;
}

AZenithCharacter* AZenithAIController::GetControlledCharacter() const {
    return NULL;
}

void AZenithAIController::Activate() {
}

AZenithAIController::AZenithAIController() {
    this->ParameterEnemyComponent = CreateDefaultSubobject<UParameterEnemyComponent>(TEXT("ParameterEnemyComponent"));
    this->bAutoActivate = true;
    this->Faction = EFaction::None;
    this->BehaviourTree_NGPlus = NULL;
}

