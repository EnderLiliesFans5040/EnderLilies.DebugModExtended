#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "GameMapSwitchDelegateOwnerInterface.h"
#include "EventActorInterface.h"
#include "UObject/NoExportTypes.h"
#include "EventPlayerControllerInterface.h"
#include "ZPCActionDelegate.h"
#include "GameMapSwitchActionDelegate.h"
#include "Engine/DataTable.h"
#include "EAptitudeType.h"
#include "EventActorEventDelegate.h"
#include "GameMapData.h"
#include "AreaData.h"
#include "InventoryBaseItemData.h"
#include "EZenithAchievement.h"
#include "RespawnPointData.h"
#include "ZenithPlayerController.generated.h"

class UParameterPlayerComponent;
class USpiritCompanionComponent;
class UObject;
class USlowMotionAsyncAction;
class USpiritEquipComponent;
class UInventoryComponent;
class UHealComponent;
class UPassiveEquipComponent;
class AZenithCharacter;
class AActor;
class APlayerStart;
class UEventAsset;
class AZenithPlayerController;
class APawn;
class UFadeUserWidget;

UCLASS()
class ZENITH_API AZenithPlayerController : public APlayerController, public IGameMapSwitchDelegateOwnerInterface, public IEventActorInterface, public IEventPlayerControllerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UParameterPlayerComponent* ParameterPlayerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USpiritEquipComponent* SpiritEquipComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USpiritCompanionComponent* SpiritCompanionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHealComponent* HealComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPassiveEquipComponent* PassiveEquipComponent;
    
    UPROPERTY(BlueprintAssignable)
    FZPCAction OnDeath;
    
    UPROPERTY(BlueprintAssignable)
    FZPCAction OnPawnChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameMapSwitchAction OnGameMapSwitchDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZPCAction OnOpenNewWorldDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZPCAction OnOpenNewAreaDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZPCAction OnSimulatedInputChanged;
    
    UPROPERTY(BlueprintAssignable)
    FZPCAction OnAptitudeUnlockedDelegate;
    
private:
    UPROPERTY(Transient)
    AZenithCharacter* ZenithCharacter;
    
    UPROPERTY(Transient)
    AActor* DefaultViewTarget;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle DefaultGameMap;
    
    UPROPERTY(EditDefaultsOnly)
    FName DefaultPlayerStartTag;
    
    UPROPERTY(VisibleAnywhere)
    TArray<EAptitudeType> UnlockedAptitudes;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> OpenedWorlds;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> OpenedAreas;
    
    UPROPERTY(BlueprintAssignable)
    FEventActorEvent OnEventStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEventActorEvent OnEventStopDelegate;
    
    UPROPERTY(VisibleAnywhere)
    bool bInEvent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> PlayedEvents;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> PreviousRunsPlayedEvents;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> SeenTutorials;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> RecollectionCheckedIDs;
    
    UPROPERTY(VisibleAnywhere)
    int32 MinimapUISizeIndex;
    
    UPROPERTY(VisibleAnywhere)
    FDataTableRowHandle FastTravel_GameMapHandle;
    
    UPROPERTY(VisibleAnywhere)
    FName FastTravel_PlayerStartTag;
    
    UPROPERTY(VisibleAnywhere)
    int32 LockInputCount;
    
    UPROPERTY(VisibleAnywhere)
    int32 LockPauseCount;
    
    UPROPERTY(VisibleAnywhere)
    TArray<USlowMotionAsyncAction*> RunningSlowMotionActions;
    
public:
    AZenithPlayerController();
    UFUNCTION(BlueprintCallable)
    void UnlockAllAptitudes();
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatedInput(FVector2D SimulatedInput);
    
    UFUNCTION(BlueprintCallable)
    void SetRespawnPointData(APlayerStart* RespawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetNextFastTravelDestination(const FDataTableRowHandle& GameMapID);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapUISizeIndex(int32 NewMinimapUISizeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultViewTarget(AActor* NewDefaultViewTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnlockAptitude(EAptitudeType AptitudeType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwitchGameMapStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnRespawn();
    
private:
    UFUNCTION()
    void OnPawnDeathEvent();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnChanged();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenNewWorld(const FGameMapData& GameMapData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenNewArea(const FAreaData& AreaData);
    
private:
    UFUNCTION()
    void OnNoClampVolumeWarning();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameMapReadyPostFade();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameMapReady();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameDataLoaded();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStopped(UEventAsset* EventAsset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStarted(UEventAsset* EventAsset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerDisconnected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerConnected();
    
private:
    UFUNCTION()
    void OnAptitudeItemRemoved(const FInventoryBaseItemData& InventoryAptitudeItem);
    
    UFUNCTION()
    void OnAptitudeItemAdded(const FInventoryBaseItemData& InventoryAptitudeItem);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplicationWillDeactivate(bool bApplicationWillBeSuspended);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAchievementUnlocked(EZenithAchievement Achievement);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkTutorialAsSeen(const FName& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecollectionItemAsChecked(const FName& RecollectionItemID);
    
    UFUNCTION(BlueprintCallable)
    void MarkGameMapAsOpen(const FName& GameMapID, const FGameMapData& GameMapData);
    
    UFUNCTION(BlueprintPure)
    bool IsTutorialAlreadySeen(const FName& TutorialID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSoftEventAssetAlreadyPlayed(const TSoftObjectPtr<UEventAsset>& SoftEventAsset) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRecollectionItemAlreadyChecked(const FName& RecollectionItemID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsNextFastTravelDestinationSet() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInEvent() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameMapOpen(const FName& GameMapID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFastTravelOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEventAlreadyPlayed(const FName& EventName, bool bCheckPreviousGameGeneration) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAptitudeUnlocked(EAptitudeType Aptitude) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AZenithPlayerController* GetZenithPlayerController(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSimulatedInput() const;
    
    UFUNCTION(BlueprintPure)
    FRespawnPointData GetRespawnPointData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetOpenedGameMaps() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinimapUISizeIndex() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetLastPawn() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetDefaultViewTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore(APawn* PawnToRestore);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteFastTravel(TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass);
    
    UFUNCTION(BlueprintCallable)
    void ClearSimulatedInput();
    
    UFUNCTION(BlueprintCallable)
    void ClearFastTravelDestination();
    
    UFUNCTION(BlueprintPure)
    bool CanPlayerUseBackToRestPoint() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

