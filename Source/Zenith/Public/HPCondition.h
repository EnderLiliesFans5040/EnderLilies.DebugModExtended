#pragma once
#include "CoreMinimal.h"
#include "ComparisonCondition.h"
#include "HPCondition.generated.h"

UCLASS(Blueprintable)
class ZENITH_API UHPCondition : public UComparisonCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComparingValue;
    
    UHPCondition();

};

