#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayerParameterLevelData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerParameterLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NecessaryExperiencePointsForLevelUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Attack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stamina;
    
    ZENITH_API FPlayerParameterLevelData();
};

