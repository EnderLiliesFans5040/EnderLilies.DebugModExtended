#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "ZenithAIBaseController.generated.h"

class UBehaviorTree;
class UBlackboardData;

UCLASS(Abstract, Blueprintable)
class ZENITH_API AZenithAIBaseController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
public:
    AZenithAIBaseController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAllLogic();
    
    UFUNCTION(BlueprintCallable)
    void ResumeLogic();
    
    UFUNCTION(BlueprintCallable)
    void RestartLogic();
    
    UFUNCTION(BlueprintCallable)
    void PauseLogic();
    
};

