#pragma once
#include "CoreMinimal.h"
#include "ChallengeSettingsData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FChallengeSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bChallengeSettingsUnlocked;
    
    UPROPERTY()
    bool bPlayerOneShotKill;
    
    UPROPERTY()
    bool bPlayerCantHeal;
    
    UPROPERTY()
    int32 MaxPlayerLevel;
    
    UPROPERTY()
    int32 MaxSpiritLevel;
    
    UPROPERTY()
    float ContactDamageFactor;
    
    UPROPERTY()
    float EnemyAttackFactor;
    
    UPROPERTY()
    float EnemyMaxHPFactor;
    
    FChallengeSettingsData();
};

