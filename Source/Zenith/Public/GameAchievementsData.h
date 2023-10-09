#pragma once
#include "CoreMinimal.h"
#include "EZenithAchievement.h"
#include "GameAchievementsData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FGameAchievementsData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<EZenithAchievement> Achievements;
    
    FGameAchievementsData();
};

