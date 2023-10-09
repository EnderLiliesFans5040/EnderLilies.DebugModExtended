#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UIBinding.generated.h"

USTRUCT()
struct ZENITH_API FUIBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FKey> KeyBindings;
    
    FUIBinding();
};

