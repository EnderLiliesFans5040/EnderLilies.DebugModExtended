#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EZenithAchievement.h"
#include "SaveAchievements.generated.h"

UCLASS(Blueprintable)
class ZENITH_API USaveAchievements : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EZenithAchievement> Achievements;
    
    USaveAchievements();

};

