#pragma once
#include "CoreMinimal.h"
#include "SetBlackboardValue.h"
#include "SetBlackboardBoolValue.generated.h"

UCLASS(Blueprintable)
class ZENITH_API USetBlackboardBoolValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValueToSet;
    
    USetBlackboardBoolValue();

};

