#pragma once
#include "CoreMinimal.h"
#include "SpawnPointSet.generated.h"

USTRUCT(BlueprintType)
struct FSpawnPointSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Set;
    
    ZENITH_API FSpawnPointSet();
};

