#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EZenithAchievement.h"
#include "SaveAchievements.generated.h"

UCLASS()
class ZENITH_API USaveAchievements : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<EZenithAchievement> Achievements;
    
    USaveAchievements();
};

