#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "OverrideClampedInArea.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UOverrideClampedInArea : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSetClampedInArea;
    
    UOverrideClampedInArea();
};

