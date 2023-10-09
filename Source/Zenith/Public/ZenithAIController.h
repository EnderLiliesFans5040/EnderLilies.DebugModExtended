#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "ZenithAIBaseController.h"
#include "ZenithAIController.generated.h"

class AActor;
class UParameterEnemyComponent;
class UBehaviorTree;
class AZenithCharacter;

UCLASS()
class ZENITH_API AZenithAIController : public AZenithAIBaseController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UParameterEnemyComponent* ParameterEnemyComponent;
    
    UPROPERTY(EditAnywhere)
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFaction Faction;
    
private:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* BehaviourTree_NGPlus;
    
public:
    AZenithAIController();
protected:
    UFUNCTION()
    void OnPawnDeathEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnDeath();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeTarget(const AActor* NewTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FName GetSpawnLocationBlackboardKey() const;
    
public:
    UFUNCTION(BlueprintPure)
    AZenithCharacter* GetControlledCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

