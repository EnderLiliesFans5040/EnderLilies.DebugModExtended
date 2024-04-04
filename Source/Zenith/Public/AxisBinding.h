#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "AxisBinding.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FAxisBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> KeyBindings;
    
    FAxisBinding();
};

