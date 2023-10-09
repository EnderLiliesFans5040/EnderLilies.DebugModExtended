#pragma once
#include "CoreMinimal.h"
#include "PlayerDeathSettings.h"
#include "KnockbackDeathSettings.h"
#include "Components/ActorComponent.h"
#include "DissolveDeathSettings.h"
#include "EDeathStyle.h"
#include "DeathEventDelegate.h"
#include "DeathComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UDeathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDeathStyle DeathStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDestroyActorOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKnockbackDeathSettings KnockbackDeathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayerDeathSettings PlayerDeathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDissolveDeathSettings DissolveDeathSettings;
    
    UPROPERTY(BlueprintAssignable)
    FDeathEvent OnDeathProcessStart;
    
    UPROPERTY(BlueprintAssignable)
    FDeathEvent OnDeathProcessEnd;
    
    UDeathComponent();
    UFUNCTION(BlueprintCallable)
    void ResetDeathProcess();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartDeathProcess();
    
private:
    UFUNCTION()
    void OnReceiveDeadEvent(AActor* From);
    
    UFUNCTION()
    void OnPlayerDeathTimerComplete();
    
    UFUNCTION()
    void OnKnockbackTimerComplete();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinishDeathProcess();
    
private:
    UFUNCTION()
    void OnDeathAnimationComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyManualDeathCompleted();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDissolveDeathCompleted();
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDeath();
    
};

