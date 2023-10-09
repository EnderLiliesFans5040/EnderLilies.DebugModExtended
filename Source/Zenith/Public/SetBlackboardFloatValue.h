#pragma once
#include "CoreMinimal.h"
#include "SetBlackboardValue.h"
#include "SetBlackboardFloatValue.generated.h"

UCLASS()
class ZENITH_API USetBlackboardFloatValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ValueToSet;
    
    USetBlackboardFloatValue();
};

