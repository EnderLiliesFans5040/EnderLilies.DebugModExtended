#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LanguageBPFLibrary.generated.h"

UCLASS(Blueprintable)
class ULanguageBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULanguageBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetDefaultLanguageAsCurrent();
    
};

