#pragma once
#include "CoreMinimal.h"
#include "ObjectArray.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FObjectArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UObject*> Entries;
    
    ZENITH_API FObjectArray();
};

