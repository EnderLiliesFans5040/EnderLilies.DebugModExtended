#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EConditionType.h"
#include "ComparisonCondition.generated.h"

class AAIController;
class APawn;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UComparisonCondition : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionType ConditionType;
    
    UComparisonCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetValueToCompare(const AAIController* AIController, const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetComparingValue() const;
    
};

