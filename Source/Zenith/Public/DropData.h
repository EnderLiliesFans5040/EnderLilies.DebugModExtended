#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DropGroup.h"
#include "DropData.generated.h"

USTRUCT(BlueprintType)
struct FDropData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDropGroup> Drops;
    
    ZENITH_API FDropData();
};

