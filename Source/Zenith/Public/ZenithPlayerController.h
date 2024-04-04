#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameFramework/PlayerController.h"
#include "EventActorEventDelegate.h"
#include "EventActorInterface.h"
#include "EventPlayerControllerInterface.h"
#include "AreaData.h"
#include "EAptitudeType.h"
#include "EZenithAchievement.h"
#include "GameMapData.h"
#include "GameMapSwitchActionDelegate.h"
#include "GameMapSwitchDelegateOwnerInterface.h"
#include "InventoryBaseItemData.h"
#include "RespawnPointData.h"
#include "Templates/SubclassOf.h"
#include "ZPCActionDelegate.h"
#include "ZenithPlayerController.generated.h"

class AActor;
class APawn;
class APlayerStart;
class AZenithCharacter;
class AZenithPlayerController;
class UEventAsset;
class UFadeUserWidget;
class UHealComponent;
class UInventoryComponent;
class UObject;
class UParameterPlayerComponent;
class UPassiveEquipComponent;
class USlowMotionAsyncAction;
class USpiritCompanionComponent;
class USpiritEquipComponent;

UCLASS(Blueprintable)
class ZENITH_API AZenithPlayerController : public APlayerController, public IGameMapSwitchDelegateOwnerInterface, public IEventActorInterface, public IEventPlayerControllerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParameterPlayerComponent* ParameterPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpiritEquipComponent* SpiritEquipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpiritCompanionComponent* SpiritCompanionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealComponent* HealComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPassiveEquipComponent* PassiveEquipComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZPCAction OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZPCAction OnPawnChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameMapSwitchAction OnGameMapSwitchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZPCAction OnOpenNewWorldDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZPCAction OnOpenNewAreaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZPCAction OnSimulatedInputChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZPCAction OnAptitudeUnlockedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AZenithCharacter* ZenithCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DefaultViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultGameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAptitudeType> UnlockedAptitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OpenedWorlds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OpenedAreas;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActorEvent OnEventStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActorEvent OnEventStopDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreviousRunsPlayedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeenTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RecollectionCheckedIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimapUISizeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FastTravel_GameMapHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FastTravel_PlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LockInputCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LockPauseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USlowMotionAsyncAction*> RunningSlowMotionActions;
    
public:
    AZenithPlayerController(const FObjectInitializer& ObjectInitializer);

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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnlockAptitude(EAptitudeType AptitudeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchGameMapStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnRespawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnDeathEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenNewWorld(const FGameMapData& GameMapData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenNewArea(const FAreaData& AreaData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNoClampVolumeWarning();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapReadyPostFade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameDataLoaded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStopped(UEventAsset* EventAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStarted(UEventAsset* EventAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerDisconnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerConnected();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAptitudeItemRemoved(const FInventoryBaseItemData& InventoryAptitudeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnAptitudeItemAdded(const FInventoryBaseItemData& InventoryAptitudeItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationWillDeactivate(bool bApplicationWillBeSuspended);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAchievementUnlocked(EZenithAchievement Achievement);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkTutorialAsSeen(const FName& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecollectionItemAsChecked(const FName& RecollectionItemID);
    
    UFUNCTION(BlueprintCallable)
    void MarkGameMapAsOpen(const FName& GameMapID, const FGameMapData& GameMapData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialAlreadySeen(const FName& TutorialID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoftEventAssetAlreadyPlayed(const TSoftObjectPtr<UEventAsset>& SoftEventAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecollectionItemAlreadyChecked(const FName& RecollectionItemID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextFastTravelDestinationSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameMapOpen(const FName& GameMapID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastTravelOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventAlreadyPlayed(const FName& EventName, bool bCheckPreviousGameGeneration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAptitudeUnlocked(EAptitudeType Aptitude) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AZenithPlayerController* GetZenithPlayerController(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSimulatedInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRespawnPointData GetRespawnPointData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetOpenedGameMaps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinimapUISizeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetLastPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDefaultViewTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore(APawn* PawnToRestore);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteFastTravel(TSubclassOf<UFadeUserWidget> FadeOutClass, TSubclassOf<UFadeUserWidget> FadeInClass);
    
    UFUNCTION(BlueprintCallable)
    void ClearSimulatedInput();
    
    UFUNCTION(BlueprintCallable)
    void ClearFastTravelDestination();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerUseBackToRestPoint() const;
    

    // Fix for true pure virtual functions not being implemented
};

