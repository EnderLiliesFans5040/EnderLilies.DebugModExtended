#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DropGroup.h"
#include "DropData.generated.h"

USTRUCT(BlueprintType)
struct FDropData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDropGroup> Drops;
    
    ZENITH_API FDropData();
};

