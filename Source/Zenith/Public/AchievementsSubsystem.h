#pragma once
#include "CoreMinimal.h"
#include "AchievementData.h"
#include "EZenithAchievement.h"
#include "ZenithBaseSubsystem.h"
#include "AchievementsSubsystem.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ZENITH_API UAchievementsSubsystem : public UZenithBaseSubsystem {
    GENERATED_BODY()
public:
    UAchievementsSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(EZenithAchievement Achievement);
    
    UFUNCTION(BlueprintCallable)
    bool ResetAchievements();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMainProfileChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnGameDataLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyActionPileLv3();
    
    UFUNCTION(BlueprintCallable)
    void NotifyActionDashLv3();
    
    UFUNCTION(BlueprintCallable)
    bool IsAchievementUnlocked(EZenithAchievement Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAchievementProgress(EZenithAchievement Achievement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAchievementID(EZenithAchievement Achievement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetAchievementDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAchievementData(EZenithAchievement Achievement, FAchievementData& out_AchievementData) const;
    
};

