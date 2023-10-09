#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PoolSystemBPFLibrary.generated.h"

class UPoolSystem;
class UObject;

UCLASS(BlueprintType)
class UPoolSystemBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPoolSystemBPFLibrary();
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPoolSystem* GetPoolSystem(UObject* WorldContextObject);
    
};

