#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReusableActor.h"
#include "EFaction.h"
#include "EAbilityType.h"
#include "EAbilityTargetTypes.h"
#include "EAbilityStopReason.h"
#include "HitInfos.h"
#include "Ability.generated.h"

class UState;
class AActor;

UCLASS(Abstract)
class ZENITH_API AAbility : public AReusableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> IgnoreIfTargetHasAnyState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxExecutionTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWarnLongExecutionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeJustGuarded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeJustDodged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeParried;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ExecuteGotJustGuardedEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExecuteGotJustGuardedEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExecuteGotJustDodgedEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExecuteGotParriedEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTriggerParryAbility;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    AActor* Invoker;
    
private:
    UPROPERTY(EditDefaultsOnly)
    EAbilityType AbilityType;
    
public:
    AAbility();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop(EAbilityStopReason AbilityStopReason);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStop(EAbilityStopReason AbilityStopReason);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLaunch();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInitialize();
    
public:
    UFUNCTION(BlueprintCallable)
    void Launch(AActor* NewInvoker);
    
    UFUNCTION(BlueprintPure)
    bool IsLaunched() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintPure)
    float GetMaxExecutionTime() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetInvoker() const;
    
    UFUNCTION(BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintPure)
    EAbilityType GetAbilityType() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteAbilityEffectsOnTarget(AActor* Target, const FHitInfos& HitInfos);
    
    UFUNCTION(BlueprintPure)
    bool CanTargetActor(AActor* TargetActor, EFaction FactionFilter, EAbilityTargetTypes TargetType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanLaunch();
    
};

