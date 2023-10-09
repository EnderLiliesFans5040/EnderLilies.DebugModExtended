#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SaveDelegateDelegate.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveGameResultDelegate.h"
#include "ESaveExistsType.h"
#include "ESaveCopyResult.h"
#include "SaveSubsystem.generated.h"

class USaveData;
class USaveSettings;
class USaveIconUserWidget;
class USaveGame;

UCLASS(BlueprintType)
class ZENITH_API USaveSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSaveDelegate OnGameDataLoaded;
    
private:
    UPROPERTY(Transient)
    int32 SaveSlotIndex;
    
    UPROPERTY(Transient)
    FString SaveSlotName;
    
    UPROPERTY(Transient)
    int32 CurrentBackupIndex;
    
    UPROPERTY(Transient)
    USaveData* CurrentSaveData;
    
    UPROPERTY(Transient)
    USaveSettings* CurrSaveSettings;
    
    UPROPERTY(Transient)
    FSaveGameResult SaveFinishDelegateToCall;
    
    UPROPERTY(Transient)
    FSaveGameResult LoadFinishDelegateToCall;
    
public:
    USaveSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetSaveSlotIndex(int32 SlotIndexToUse);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void SaveGameAsync(TSubclassOf<USaveIconUserWidget> SaveIconWidgetClass, FSaveGameResult OnFinished);
    
    UFUNCTION(BlueprintCallable)
    bool SaveGame();
    
    UFUNCTION(BlueprintCallable)
    ESaveExistsType ReloadSettings();
    
private:
    UFUNCTION()
    void OnSaveFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
    UFUNCTION()
    void OnSaveBackupFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
    UFUNCTION()
    void OnLoadFinished(const FString& LoadedSlotName, const int32 UserIndex, USaveGame* NewSaveGame);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkInitializationSettingsCompleted();
    
    UFUNCTION(BlueprintCallable)
    ESaveExistsType LoadSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadGameBackupAsync(int32 BackupIndex, TSubclassOf<USaveIconUserWidget> LoadIconWidgetClass, FSaveGameResult OnFinished);
    
    UFUNCTION(BlueprintCallable)
    bool LoadGameBackup(int32 BackupIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadGameAsync(TSubclassOf<USaveIconUserWidget> LoadIconWidgetClass, FSaveGameResult OnFinished);
    
    UFUNCTION(BlueprintCallable)
    bool LoadGame();
    
    UFUNCTION(BlueprintPure)
    bool IsSettingsLoaded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInitializationSettingsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameLoaded() const;
    
    UFUNCTION(BlueprintPure)
    ESaveExistsType HasSaveDataInSlotIndexWithResult(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSaveDataInSlotIndex(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSaveData() const;
    
    UFUNCTION(BlueprintPure)
    FString GenerateSaveSlotName(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteSettings();
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveDataAtSlotIndex(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllSaveData();
    
    UFUNCTION(BlueprintCallable)
    ESaveCopyResult CopyGameDataToEmptySlot(int32 SlotToCopy, int32& out_TargetSlot);
    
    UFUNCTION(BlueprintPure)
    bool CheckSaveDataVersionFromSaveData(const USaveData* SaveData, bool bReturnToTitleOnFail) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckSaveDataVersion(bool bReturnToTitleOnFail);
    
};

