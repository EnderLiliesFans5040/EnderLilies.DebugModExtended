#pragma once
#include "CoreMinimal.h"
#include "StateBusy.h"
#include "StateStun.generated.h"

UCLASS()
class ZENITH_API UStateStun : public UStateBusy {
    GENERATED_BODY()
public:
    UStateStun();
};

