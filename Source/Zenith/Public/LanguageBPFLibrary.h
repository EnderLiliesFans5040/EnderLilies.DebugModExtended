#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LanguageBPFLibrary.generated.h"

UCLASS(BlueprintType)
class ULanguageBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULanguageBPFLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetDefaultLanguageAsCurrent();
    
};

