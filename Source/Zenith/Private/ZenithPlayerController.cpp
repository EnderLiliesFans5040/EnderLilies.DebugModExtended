#include "ZenithPlayerController.h"
#include "Templates/SubclassOf.h"
#include "InventoryComponent.h"
#include "ParameterPlayerComponent.h"
#include "SpiritEquipComponent.h"
#include "SpiritCompanionComponent.h"
#include "HealComponent.h"
#include "PassiveEquipComponent.h"

class UEventAsset;
class UObject;
class APlayerStart;
class AActor;
class AZenithPlayerController;
class APawn;
class UFadeUserWidget;

void AZenithPlayerController::UnlockAllAptitudes() {
}

void AZenithPlayerController::SetSimulatedInput(FVector2D SimulatedInput) {
}

void AZenithPlayerController::SetRespawnPointData(APlayerStart* RespawnPoint) {
}

void AZenithPlayerController::SetNextFastTravelDestination(const FDataTableRowHandle& GameMapID) {
}

void AZenithPlayerController::SetMinimapUISizeIndex(int32 NewMinimapUISizeIndex) {
}

void AZenithPlayerController::SetDefaultViewTarget(AActor* NewDefaultViewTarget) {
}




void AZenithPlayerController::OnPawnDeathEvent() {
}




void AZenithPlayerController::OnNoClampVolumeWarning() {
}









void AZenithPlayerController::OnAptitudeItemRemoved(const FInventoryBaseItemData& InventoryAptitudeItem) {
}

void AZenithPlayerController::OnAptitudeItemAdded(const FInventoryBaseItemData& InventoryAptitudeItem) {
}



void AZenithPlayerController::MarkTutorialAsSeen(const FName& TutorialID) {
}

void AZenithPlayerController::MarkRecollectionItemAsChecked(const FName& RecollectionItemID) {
}

void AZenithPlayerController::MarkGameMapAsOpen(const FName& GameMapID, const FGameMapData& GameMapData) {
}

bool AZenithPlayerController::IsTutorialAlreadySeen(const FName& TutorialID) const {
    return false;
}

bool AZenithPlayerController::IsSoftEventAssetAlreadyPlayed(const TSoftObjectPtr<UEventAsset>& SoftEventAsset) const {
    return false;
}

bool AZenithPlayerController::IsRecollectionItemAlreadyChecked(const FName& RecollectionItemID) const {
    return false;
}

bool AZenithPlayerController::IsNextFastTravelDestinationSet() const {
    return false;
}

bool AZenithPlayerController::IsInputLocked() const {
    return false;
}

bool AZenithPlayerController::IsInEvent() const {
    return false;
}

bool AZenithPlayerController::IsGameMapOpen(const FName& GameMapID) const {
    return false;
}

bool AZenithPlayerController::IsFastTravelOpen() const {
    return false;
}

bool AZenithPlayerController::IsEventAlreadyPlayed(const FName& EventName, bool bCheckPreviousGameGeneration) const {
    return false;
}

bool AZenithPlayerController::IsAptitudeUnlocked(EAptitudeType Aptitude) const {
    return false;
}

AZenithPlayerController* AZenithPlayerController::GetZenithPlayerController(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

FVector2D AZenithPlayerController::GetSimulatedInput() const {
    return FVector2D{};
}

FRespawnPointData AZenithPlayerController::GetRespawnPointData() const {
    return FRespawnPointData{};
}

TArray<FName> AZenithPlayerController::GetOpenedGameMaps() const {
    return TArray<FName>();
}

int32 AZenithPlayerController::GetMinimapUISizeIndex() const {
    return 0;
}

APawn* AZenithPlayerController::GetLastPawn() const {
    return NULL;
}

AActor* AZenithPlayerController::GetDefaultViewTarget() const {
    return NULL;
}

void AZenithPlayerController::FullyRestore(APawn* PawnToRestore) {
}

void AZenithPlayerController::ExecuteFastTravel(TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass) {
}

void AZenithPlayerController::ClearSimulatedInput() {
}

void AZenithPlayerController::ClearFastTravelDestination() {
}

bool AZenithPlayerController::CanPlayerUseBackToRestPoint() const {
    return false;
}

AZenithPlayerController::AZenithPlayerController() {
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->ParameterPlayerComponent = CreateDefaultSubobject<UParameterPlayerComponent>(TEXT("ParameterPlayerComponent"));
    this->SpiritEquipComponent = CreateDefaultSubobject<USpiritEquipComponent>(TEXT("SpiritEquipComponent"));
    this->SpiritCompanionComponent = CreateDefaultSubobject<USpiritCompanionComponent>(TEXT("SpiritCompanionComponent"));
    this->HealComponent = CreateDefaultSubobject<UHealComponent>(TEXT("HealComponent"));
    this->PassiveEquipComponent = CreateDefaultSubobject<UPassiveEquipComponent>(TEXT("PassiveEquipComponent"));
    this->ZenithCharacter = NULL;
    this->DefaultViewTarget = NULL;
    this->bInEvent = false;
    this->MinimapUISizeIndex = 0;
    this->LockInputCount = 0;
    this->LockPauseCount = 0;
}

