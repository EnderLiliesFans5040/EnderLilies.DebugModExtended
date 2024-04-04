#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DeathEventDelegate.h"
#include "DissolveDeathSettings.h"
#include "EDeathStyle.h"
#include "KnockbackDeathSettings.h"
#include "PlayerDeathSettings.h"
#include "DeathComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UDeathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeathStyle DeathStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyActorOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackDeathSettings KnockbackDeathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeathSettings PlayerDeathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDissolveDeathSettings DissolveDeathSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathEvent OnDeathProcessStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathEvent OnDeathProcessEnd;
    
    UDeathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetDeathProcess();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDeathProcess();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceiveDeadEvent(AActor* From);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeathTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnKnockbackTimerComplete();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishDeathProcess();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeathAnimationComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyManualDeathCompleted();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDissolveDeathCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDeath();
    
};

