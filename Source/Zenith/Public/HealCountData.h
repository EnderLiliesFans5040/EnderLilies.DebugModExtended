#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HealCountData.generated.h"

USTRUCT(BlueprintType)
struct FHealCountData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxHealCount;
    
    ZENITH_API FHealCountData();
};

