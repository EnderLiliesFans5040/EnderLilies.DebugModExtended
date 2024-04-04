#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UIBinding.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FUIBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeyBindings;
    
    FUIBinding();
};

