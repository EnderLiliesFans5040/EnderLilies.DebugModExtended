#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HPDamageEventDelegate.h"
#include "HPDeathEventDelegate.h"
#include "HPUpdateEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "HPComponent.generated.h"

class AActor;
class UFactionComponent;
class UState;
class UStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHPComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPUpdateEvent OnHPChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPDeathEvent OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPDamageEvent OnReceiveDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPDamageEvent OnReceiveHeal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPUpdateEvent OnMaxHPChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> DamageNullifyingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFactionComponent* FactionComponent;
    
public:
    UHPComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaxHP(int32 NewMaxHP);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeal(AActor* From, int32 Heal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamage(AActor* From, int32 Damage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNullifyingDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrHPRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrHP() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    void DoHeal(AActor* From, int32 Heal);
    
    UFUNCTION(BlueprintCallable)
    void DoDamage(AActor* From, int32 Damage, bool bJustGuarding, bool bGuarding);
    
};

