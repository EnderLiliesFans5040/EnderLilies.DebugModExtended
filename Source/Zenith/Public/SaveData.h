#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameModeSaveData.h"
#include "PlayerSaveData.h"
#include "GameAchievementsData.h"
#include "SaveData.generated.h"

UCLASS(BlueprintType)
class ZENITH_API USaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UPROPERTY()
    FString ValidGameVersion;
    
    UPROPERTY()
    int32 ValidBuildVersion;
    
    UPROPERTY()
    int32 BackupIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FPlayerSaveData Player;
    
    UPROPERTY(BlueprintReadOnly)
    FGameModeSaveData GameMode;
    
    UPROPERTY()
    FGameAchievementsData GameAchievements;
    
    USaveData();
};

