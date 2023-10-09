#pragma once
#include "CoreMinimal.h"
#include "SetBlackboardValue.h"
#include "SetBlackboardIntValue.generated.h"

UCLASS()
class ZENITH_API USetBlackboardIntValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ValueToSet;
    
    USetBlackboardIntValue();
};

