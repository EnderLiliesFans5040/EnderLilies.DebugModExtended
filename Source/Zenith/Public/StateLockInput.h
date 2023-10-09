#pragma once
#include "CoreMinimal.h"
#include "State.h"
#include "StateLockInput.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UStateLockInput : public UState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Inputs;
    
    UStateLockInput();
};

