#pragma once
#include "CoreMinimal.h"
#include "EConditionType.h"
#include "BehaviorTree/BTDecorator.h"
#include "ComparisonCondition.generated.h"

class APawn;
class AAIController;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UComparisonCondition : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EConditionType ConditionType;
    
    UComparisonCondition();
protected:
    UFUNCTION(BlueprintNativeEvent)
    float GetValueToCompare(const AAIController* AIController, const APawn* Pawn) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetComparingValue() const;
    
};

