#pragma once
#include "CoreMinimal.h"
#include "BossRushRecordData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FBossRushRecordData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Time;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NewGamePlusGeneration;
    
    FBossRushRecordData();
};

