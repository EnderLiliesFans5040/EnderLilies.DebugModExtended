#pragma once
#include "CoreMinimal.h"
#include "EZenithAchievement.h"
#include "GameAchievementsData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FGameAchievementsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EZenithAchievement> Achievements;
    
    FGameAchievementsData();
};

