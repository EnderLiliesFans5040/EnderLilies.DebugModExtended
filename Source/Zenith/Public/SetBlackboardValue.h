#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SetBlackboardValue.generated.h"

UCLASS(Abstract, Blueprintable)
class ZENITH_API USetBlackboardValue : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector KeyToChange;
    
    USetBlackboardValue();

};

