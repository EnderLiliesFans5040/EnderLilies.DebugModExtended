#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InitialSpiritLevelData.generated.h"

USTRUCT(BlueprintType)
struct FInitialSpiritLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialLevel;
    
    ZENITH_API FInitialSpiritLevelData();
};

