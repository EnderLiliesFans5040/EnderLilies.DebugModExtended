#pragma once
#include "CoreMinimal.h"
#include "ComparisonCondition.h"
#include "HPCondition.generated.h"

UCLASS()
class ZENITH_API UHPCondition : public UComparisonCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ComparingValue;
    
    UHPCondition();
};

