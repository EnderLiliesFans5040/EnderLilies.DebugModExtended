#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "KnockbackRuntimeData.h"
#include "KnockbackData.h"
#include "KnockbackEventDelegate.h"
#include "Engine/EngineTypes.h"
#include "KnockbackComponent.generated.h"

class UAbilityComponent;
class USpineAnimationComponent;
class UState;
class ACharacter;
class UStateComponent;
class UDeathComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UKnockbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LaunchKnockbackFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAirborneKnockbackTriggerLaunch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKnockbackData AirborneLaunchKnockback;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> KnockbackStates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> KnockbackLaunchStates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> AdditionalKnockbackRecoveryStates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoManageRecovery;
    
    UPROPERTY(BlueprintAssignable)
    FKnockbackEvent OnKnockbackStart;
    
    UPROPERTY(BlueprintAssignable)
    FKnockbackEvent OnKnockbackEnd;
    
private:
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(Instanced, Transient)
    USpineAnimationComponent* SpineAnimComponent;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UDeathComponent* DeathComponent;
    
    UPROPERTY(Transient)
    FKnockbackRuntimeData RunningKnockback;
    
public:
    UKnockbackComponent();
    UFUNCTION(BlueprintCallable)
    void StopKnockback();
    
private:
    UFUNCTION()
    void OnLanded(FHitResult HitResult);
    
    UFUNCTION()
    void OnGameMapSwitch();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 LaunchKnockback(const FKnockbackData& KnockbackData, FVector KnockbackDirection);
    
    UFUNCTION(BlueprintPure)
    bool IsInKnockbackRecovery() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInKnockback() const;
    
    UFUNCTION(BlueprintPure)
    FKnockbackRuntimeData GetRunningKnockback() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLaunchKnockback() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelKnockback();
    
};

