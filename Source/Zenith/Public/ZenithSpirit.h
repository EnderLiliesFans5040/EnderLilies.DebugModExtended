#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZenithSpiritEventDelegate.h"
#include "Engine/EngineTypes.h"
#include "ECommandRemoveTypes.h"
#include "ZenithSpirit.generated.h"

class UFactionComponent;
class UCommandQueueComponent;
class UStateComponent;
class UZenithInputComponent;
class UHitStopComponent;
class UAbilityComponent;
class ULocomotionComponent;
class UCharacterMovementComponent;
class UCommandAction;
class APawn;

UCLASS()
class ZENITH_API AZenithSpirit : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCommandQueueComponent* CommandQueueComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UFactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHitStopComponent* HitStopComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UZenithInputComponent* ZenithInputComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintAssignable)
    FZenithSpiritEvent OnSpiritAppearDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FZenithSpiritEvent OnSpiritDisappearDelegate;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bUnsummonOnMapSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUnsummonOnSpiritSwim;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUnsummonOnSummonerSwim;
    
    UPROPERTY(Instanced, Transient)
    UCharacterMovementComponent* MovementComponent;
    
public:
    AZenithSpirit();
    UFUNCTION(BlueprintCallable)
    void StopCurrentCommand();
    
    UFUNCTION(BlueprintCallable)
    void ResetLocation();
    
private:
    UFUNCTION()
    void OnSummonerMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION()
    void OnSummonerCommandsCleared();
    
    UFUNCTION()
    void OnStartCommand(UCommandAction* CommandAction);
    
    UFUNCTION()
    void OnSourceCommandReachedCastLimit();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSoftDisappear();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnResetLocation();
    
private:
    UFUNCTION()
    void OnEndCommand(UCommandAction* CommandAction, ECommandRemoveTypes RemoveType);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisappear();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCommandAdded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAppear();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetSummoner() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackFactor() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDisappear();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Disappear(bool bForce);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanStartCommandAction(APawn* ActionSummoner) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Appear();
    
    UFUNCTION(BlueprintCallable)
    void AddAttackToken();
    
};

