#pragma once
#include "CoreMinimal.h"
#include "NameSet.generated.h"

USTRUCT(BlueprintType)
struct FNameSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FName> Set;
    
    ZENITH_API FNameSet();
};

