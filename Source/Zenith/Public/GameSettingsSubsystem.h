#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGameEndingType.h"
#include "GameSettingsDelegateDelegate.h"
#include "GameSettingsSubsystem.generated.h"

UCLASS(Blueprintable)
class ZENITH_API UGameSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnGameSettingsSaved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnDisplayPlayerUIChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnDisplayEnemyFloatingGaugesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseForceFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseCameraShake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResolutionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoAutoClimbWhilePressingDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldForSummonSetSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableDamageAreaPostProcess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayPlayerUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayInternalAchievementNotifications() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayHealValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayEnemyFloatingGauges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayDamageValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidReachGameEnding(EGameEndingType GameEndingType) const;
    
};

