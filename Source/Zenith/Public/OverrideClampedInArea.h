#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "OverrideClampedInArea.generated.h"

UCLASS(Blueprintable)
class ZENITH_API UOverrideClampedInArea : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetClampedInArea;
    
    UOverrideClampedInArea();

};

