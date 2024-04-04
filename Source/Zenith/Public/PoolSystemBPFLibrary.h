#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PoolSystemBPFLibrary.generated.h"

class UObject;
class UPoolSystem;

UCLASS(Blueprintable)
class UPoolSystemBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPoolSystemBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPoolSystem* GetPoolSystem(UObject* WorldContextObject);
    
};

