#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESaveCopyResult.h"
#include "ESaveExistsType.h"
#include "SaveDelegateDelegate.h"
#include "SaveGameResultDelegate.h"
#include "Templates/SubclassOf.h"
#include "SaveSubsystem.generated.h"

class USaveData;
class USaveGame;
class USaveIconUserWidget;
class USaveSettings;

UCLASS(Blueprintable)
class ZENITH_API USaveSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDelegate OnGameDataLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SaveSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBackupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveData* CurrentSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveSettings* CurrSaveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveGameResult SaveFinishDelegateToCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnSaveFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveBackupFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializationSettingsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveExistsType HasSaveDataInSlotIndexWithResult(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSaveDataInSlotIndex(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GenerateSaveSlotName(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteSettings();
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveDataAtSlotIndex(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllSaveData();
    
    UFUNCTION(BlueprintCallable)
    ESaveCopyResult CopyGameDataToEmptySlot(int32 SlotToCopy, int32& out_TargetSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSaveDataVersionFromSaveData(const USaveData* SaveData, bool bReturnToTitleOnFail) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckSaveDataVersion(bool bReturnToTitleOnFail);
    
};

