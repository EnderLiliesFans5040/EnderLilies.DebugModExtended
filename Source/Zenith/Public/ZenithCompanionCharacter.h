#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EventActorInterface.h"
#include "UObject/NoExportTypes.h"
#include "EventActorEventDelegate.h"
#include "ECompanionState.h"
#include "ECommandInputTypes.h"
#include "ItemSpiritData.h"
#include "ZenithCompanionCharacter.generated.h"

class USpineAnimationComponent;
class USpineSkeletonRendererComponent;
class USceneComponent;
class USpineSkeletonAnimationComponent;
class AActor;
class APawn;
class UCommandSettingsData;

UCLASS()
class ZENITH_API AZenithCompanionCharacter : public ACharacter, public IEventActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* FXHolder;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* SkeletonComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SkeletonAnimComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpineAnimationComponent* SpineAnimationComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float RangeForSpeedBonus;
    
    UPROPERTY(EditDefaultsOnly)
    FVector IdleLocationOffset;
    
    UPROPERTY(BlueprintAssignable)
    FEventActorEvent OnEventStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEventActorEvent OnEventStopDelegate;
    
public:
    AZenithCompanionCharacter();
    UFUNCTION(BlueprintCallable)
    void SetMoveTargetWithTime(AActor* Target, FVector Offset, float TimeToReachTarget, bool bShowSpineOnArrival, bool bSpineFacingRight);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveTarget(AActor* Target, FVector Offset, bool bShowSpineOnArrival, bool bSpineFacingRight);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(float NewMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void ResetMoveSpeed();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowSpine();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTranslucencyPriority(int32 Priority);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetMeshComponentsHiddenInGame(bool bHiddenInGame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetAssociatedSpiritData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetAlpha(float Alpha);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLeaderPawnChanged(APawn* NewLeaderPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideSpine();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnArrivedAtTarget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable)
    void NotifySpineVisible();
    
    UFUNCTION(BlueprintCallable)
    void NotifySpineHidden();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HideSpine();
    
protected:
    UFUNCTION(BlueprintPure)
    ECompanionState GetCurrentState() const;
    
public:
    UFUNCTION(BlueprintPure)
    void GetAssociatedSpiritData(ECommandInputTypes& CommandInputType, UCommandSettingsData*& CommandSettingsData, FItemSpiritData& ItemSpiritData) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

