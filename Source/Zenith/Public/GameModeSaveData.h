#pragma once
#include "CoreMinimal.h"
#include "EGameEndingType.h"
#include "ChallengeSettingsData.h"
#include "GameStats.h"
#include "ClearedObjectsSaveData.h"
#include "BossRushData.h"
#include "GameModeSaveData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FGameModeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 DifficultyLevel;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, int32> DifficultyForAreas;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<EGameEndingType, int32> ReachedGameEndings;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NewGamePlusGeneration;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<EGameEndingType, int32> PreviousRunsReachedGameEndings;
    
    UPROPERTY()
    FChallengeSettingsData ChallengeSettings;
    
    UPROPERTY(BlueprintReadOnly)
    FGameStats GameStats;
    
    UPROPERTY()
    FClearedObjectsSaveData ClearedObjects;
    
    UPROPERTY()
    FBossRushData BossRushData;
    
    FGameModeSaveData();
};

