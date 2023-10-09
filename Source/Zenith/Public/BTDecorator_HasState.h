#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_HasState.generated.h"

class UState;

UCLASS(BlueprintType)
class ZENITH_API UBTDecorator_HasState : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlackboardKeySelector TargetActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UState> State;
    
public:
    UBTDecorator_HasState();
};

