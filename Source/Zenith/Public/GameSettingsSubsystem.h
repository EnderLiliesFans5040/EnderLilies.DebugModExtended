#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameSettingsDelegateDelegate.h"
#include "EGameEndingType.h"
#include "GameSettingsSubsystem.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UGameSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameSettingsDelegate OnGameSettingsSaved;
    
    UPROPERTY(BlueprintAssignable)
    FGameSettingsDelegate OnDisplayPlayerUIChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGameSettingsDelegate OnDisplayEnemyFloatingGaugesChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGameSettingsDelegate OnEnableDamageAreaPostProcessChanged;
    
    UGameSettingsSubsystem();
    UFUNCTION(BlueprintCallable)
    bool SetUseForceFeedback(bool bUseForceFeedback);
    
    UFUNCTION(BlueprintCallable)
    bool SetUseCameraShake(bool bUseCameraShake);
    
    UFUNCTION(BlueprintCallable)
    float SetResolutionScale(float NewResolutionScale);
    
    UFUNCTION(BlueprintCallable)
    bool SetNoAutoClimbWhilePressingDown(bool bNoAutoClimbWhilePressingDown);
    
    UFUNCTION(BlueprintCallable)
    bool SetHoldForSummonSetSwitch(bool bSetHoldForSummonSetSwitch);
    
    UFUNCTION(BlueprintCallable)
    float SetGammaPercentage(float GammaPercentage);
    
    UFUNCTION(BlueprintCallable)
    float SetGamma(float NewGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetGameEndingReached(EGameEndingType GameEndingType);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnableDamageAreaPostProcess(bool bEnableDamageAreaPostProcess);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayPlayerUI(bool bDisplayPlayerUI);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayInternalAchievementNotifications(bool bDisplayNotifications);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayHealValues(bool bDisplayHealValues);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayEnemyFloatingGauges(bool bDisplayEnemyFloatingGauges);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayDamageValues(bool bDisplayDamageValues);
    
    UFUNCTION(BlueprintCallable)
    void ResetVideoSettingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameSettingsToDefault();
    
    UFUNCTION(BlueprintPure)
    bool GetUseForceFeedback() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseCameraShake() const;
    
    UFUNCTION(BlueprintPure)
    float GetResolutionScale() const;
    
    UFUNCTION(BlueprintPure)
    bool GetNoAutoClimbWhilePressingDown() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHoldForSummonSetSwitch() const;
    
    UFUNCTION(BlueprintPure)
    float GetGammaPercentage() const;
    
    UFUNCTION(BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableDamageAreaPostProcess() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayPlayerUI() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayInternalAchievementNotifications() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayHealValues() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayEnemyFloatingGauges() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayDamageValues() const;
    
    UFUNCTION(BlueprintPure)
    bool DidReachGameEnding(EGameEndingType GameEndingType) const;
    
};

