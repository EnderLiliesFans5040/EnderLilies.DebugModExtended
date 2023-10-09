#pragma once
#include "CoreMinimal.h"
#include "StateBusy.h"
#include "StateKnockback.generated.h"

UCLASS()
class ZENITH_API UStateKnockback : public UStateBusy {
    GENERATED_BODY()
public:
    UStateKnockback();
};

