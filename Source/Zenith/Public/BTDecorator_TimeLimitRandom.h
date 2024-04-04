#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_TimeLimit.h"
#include "BTDecorator_TimeLimitRandom.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_TimeLimitRandom : public UBTDecorator_TimeLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimitMin;
    
    UBTDecorator_TimeLimitRandom();

};

