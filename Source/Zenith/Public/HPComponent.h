#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "HPUpdateEventDelegate.h"
#include "HPDeathEventDelegate.h"
#include "HPDamageEventDelegate.h"
#include "HPComponent.generated.h"

class UStateComponent;
class AActor;
class UState;
class UFactionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHPComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHPUpdateEvent OnHPChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHPDeathEvent OnDeath;
    
    UPROPERTY(BlueprintAssignable)
    FHPDamageEvent OnReceiveDamage;
    
    UPROPERTY(BlueprintAssignable)
    FHPDamageEvent OnReceiveHeal;
    
    UPROPERTY(BlueprintAssignable)
    FHPUpdateEvent OnMaxHPChanged;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> DamageNullifyingStates;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxHP;
    
    UPROPERTY(Transient)
    int32 CurrHP;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UFactionComponent* FactionComponent;
    
public:
    UHPComponent();
    UFUNCTION(BlueprintCallable)
    void SetMaxHP(int32 NewMaxHP);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeal(AActor* From, int32 Heal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamage(AActor* From, int32 Damage);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNullifyingDamage() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxHP() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrHPRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrHP() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    void DoHeal(AActor* From, int32 Heal);
    
    UFUNCTION(BlueprintCallable)
    void DoDamage(AActor* From, int32 Damage, bool bJustGuarding, bool bGuarding);
    
};

