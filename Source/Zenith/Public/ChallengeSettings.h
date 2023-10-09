#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameSettingsDelegateDelegate.h"
#include "ChallengeSettingsData.h"
#include "ChallengeSettings.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UChallengeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameSettingsDelegate OnPlayerCantHealChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGameSettingsDelegate OnMaxPlayerLevelChanged;
    
private:
    UPROPERTY(VisibleAnywhere)
    FChallengeSettingsData ChallengeSettingsData;
    
public:
    UChallengeSettings();
    UFUNCTION(BlueprintCallable)
    bool SetPlayerOneShot(bool bNewPlayerOneShot);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerCantHeal(bool bPlayerCantHeal);
    
    UFUNCTION(BlueprintCallable)
    int32 SetMaxSpiritLevel(int32 NewMaxSpiritLevel);
    
    UFUNCTION(BlueprintCallable)
    int32 SetMaxPlayerLevel(int32 NewMaxPlayerLevel);
    
    UFUNCTION(BlueprintCallable)
    float SetEnemyMaxHPFactor(float NewMaxHPFactor);
    
    UFUNCTION(BlueprintCallable)
    float SetEnemyAttackFactor(float NewAttackFactor);
    
    UFUNCTION(BlueprintCallable)
    float SetContactDamageFactor(float NewContactDamageFactor);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObj"))
    bool IsUnlocked(const UObject* WorldContextObj);
    
    UFUNCTION(BlueprintPure)
    bool HasAnyCustomSettings() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlayerOneShot() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlayerCantHeal() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxSpiritLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxPlayerLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyMaxHPFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyAttackFactor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDefaultPlayerOneShot() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDefaultPlayerCantHeal() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefaultMaxSpiritLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefaultMaxPlayerLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultEnemyMaxHPFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultEnemyAttackFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultContactDamageFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetContactDamageFactor() const;
    
};

