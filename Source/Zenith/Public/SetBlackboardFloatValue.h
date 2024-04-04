#pragma once
#include "CoreMinimal.h"
#include "SetBlackboardValue.h"
#include "SetBlackboardFloatValue.generated.h"

UCLASS(Blueprintable)
class ZENITH_API USetBlackboardFloatValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueToSet;
    
    USetBlackboardFloatValue();

};

