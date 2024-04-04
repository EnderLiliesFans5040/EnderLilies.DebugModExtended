#pragma once
#include "CoreMinimal.h"
#include "SetBlackboardValue.h"
#include "SetBlackboardIntValue.generated.h"

UCLASS(Blueprintable)
class ZENITH_API USetBlackboardIntValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueToSet;
    
    USetBlackboardIntValue();

};

