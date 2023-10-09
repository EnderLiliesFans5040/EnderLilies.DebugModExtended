#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "ZenithAIBaseController.generated.h"

class UBlackboardData;
class UBehaviorTree;

UCLASS(Abstract)
class ZENITH_API AZenithAIBaseController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(EditDefaultsOnly)
    UBlackboardData* BlackboardAsset;
    
public:
    AZenithAIBaseController();
    UFUNCTION(BlueprintCallable)
    void StopAllLogic();
    
    UFUNCTION(BlueprintCallable)
    void ResumeLogic();
    
    UFUNCTION(BlueprintCallable)
    void RestartLogic();
    
    UFUNCTION(BlueprintCallable)
    void PauseLogic();
    
};

