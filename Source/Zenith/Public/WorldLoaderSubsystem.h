#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameMapData.h"
#include "Templates/SubclassOf.h"
#include "WorldLoaderSubsystem.generated.h"

class APlayerController;
class AZenithCharacter;
class UFadeUserWidget;
class ULevelStreamingDynamic;
class UWorld;

UCLASS(Blueprintable)
class ZENITH_API UWorldLoaderSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LevelToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadLevelAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bProcessingLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitingFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestPersistentGameMapLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFadeUserWidget> SaveFadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SaveGameMapIDToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameMapData SavedGameMapDataToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentGameMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameMapData CurrentGameMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> CurrentGameLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerController*, bool> InputSoftLockStates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerController*, TWeakObjectPtr<AZenithCharacter>> InputSoftLockedCharacters;
    
public:
    UWorldLoaderSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void UnpossessAllPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap_UnloadAndLoad();
    
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap_RestoreGame();
    
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap_PostFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap_PostFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap_Finalize();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap(const FDataTableRowHandle& GameMapHandle, TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass, FName NextPlayerStartTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void ProcessLevelTravel(const FString& WorldToLoad, bool bAsync);
    
    UFUNCTION(BlueprintCallable)
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
    UFUNCTION(BlueprintCallable)
    void OnPostWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamingDynamicLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading(bool bConsiderFadeAsLoading) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameMapReady(bool bConsiderFadeAsLoading) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerStartTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentGameMapID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameMapData GetCurrentGameMapData() const;
    
};

