#include "EnemySpawnPoint.h"
#include "ClearableComponent.h"

class AZenithCharacter;
class AController;

void AEnemySpawnPoint::OverrideEnemySpawned(AZenithCharacter* NewEnemy) {
}






void AEnemySpawnPoint::OnEnemyRespawn() {
}


void AEnemySpawnPoint::OnEnemyDeathProcessStart() {
}

void AEnemySpawnPoint::OnEnemyDeathProcessEnd() {
}



void AEnemySpawnPoint::OnClearedStatusChecked(bool bCleared) {
}


bool AEnemySpawnPoint::IsEnemySpawned() const {
    return false;
}

bool AEnemySpawnPoint::IsEnemyActivated() const {
    return false;
}

AController* AEnemySpawnPoint::GetEnemyController() const {
    return NULL;
}

AZenithCharacter* AEnemySpawnPoint::GetEnemy() const {
    return NULL;
}

void AEnemySpawnPoint::ActivateEnemy() {
}

AEnemySpawnPoint::AEnemySpawnPoint() {
    this->ClearableComponent = CreateDefaultSubobject<UClearableComponent>(TEXT("ClearableComponent"));
    this->CharacterToSpawn = NULL;
    this->ControllerOverride = NULL;
    this->bShouldActivateByDefault = true;
    this->MarkClearTiming = EEnemySpawnPointClearTiming::OnPostDeath;
    this->bAddDifficultyLevelOnClear = false;
    this->bHOOK_ConsiderAsBossSpawn = false;
}

