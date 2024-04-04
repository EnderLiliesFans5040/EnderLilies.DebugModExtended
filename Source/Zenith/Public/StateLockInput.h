#pragma once
#include "CoreMinimal.h"
#include "State.h"
#include "StateLockInput.generated.h"

UCLASS(Blueprintable)
class ZENITH_API UStateLockInput : public UState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Inputs;
    
    UStateLockInput();

};

