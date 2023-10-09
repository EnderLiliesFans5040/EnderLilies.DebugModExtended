#pragma once
#include "CoreMinimal.h"
#include "EZenithAchievement.h"
#include "ZenithBaseSubsystem.h"
#include "AchievementData.h"
#include "AchievementsSubsystem.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class ZENITH_API UAchievementsSubsystem : public UZenithBaseSubsystem {
    GENERATED_BODY()
public:
    UAchievementsSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(EZenithAchievement Achievement);
    
    UFUNCTION(BlueprintCallable)
    bool ResetAchievements();
    
private:
    UFUNCTION()
    void OnMainProfileChanged();
    
    UFUNCTION()
    void OnGameDataLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyActionPileLv3();
    
    UFUNCTION(BlueprintCallable)
    void NotifyActionDashLv3();
    
    UFUNCTION(BlueprintCallable)
    bool IsAchievementUnlocked(EZenithAchievement Achievement);
    
    UFUNCTION(BlueprintPure)
    float GetAchievementProgress(EZenithAchievement Achievement) const;
    
    UFUNCTION(BlueprintPure)
    FName GetAchievementID(EZenithAchievement Achievement) const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetAchievementDataTable() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAchievementData(EZenithAchievement Achievement, FAchievementData& out_AchievementData) const;
    
};

