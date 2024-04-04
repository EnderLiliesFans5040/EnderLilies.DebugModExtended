#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "ECommandRemoveTypes.h"
#include "ZenithSpiritEventDelegate.h"
#include "ZenithSpirit.generated.h"

class APawn;
class UAbilityComponent;
class UCharacterMovementComponent;
class UCommandAction;
class UCommandQueueComponent;
class UFactionComponent;
class UHitStopComponent;
class ULocomotionComponent;
class UStateComponent;
class UZenithInputComponent;

UCLASS(Blueprintable)
class ZENITH_API AZenithSpirit : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommandQueueComponent* CommandQueueComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitStopComponent* HitStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZenithInputComponent* ZenithInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithSpiritEvent OnSpiritAppearDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZenithSpiritEvent OnSpiritDisappearDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnsummonOnMapSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnsummonOnSpiritSwim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnsummonOnSummonerSwim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* MovementComponent;
    
public:
    AZenithSpirit(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCurrentCommand();
    
    UFUNCTION(BlueprintCallable)
    void ResetLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSummonerMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnSummonerCommandsCleared();
    
    UFUNCTION(BlueprintCallable)
    void OnStartCommand(UCommandAction* CommandAction);
    
    UFUNCTION(BlueprintCallable)
    void OnSourceCommandReachedCastLimit();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSoftDisappear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndCommand(UCommandAction* CommandAction, ECommandRemoveTypes RemoveType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisappear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommandAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppear();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetSummoner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackFactor() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDisappear();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Disappear(bool bForce);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartCommandAction(APawn* ActionSummoner) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Appear();
    
    UFUNCTION(BlueprintCallable)
    void AddAttackToken();
    
};

