#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CounterAttackComponent.generated.h"

class UStateComponent;
class UUserWidget;
class UCommandQueueComponent;
class AAbility;
class UCommandAction;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UCounterAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> CounterUIClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanUseCounterAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeDilatationTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeDilatationDuration;
    
private:
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UCommandQueueComponent* CommandComponent;
    
public:
    UCounterAttackComponent();
private:
    UFUNCTION()
    void OnJustGuard(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker);
    
    UFUNCTION()
    void OnExecuteCommandWhileCounter(UCommandAction* CommandAction);
    
};

