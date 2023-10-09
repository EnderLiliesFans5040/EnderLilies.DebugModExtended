#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/DataTable.h"
#include "GameMapData.h"
#include "WorldLoaderSubsystem.generated.h"

class AZenithCharacter;
class UFadeUserWidget;
class APlayerController;
class ULevelStreamingDynamic;
class UWorld;

UCLASS(BlueprintType)
class ZENITH_API UWorldLoaderSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FString LevelToLoad;
    
    UPROPERTY(Transient)
    bool bLoadLevelAsync;
    
    UPROPERTY(Transient)
    FName PlayerStartTag;
    
    UPROPERTY(Transient)
    bool bProcessingLoad;
    
    UPROPERTY(Transient)
    bool bWaitingFade;
    
    UPROPERTY(Transient)
    bool bRequestPersistentGameMapLoad;
    
    UPROPERTY(Transient)
    TSubclassOf<UFadeUserWidget> SaveFadeClass;
    
    UPROPERTY(Transient)
    FName SaveGameMapIDToLoad;
    
    UPROPERTY(Transient)
    FGameMapData SavedGameMapDataToLoad;
    
    UPROPERTY(Transient)
    FName CurrentGameMapID;
    
    UPROPERTY(Transient)
    FGameMapData CurrentGameMapData;
    
    UPROPERTY(Transient)
    TArray<ULevelStreamingDynamic*> CurrentGameLevels;
    
    UPROPERTY(VisibleAnywhere)
    TMap<APlayerController*, bool> InputSoftLockStates;
    
    UPROPERTY(VisibleAnywhere)
    TMap<APlayerController*, TWeakObjectPtr<AZenithCharacter>> InputSoftLockedCharacters;
    
public:
    UWorldLoaderSubsystem();
private:
    UFUNCTION()
    void UnpossessAllPlayers() const;
    
    UFUNCTION()
    void SwitchGameMap_UnloadAndLoad();
    
    UFUNCTION()
    void SwitchGameMap_RestoreGame();
    
    UFUNCTION()
    void SwitchGameMap_PostFadeOut();
    
    UFUNCTION()
    void SwitchGameMap_PostFadeIn();
    
    UFUNCTION()
    void SwitchGameMap_Finalize();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap(const FDataTableRowHandle& GameMapHandle, TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass, FName NextPlayerStartTag);
    
private:
    UFUNCTION()
    void ProcessLevelTravel(const FString& WorldToLoad, bool bAsync);
    
    UFUNCTION()
    void OpenLevelInternal(const FString& WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, bool bAsync, FName NextPlayerStartTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenLevelAsync(const FString& WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    void OpenLevelAssetAsync(const TSoftObjectPtr<UWorld> WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    void OpenLevelAsset(const TSoftObjectPtr<UWorld> WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    void OpenLevel(const FString& WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    void OpenGameMap(const FDataTableRowHandle& GameMapHandle, TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass, FName NextPlayerStartTag);
    
private:
    UFUNCTION()
    void OnPostWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION()
    void OnLevelStreamingDynamicLoaded();
    
    UFUNCTION()
    void OnFadeFinished();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLoading(bool bConsiderFadeAsLoading) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameMapReady(bool bConsiderFadeAsLoading) const;
    
    UFUNCTION(BlueprintPure)
    FName GetPlayerStartTag() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentGameMapID() const;
    
    UFUNCTION(BlueprintPure)
    FGameMapData GetCurrentGameMapData() const;
    
};

