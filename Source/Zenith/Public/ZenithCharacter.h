#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "EventActorEventDelegate.h"
#include "EventActorInterface.h"
#include "CharacterInfosData.h"
#include "ZenithCharacterDamageEventDelegate.h"
#include "ZenithCharacterEventDelegate.h"
#include "ZenithCharacterKillEventDelegate.h"
#include "ZenithCharacterLandEventDelegate.h"
#include "ZenithCharacterOnGotJustEventDelegate.h"
#include "ZenithCharacterOnJustEventDelegate.h"
#include "ZenithCharacterParryEventDelegate.h"
#include "ZenithPossessEventDelegate.h"
#include "ZenithCharacter.generated.h"

class AAbility;
class AActor;
class AEnemySpawnPoint;
class APhysicsVolume;
class UActorComponent;
class UCommandQueueComponent;
class UCommandSet;
class UDeathComponent;
class UFactionComponent;
class UHPComponent;
class ULocomotionComponent;
class UMPComponent;
class UParameterComponent;
class USceneComponent;
class UStaminaComponent;
class UStateComponent;
class UStunComponent;
class UZenithCharacterMovementComponent;
class UZenithInputComponent;

UCLASS(Blueprintable)
class ZENITH_API AZenithCharacter : public ACharacter, public IEventActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UZenithCharacterMovementComponent* ZenithCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> TickPrerequisiteControllerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterInfosData CharacterInfosData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEnemySpawnPoint* SourceSpawnPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastAttackerDirection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharacterInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommandQueueComponent* CommandQueueComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZenithInputComponent* ZenithInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHPComponent* HPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMPComponent* MPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaminaComponent* StaminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStunComponent* StunComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterOnJustEvent OnJustGuardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterOnGotJustEvent OnGotJustGuardedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterOnJustEvent OnJustDodgeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterOnGotJustEvent OnGotJustDodgedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterParryEvent OnParryDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterOnGotJustEvent OnGotParriedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterDamageEvent OnDamagedEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterKillEvent OnKilledEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterEvent OnRespawnDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandSet* CommandSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandSet* RuntimeCommandSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterLandEvent OnLanding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterEvent OnHookStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterEvent OnWallgrabStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterEvent OnBreakWaterSurfaceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithPossessEvent OnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithPossessEvent OnUnpossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterEvent OnGameMapSwitchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithCharacterEvent OnAptitudeUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActorEvent OnEventStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActorEvent OnEventStopDelegate;
    
    AZenithCharacter(const FObjectInitializer& ObjectInitializer);

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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallGrab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubmerged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRespawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParry(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker, bool bTriggerParryAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJustGuard(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJustDodge(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGotParried(AAbility* Ability, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGotJustGuarded(AAbility* Ability, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGotJustDodged(AAbility* Ability, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakWaterSurface();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable)
    void LockInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClampedInCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UZenithCharacterMovementComponent* GetZenithCharacterMovement() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEnemySpawnPoint* GetSourceSpawnPoint() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommandSet* GetRuntimeCommandSet() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParameterComponent* GetParameterComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastAttackerDirection(bool bIgnoreZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetHomingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterInfosData GetCharacterInfosData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetCameraFocusTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ClearPhysicsVolume();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
};

