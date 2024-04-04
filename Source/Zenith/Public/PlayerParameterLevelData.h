#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayerParameterLevelData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerParameterLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NecessaryExperiencePointsForLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stamina;
    
    ZENITH_API FPlayerParameterLevelData();
};

