#pragma once
#include "CoreMinimal.h"
#include "EAbilityStopReason.h"
#include "EAbilityTargetTypes.h"
#include "EAbilityType.h"
#include "EFaction.h"
#include "HitInfos.h"
#include "ReusableActor.h"
#include "Templates/SubclassOf.h"
#include "Ability.generated.h"

class AActor;
class UState;

UCLASS(Abstract, Blueprintable)
class ZENITH_API AAbility : public AReusableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> IgnoreIfTargetHasAnyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxExecutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnLongExecutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeJustGuarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeJustDodged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExecuteGotJustGuardedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteGotJustGuardedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteGotJustDodgedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteGotParriedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerParryAbility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Invoker;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityType AbilityType;
    
public:
    AAbility(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop(EAbilityStopReason AbilityStopReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStop(EAbilityStopReason AbilityStopReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLaunch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
public:
    UFUNCTION(BlueprintCallable)
    void Launch(AActor* NewInvoker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLaunched() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxExecutionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInvoker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAbilityType GetAbilityType() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteAbilityEffectsOnTarget(AActor* Target, const FHitInfos& HitInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTargetActor(AActor* TargetActor, EFaction FactionFilter, EAbilityTargetTypes TargetType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanLaunch();
    
};

