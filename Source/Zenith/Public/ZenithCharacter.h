#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "EventActorInterface.h"
#include "ZenithCharacterParryEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "CharacterInfosData.h"
#include "EventActorEventDelegate.h"
#include "ZenithCharacterEventDelegate.h"
#include "ZenithCharacterKillEventDelegate.h"
#include "ZenithCharacterOnJustEventDelegate.h"
#include "ZenithCharacterOnGotJustEventDelegate.h"
#include "ZenithCharacterDamageEventDelegate.h"
#include "ZenithCharacterLandEventDelegate.h"
#include "ZenithPossessEventDelegate.h"
#include "ZenithCharacter.generated.h"

class UActorComponent;
class UZenithCharacterMovementComponent;
class AEnemySpawnPoint;
class UCommandQueueComponent;
class UHPComponent;
class UZenithInputComponent;
class UStateComponent;
class UFactionComponent;
class ULocomotionComponent;
class UDeathComponent;
class USceneComponent;
class UMPComponent;
class UStaminaComponent;
class UStunComponent;
class UCommandSet;
class APhysicsVolume;
class AAbility;
class AActor;
class UParameterComponent;

UCLASS()
class ZENITH_API AZenithCharacter : public ACharacter, public IEventActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UZenithCharacterMovementComponent* ZenithCharacterMovement;
    
    UPROPERTY(Instanced, Transient)
    TArray<UActorComponent*> TickPrerequisiteControllerComponents;
    
    UPROPERTY(Transient)
    FCharacterInfosData CharacterInfosData;
    
    UPROPERTY(Transient)
    AEnemySpawnPoint* SourceSpawnPoint;
    
protected:
    UPROPERTY(Transient)
    FVector LastAttackerDirection;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle CharacterInfos;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCommandQueueComponent* CommandQueueComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UFactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UZenithInputComponent* ZenithInputComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UDeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHPComponent* HPComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMPComponent* MPComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaminaComponent* StaminaComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStunComponent* StunComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterOnJustEvent OnJustGuardDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterOnGotJustEvent OnGotJustGuardedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterOnJustEvent OnJustDodgeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterOnGotJustEvent OnGotJustDodgedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterParryEvent OnParryDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterOnGotJustEvent OnGotParriedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterDamageEvent OnDamagedEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterKillEvent OnKilledEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterEvent OnRespawnDelegate;
    
    UPROPERTY(EditDefaultsOnly)
    UCommandSet* CommandSet;
    
    UPROPERTY(Transient)
    UCommandSet* RuntimeCommandSet;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterLandEvent OnLanding;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterEvent OnHookStarted;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterEvent OnWallgrabStarted;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterEvent OnBreakWaterSurfaceDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithPossessEvent OnPossessed;
    
    UPROPERTY(BlueprintAssignable)
    FZenithPossessEvent OnUnpossessed;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterEvent OnGameMapSwitchDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithCharacterEvent OnAptitudeUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FEventActorEvent OnEventStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEventActorEvent OnEventStopDelegate;
    
    AZenithCharacter();
    UFUNCTION(BlueprintCallable)
    void UnlockInput();
    
    UFUNCTION(BlueprintCallable)
    void TriggerHookStart();
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsVolume(APhysicsVolume* NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetLastAttackerDirection(const FVector& NewAttackerDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetClampedInCamera(bool bClamped);
    
    UFUNCTION(BlueprintCallable)
    void Sample(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Respawn();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWallGrab();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSubmerged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRespawn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnParry(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker, bool bTriggerParryAbility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnJustGuard(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnJustDodge(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGotParried(AAbility* Ability, AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGotJustGuarded(AAbility* Ability, AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGotJustDodged(AAbility* Ability, AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStart();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivate();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreakWaterSurface();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable)
    void LockInput();
    
    UFUNCTION(BlueprintPure)
    bool IsInputLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClampedInCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintPure)
    UZenithCharacterMovementComponent* GetZenithCharacterMovement() const;
    
protected:
    UFUNCTION(BlueprintPure)
    AEnemySpawnPoint* GetSourceSpawnPoint() const;
    
public:
    UFUNCTION(BlueprintPure)
    UCommandSet* GetRuntimeCommandSet() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UParameterComponent* GetParameterComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetLastAttackerDirection(bool bIgnoreZ) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetHomingTarget() const;
    
    UFUNCTION(BlueprintPure)
    FCharacterInfosData GetCharacterInfosData() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetCameraFocusTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ClearPhysicsVolume();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
    
    // Fix for true pure virtual functions not being implemented
};

