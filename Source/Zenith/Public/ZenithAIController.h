#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "ZenithAIBaseController.h"
#include "ZenithAIController.generated.h"

class AActor;
class AZenithCharacter;
class UBehaviorTree;
class UParameterEnemyComponent;

UCLASS(Blueprintable)
class ZENITH_API AZenithAIController : public AZenithAIBaseController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParameterEnemyComponent* ParameterEnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree_NGPlus;
    
public:
    AZenithAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDeathEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnDeath();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeTarget(const AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSpawnLocationBlackboardKey() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZenithCharacter* GetControlledCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

