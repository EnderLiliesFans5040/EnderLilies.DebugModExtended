#pragma once
#include "CoreMinimal.h"
#include "StateBusy.h"
#include "StateDead.generated.h"

UCLASS()
class ZENITH_API UStateDead : public UStateBusy {
    GENERATED_BODY()
public:
    UStateDead();
};

