#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AreaData.generated.h"

USTRUCT(BlueprintType)
struct FAreaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayAreaDiscovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DifficultyOverrideAreaID;
    
    ZENITH_API FAreaData();
};

