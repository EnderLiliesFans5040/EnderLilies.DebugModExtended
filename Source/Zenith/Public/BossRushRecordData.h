#pragma once
#include "CoreMinimal.h"
#include "BossRushRecordData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FBossRushRecordData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGamePlusGeneration;
    
    FBossRushRecordData();
};

