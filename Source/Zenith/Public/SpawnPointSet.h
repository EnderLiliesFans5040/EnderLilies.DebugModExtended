#pragma once
#include "CoreMinimal.h"
#include "SpawnPointSet.generated.h"

USTRUCT()
struct FSpawnPointSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FName> Set;
    
    ZENITH_API FSpawnPointSet();
};

