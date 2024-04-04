#include "GameModeZenithBase.h"
#include "ChallengeSettings.h"
#include "ClearedObjectManagerComponent.h"
#include "EmulatedLightDetector.h"
#include "GameStatsComponent.h"
#include "Templates/SubclassOf.h"

AGameModeZenithBase::AGameModeZenithBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmulatedLightDetector = CreateDefaultSubobject<UEmulatedLightDetector>(TEXT("EmulatedLightDetectorComponent"));
    this->ClearedObjectManager = CreateDefaultSubobject<UClearedObjectManagerComponent>(TEXT("ClearedObjectManagerComponent"));
    this->GameStats = CreateDefaultSubobject<UGameStatsComponent>(TEXT("GameStatsComponent"));
    this->BossRushComponent = NULL;
    this->GameMapTable = NULL;
    this->ItemGenericTable = NULL;
    this->ItemParameterTable = NULL;
    this->ItemAptitudeTable = NULL;
    this->ItemSpiritTable = NULL;
    this->ItemPassiveTable = NULL;
    this->ItemTipTable = NULL;
    this->ParameterLevelTable = NULL;
    this->HealCountLevelTable = NULL;
    this->HealPowerLevelTable = NULL;
    this->InitialCommonSpiritLevel = NULL;
    this->InitialBossSpiritLevel = NULL;
    this->TutorialTable = NULL;
    this->EffectMatrixData = NULL;
    this->DifficultyLevel = 1;
    this->MaxDifficultyLevel = 10;
    this->NewGamePlusGeneration = 0;
    this->bGameDataReady = false;
    this->ChallengeSettings = CreateDefaultSubobject<UChallengeSettings>(TEXT("ChallengeSettings"));
}

int32 AGameModeZenithBase::SetNewGamePlusGeneration(int32 NewNewGamePlusGeneration) {
    return 0;
}

int32 AGameModeZenithBase::SetDifficultyLevel(int32 NewDifficultyLevel) {
    return 0;
}

void AGameModeZenithBase::RespawnPlayerPawn(APlayerController* Player, TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass) {
}

void AGameModeZenithBase::RegisterBossRushComponent(UBossRushComponent* NewBossRushComponent) {
}



void AGameModeZenithBase::NotifyTutorialsFinished() {
}

void AGameModeZenithBase::NotifyGameEndingReached(EGameEndingType GameEndingType) {
}

bool AGameModeZenithBase::LoadGameData(TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass) {
    return false;
}

void AGameModeZenithBase::LaunchTutorials_Implementation(AZenithPlayerController* PlayerController, const TArray<FTutorialKeyDataPair>& Tutorials) {
}

bool AGameModeZenithBase::IsGameCleared() const {
    return false;
}

UDataTable* AGameModeZenithBase::GetParameterLevelTable() const {
    return NULL;
}

int32 AGameModeZenithBase::GetNewGamePlusGeneration() const {
    return 0;
}

int32 AGameModeZenithBase::GetMaxDifficultyLevel() const {
    return 0;
}

UDataTable* AGameModeZenithBase::GetItemTipTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetItemSpiritTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetItemPassiveTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetItemParameterTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetItemGenericTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetItemAptitudeTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetInitialCommonSpiritLevelTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetInitialBossSpiritLevelTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetHealPowerLevelTable() const {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetHealCountLevelTable() const {
    return NULL;
}

AGameModeZenithBase* AGameModeZenithBase::GetGameModeZenith(const UObject* WorldContextObject) {
    return NULL;
}

UDataTable* AGameModeZenithBase::GetGameMapTable() const {
    return NULL;
}

int32 AGameModeZenithBase::GetGameEndingCountReached() const {
    return 0;
}

int32 AGameModeZenithBase::GetGameClearCount() const {
    return 0;
}

UEffectMatrixData* AGameModeZenithBase::GetEffectMatrixData() const {
    return NULL;
}

int32 AGameModeZenithBase::GetDifficultyLevelWithoutOverride() const {
    return 0;
}

int32 AGameModeZenithBase::GetDifficultyLevel() const {
    return 0;
}

int32 AGameModeZenithBase::GetChapterDisplay() const {
    return 0;
}

UChallengeSettings* AGameModeZenithBase::GetChallengeSettings(const UObject* WorldContextObject) {
    return NULL;
}

bool AGameModeZenithBase::DidReachGameEnding(EGameEndingType GameEndingType, bool bCheckPreviousGameGeneration) const {
    return false;
}

int32 AGameModeZenithBase::AddDifficultyLevel() {
    return 0;
}


