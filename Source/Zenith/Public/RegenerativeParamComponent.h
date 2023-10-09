#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "RegenerativeParamEventDelegate.h"
#include "RegenerativeParamComponent.generated.h"

class UDeathComponent;
class UFMODEvent;
class UState;
class UStateComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API URegenerativeParamComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRegenerativeParamEvent OnValueChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRegenerativeParamEvent OnMaxValueChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRegenerativeParamEvent OnBreakDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> RegenerationBlockingStates;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> BreakRecoveryBlockingStates;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeRecovery;
    
    UPROPERTY(EditDefaultsOnly)
    float RecoveryPerSecond;
    
    UPROPERTY(EditDefaultsOnly)
    float BrokenDuration;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInvincible;
    
    UPROPERTY(EditDefaultsOnly)
    UFMODEvent* AudioEventOnBreak;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* CachedStateComponent;
    
    UPROPERTY(Instanced, Transient)
    UDeathComponent* CachedDeathComponent;
    
public:
    URegenerativeParamComponent();
    UFUNCTION(BlueprintCallable)
    void Subtract(int32 ValueToSub);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float NewMaxValue);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnBreak();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrRatio() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    void Add(int32 ValueToSub);
    
};

