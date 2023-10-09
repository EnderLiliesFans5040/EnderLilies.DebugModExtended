#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SetBlackboardValue.generated.h"

UCLASS(Abstract, BlueprintType)
class ZENITH_API USetBlackboardValue : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlackboardKeySelector KeyToChange;
    
    USetBlackboardValue();
};

