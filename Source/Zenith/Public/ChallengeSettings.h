#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChallengeSettingsData.h"
#include "GameSettingsDelegateDelegate.h"
#include "ChallengeSettings.generated.h"

UCLASS(Blueprintable)
class ZENITH_API UChallengeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnPlayerCantHealChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnMaxPlayerLevelChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    bool IsUnlocked(const UObject* WorldContextObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyCustomSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerOneShot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerCantHeal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSpiritLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlayerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyMaxHPFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyAttackFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDefaultPlayerOneShot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDefaultPlayerCantHeal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultMaxSpiritLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultMaxPlayerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultEnemyMaxHPFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultEnemyAttackFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultContactDamageFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContactDamageFactor() const;
    
};

