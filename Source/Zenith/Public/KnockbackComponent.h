#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "KnockbackData.h"
#include "KnockbackEventDelegate.h"
#include "KnockbackRuntimeData.h"
#include "Templates/SubclassOf.h"
#include "KnockbackComponent.generated.h"

class ACharacter;
class UAbilityComponent;
class UDeathComponent;
class USpineAnimationComponent;
class UState;
class UStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UKnockbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchKnockbackFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirborneKnockbackTriggerLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackData AirborneLaunchKnockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> KnockbackStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> KnockbackLaunchStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> AdditionalKnockbackRecoveryStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoManageRecovery;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackEvent OnKnockbackStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackEvent OnKnockbackEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineAnimationComponent* SpineAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKnockbackRuntimeData RunningKnockback;
    
public:
    UKnockbackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopKnockback();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLanded(FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapSwitch();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 LaunchKnockback(const FKnockbackData& KnockbackData, FVector KnockbackDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInKnockbackRecovery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInKnockback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKnockbackRuntimeData GetRunningKnockback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLaunchKnockback() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelKnockback();
    
};

