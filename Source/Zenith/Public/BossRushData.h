#pragma once
#include "CoreMinimal.h"
#include "BossRushRecordData.h"
#include "BossRushData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FBossRushData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBossRushRecordData> Records;
    
    FBossRushData();
};

