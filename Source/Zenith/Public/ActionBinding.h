#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "ActionBinding.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FActionBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FInputActionKeyMapping> KeyBindings;
    
    FActionBinding();
};

