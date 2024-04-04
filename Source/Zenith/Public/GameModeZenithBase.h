#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EGameEndingType.h"
#include "GameModeZenithEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "TutorialKeyDataPair.h"
#include "GameModeZenithBase.generated.h"

class AGameModeZenithBase;
class APlayerController;
class AZenithPlayerController;
class UBossRushComponent;
class UChallengeSettings;
class UClearedObjectManagerComponent;
class UDataTable;
class UEffectMatrixData;
class UEmulatedLightDetector;
class UFadeUserWidget;
class UGameStatsComponent;
class UObject;

UCLASS(Blueprintable, NonTransient)
class ZENITH_API AGameModeZenithBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmulatedLightDetector* EmulatedLightDetector;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeZenithEvent OnGameMapSwitchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeZenithEvent OnDifficultyLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeZenithEvent OnTutorialHookFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeZenithEvent OnPlayerRespawnDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearedObjectManagerComponent* ClearedObjectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameStatsComponent* GameStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBossRushComponent* BossRushComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GameMapTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemGenericTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemParameterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemAptitudeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemSpiritTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemPassiveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemTipTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParameterLevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HealCountLevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HealPowerLevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InitialCommonSpiritLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InitialBossSpiritLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectMatrixData* EffectMatrixData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> DifficultyForAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameEndingType, int32> ReachedGameEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGamePlusGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameEndingType, int32> PreviousRunsReachedGameEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameDataReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChallengeSettings* ChallengeSettings;
    
public:
    AGameModeZenithBase(const FObjectInitializer& ObjectInitializer);

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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchTutorials(AZenithPlayerController* PlayerController, const TArray<FTutorialKeyDataPair>& Tutorials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameCleared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetParameterLevelTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewGamePlusGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxDifficultyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetItemTipTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetItemSpiritTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetItemPassiveTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetItemParameterTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetItemGenericTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetItemAptitudeTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetInitialCommonSpiritLevelTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetInitialBossSpiritLevelTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetHealPowerLevelTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetHealCountLevelTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameModeZenithBase* GetGameModeZenith(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetGameMapTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameEndingCountReached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameClearCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEffectMatrixData* GetEffectMatrixData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultyLevelWithoutOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChapterDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UChallengeSettings* GetChallengeSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidReachGameEnding(EGameEndingType GameEndingType, bool bCheckPreviousGameGeneration) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddDifficultyLevel();
    
};

