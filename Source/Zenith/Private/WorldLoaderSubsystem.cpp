#include "WorldLoaderSubsystem.h"
#include "Templates/SubclassOf.h"

class UFadeUserWidget;
class UWorld;

void UWorldLoaderSubsystem::UnpossessAllPlayers() const {
}

void UWorldLoaderSubsystem::SwitchGameMap_UnloadAndLoad() {
}

void UWorldLoaderSubsystem::SwitchGameMap_RestoreGame() {
}

void UWorldLoaderSubsystem::SwitchGameMap_PostFadeOut() {
}

void UWorldLoaderSubsystem::SwitchGameMap_PostFadeIn() {
}

void UWorldLoaderSubsystem::SwitchGameMap_Finalize() {
}

void UWorldLoaderSubsystem::SwitchGameMap(const FDataTableRowHandle& GameMapHandle, TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass, FName NextPlayerStartTag) {
}

void UWorldLoaderSubsystem::ProcessLevelTravel(const FString& WorldToLoad, bool bAsync) {
}

void UWorldLoaderSubsystem::OpenLevelInternal(const FString& WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, bool bAsync, FName NextPlayerStartTag) {
}

void UWorldLoaderSubsystem::OpenLevelAsync(const FString& WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag) {
}

void UWorldLoaderSubsystem::OpenLevelAssetAsync(const TSoftObjectPtr<UWorld> WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag) {
}

void UWorldLoaderSubsystem::OpenLevelAsset(const TSoftObjectPtr<UWorld> WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag) {
}

void UWorldLoaderSubsystem::OpenLevel(const FString& WorldToLoad, TSubclassOf<UFadeUserWidget> FadeClass, FName NextPlayerStartTag) {
}

void UWorldLoaderSubsystem::OpenGameMap(const FDataTableRowHandle& GameMapHandle, TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass, FName NextPlayerStartTag) {
}

void UWorldLoaderSubsystem::OnPostWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources) {
}

void UWorldLoaderSubsystem::OnLevelStreamingDynamicLoaded() {
}

void UWorldLoaderSubsystem::OnFadeFinished() {
}

bool UWorldLoaderSubsystem::IsLoading(bool bConsiderFadeAsLoading) const {
    return false;
}

bool UWorldLoaderSubsystem::IsGameMapReady(bool bConsiderFadeAsLoading) const {
    return false;
}

FName UWorldLoaderSubsystem::GetPlayerStartTag() const {
    return NAME_None;
}

FName UWorldLoaderSubsystem::GetCurrentGameMapID() const {
    return NAME_None;
}

FGameMapData UWorldLoaderSubsystem::GetCurrentGameMapData() const {
    return FGameMapData{};
}

UWorldLoaderSubsystem::UWorldLoaderSubsystem() {
    this->bLoadLevelAsync = false;
    this->bProcessingLoad = false;
    this->bWaitingFade = false;
    this->bRequestPersistentGameMapLoad = false;
    this->SaveFadeClass = NULL;
}

