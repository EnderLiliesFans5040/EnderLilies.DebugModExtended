#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AreaData.generated.h"

USTRUCT(BlueprintType)
struct FAreaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText AreaName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDisplayAreaDiscovery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DifficultyOverrideAreaID;
    
    ZENITH_API FAreaData();
};

