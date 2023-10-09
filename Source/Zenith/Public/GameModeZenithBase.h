#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeZenithEventDelegate.h"
#include "EGameEndingType.h"
#include "TutorialKeyDataPair.h"
#include "GameModeZenithBase.generated.h"

class UEffectMatrixData;
class UEmulatedLightDetector;
class UDataTable;
class UBossRushComponent;
class UClearedObjectManagerComponent;
class UGameStatsComponent;
class UChallengeSettings;
class APlayerController;
class UFadeUserWidget;
class AZenithPlayerController;
class UObject;
class AGameModeZenithBase;

UCLASS(NonTransient)
class ZENITH_API AGameModeZenithBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UEmulatedLightDetector* EmulatedLightDetector;
    
    UPROPERTY(BlueprintAssignable)
    FGameModeZenithEvent OnGameMapSwitchDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameModeZenithEvent OnDifficultyLevelChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGameModeZenithEvent OnTutorialHookFinished;
    
    UPROPERTY(BlueprintAssignable)
    FGameModeZenithEvent OnPlayerRespawnDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UClearedObjectManagerComponent* ClearedObjectManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGameStatsComponent* GameStats;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBossRushComponent* BossRushComponent;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GameMapTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ItemGenericTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ItemParameterTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ItemAptitudeTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ItemSpiritTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ItemPassiveTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ItemTipTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ParameterLevelTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* HealCountLevelTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* HealPowerLevelTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* InitialCommonSpiritLevel;
    
    UPROPERTY(EditAnywhere)
    UDataTable* InitialBossSpiritLevel;
    
    UPROPERTY(EditAnywhere)
    UDataTable* TutorialTable;
    
    UPROPERTY(EditAnywhere)
    UEffectMatrixData* EffectMatrixData;
    
private:
    UPROPERTY(VisibleAnywhere)
    int32 DifficultyLevel;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, int32> DifficultyForAreas;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxDifficultyLevel;
    
    UPROPERTY(VisibleAnywhere)
    TMap<EGameEndingType, int32> ReachedGameEndings;
    
    UPROPERTY(VisibleAnywhere)
    int32 NewGamePlusGeneration;
    
    UPROPERTY(VisibleAnywhere)
    TMap<EGameEndingType, int32> PreviousRunsReachedGameEndings;
    
    UPROPERTY(VisibleAnywhere)
    bool bGameDataReady;
    
    UPROPERTY(VisibleAnywhere)
    UChallengeSettings* ChallengeSettings;
    
public:
    AGameModeZenithBase();
    UFUNCTION(BlueprintCallable)
    int32 SetNewGamePlusGeneration(int32 NewNewGamePlusGeneration);
    
    UFUNCTION(BlueprintCallable)
    int32 SetDifficultyLevel(int32 NewDifficultyLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RespawnPlayerPawn(APlayerController* Player, TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBossRushComponent(UBossRushComponent* NewBossRushComponent);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameDataLoaded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyTutorialsFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyGameEndingReached(EGameEndingType GameEndingType);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool LoadGameData(TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void LaunchTutorials(AZenithPlayerController* PlayerController, const TArray<FTutorialKeyDataPair>& Tutorials);
    
    UFUNCTION(BlueprintPure)
    bool IsGameCleared() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetParameterLevelTable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNewGamePlusGeneration() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxDifficultyLevel() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetItemTipTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetItemSpiritTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetItemPassiveTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetItemParameterTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetItemGenericTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetItemAptitudeTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetInitialCommonSpiritLevelTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetInitialBossSpiritLevelTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetHealPowerLevelTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetHealCountLevelTable() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameModeZenithBase* GetGameModeZenith(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetGameMapTable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGameEndingCountReached() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGameClearCount() const;
    
    UFUNCTION(BlueprintPure)
    UEffectMatrixData* GetEffectMatrixData() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDifficultyLevelWithoutOverride() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDifficultyLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChapterDisplay() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UChallengeSettings* GetChallengeSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    bool DidReachGameEnding(EGameEndingType GameEndingType, bool bCheckPreviousGameGeneration) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddDifficultyLevel();
    
};

