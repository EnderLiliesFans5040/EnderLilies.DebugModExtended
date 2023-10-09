#pragma once
#include "CoreMinimal.h"
#include "SetBlackboardValue.h"
#include "SetBlackboardBoolValue.generated.h"

UCLASS()
class ZENITH_API USetBlackboardBoolValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ValueToSet;
    
    USetBlackboardBoolValue();
};

