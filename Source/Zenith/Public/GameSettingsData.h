#pragma once
#include "CoreMinimal.h"
#include "EGameEndingType.h"
#include "GameSettingsData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FGameSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Gamma;
    
    UPROPERTY()
    int32 ResolutionScale;
    
    UPROPERTY()
    bool bDisplayDamageValues;
    
    UPROPERTY()
    bool bDisplayHealValues;
    
    UPROPERTY()
    bool bDisplayPlayerUI;
    
    UPROPERTY()
    bool bDisplayEnemyFloatingGauges;
    
    UPROPERTY()
    bool bUseForceFeedback;
    
    UPROPERTY()
    bool bUseCameraShake;
    
    UPROPERTY()
    bool bDisplayInternalAchievementNotifications;
    
    UPROPERTY()
    bool bHoldForSummonSetSwitch;
    
    UPROPERTY()
    bool bEnableDamageAreaPostProcess;
    
    UPROPERTY()
    bool bNoAutoClimbWhilePressingDown;
    
    UPROPERTY(VisibleAnywhere)
    TArray<EGameEndingType> ReachedGameEndings;
    
    FGameSettingsData();
};

