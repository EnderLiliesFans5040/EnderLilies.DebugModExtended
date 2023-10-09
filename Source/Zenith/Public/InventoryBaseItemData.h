#pragma once
#include "CoreMinimal.h"
#include "InventoryBaseItemData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName RowName;
    
    ZENITH_API FInventoryBaseItemData();
};

