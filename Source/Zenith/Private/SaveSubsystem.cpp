#include "SaveSubsystem.h"
#include "Templates/SubclassOf.h"

class USaveIconUserWidget;
class USaveData;
class USaveGame;

void USaveSubsystem::SetSaveSlotIndex(int32 SlotIndexToUse) {
}

void USaveSubsystem::SaveSettings() {
}

void USaveSubsystem::SaveGameAsync(TSubclassOf<USaveIconUserWidget> SaveIconWidgetClass, FSaveGameResult OnFinished) {
}

bool USaveSubsystem::SaveGame() {
    return false;
}

ESaveExistsType USaveSubsystem::ReloadSettings() {
    return ESaveExistsType::OK;
}

void USaveSubsystem::OnSaveFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess) {
}

void USaveSubsystem::OnSaveBackupFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess) {
}

void USaveSubsystem::OnLoadFinished(const FString& LoadedSlotName, const int32 UserIndex, USaveGame* NewSaveGame) {
}

void USaveSubsystem::MarkInitializationSettingsCompleted() {
}

ESaveExistsType USaveSubsystem::LoadSettings() {
    return ESaveExistsType::OK;
}

void USaveSubsystem::LoadGameBackupAsync(int32 BackupIndex, TSubclassOf<USaveIconUserWidget> LoadIconWidgetClass, FSaveGameResult OnFinished) {
}

bool USaveSubsystem::LoadGameBackup(int32 BackupIndex) {
    return false;
}

void USaveSubsystem::LoadGameAsync(TSubclassOf<USaveIconUserWidget> LoadIconWidgetClass, FSaveGameResult OnFinished) {
}

bool USaveSubsystem::LoadGame() {
    return false;
}

bool USaveSubsystem::IsSettingsLoaded() const {
    return false;
}

bool USaveSubsystem::IsSaving() const {
    return false;
}

bool USaveSubsystem::IsLoading() const {
    return false;
}

bool USaveSubsystem::IsInitializationSettingsCompleted() const {
    return false;
}

bool USaveSubsystem::IsGameLoaded() const {
    return false;
}

ESaveExistsType USaveSubsystem::HasSaveDataInSlotIndexWithResult(int32 SlotIndex) const {
    return ESaveExistsType::OK;
}

bool USaveSubsystem::HasSaveDataInSlotIndex(int32 SlotIndex) const {
    return false;
}

bool USaveSubsystem::HasSaveData() const {
    return false;
}

FString USaveSubsystem::GenerateSaveSlotName(int32 SlotIndex) const {
    return TEXT("");
}

void USaveSubsystem::DeleteSettings() {
}

void USaveSubsystem::DeleteSaveDataAtSlotIndex(int32 SlotIndex) {
}

void USaveSubsystem::DeleteAllSaveData() {
}

ESaveCopyResult USaveSubsystem::CopyGameDataToEmptySlot(int32 SlotToCopy, int32& out_TargetSlot) {
    return ESaveCopyResult::Undefined;
}

bool USaveSubsystem::CheckSaveDataVersionFromSaveData(const USaveData* SaveData, bool bReturnToTitleOnFail) const {
    return false;
}

bool USaveSubsystem::CheckSaveDataVersion(bool bReturnToTitleOnFail) {
    return false;
}

USaveSubsystem::USaveSubsystem() {
    this->SaveSlotIndex = 0;
    this->CurrentBackupIndex = 0;
    this->CurrentSaveData = NULL;
    this->CurrSaveSettings = NULL;
}

