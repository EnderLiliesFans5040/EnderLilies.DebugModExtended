#pragma once
#include "CoreMinimal.h"
#include "ParameterComponent.h"
#include "InventoryBaseItemData.h"
#include "ParameterPlayerEventDelegate.h"
#include "ParameterPlayerLevelEventDelegate.h"
#include "EDamageAttribute.h"
#include "ParameterPlayerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UParameterPlayerComponent : public UParameterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FParameterPlayerEvent OnAddedExperiencePointsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FParameterPlayerLevelEvent OnLevelChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FParameterPlayerEvent OnSkinLevelChangedDelegate;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultHP;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultMP;
    
    UPROPERTY(VisibleAnywhere)
    int32 Level;
    
    UPROPERTY(VisibleAnywhere)
    int32 ExperiencePoints;
    
    UPROPERTY(VisibleAnywhere)
    int32 SkinLevel;
    
    UPROPERTY(VisibleAnywhere)
    int32 SkinLevelOverride;
    
    UPROPERTY(VisibleAnywhere)
    int32 FinalPassivePartCount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxFinalPassivePartCount;
    
    UPROPERTY(VisibleAnywhere)
    float MaxHPBonusPercentage;
    
    UPROPERTY(VisibleAnywhere)
    float MaxMPBonusPercentage;
    
    UPROPERTY(VisibleAnywhere)
    float MaxStaminaBonusPercentage;
    
    UPROPERTY(VisibleAnywhere)
    float MPRestoreBonusPercentage;
    
    UPROPERTY(VisibleAnywhere)
    float DamageCutPercentage;
    
    UPROPERTY(VisibleAnywhere)
    TMap<EDamageAttribute, float> DamageCurPercentagePerAttribute;
    
    UPROPERTY(VisibleAnywhere)
    float ExpBonusPercent;
    
    UPROPERTY(VisibleAnywhere)
    float PostDamageInvincibilityBonusTime;
    
    UPROPERTY(VisibleAnywhere)
    float DamagePercentBonus;
    
    UPROPERTY(VisibleAnywhere)
    float DamagePercentBonusOnMaxHP;
    
    UPROPERTY(VisibleAnywhere)
    float DamagePercentBonusWhenGrounded;
    
    UPROPERTY(VisibleAnywhere)
    float DamagePercentBonusWhenAirborne;
    
    UPROPERTY(VisibleAnywhere)
    float DamagePercentBonusWhenSwimming;
    
    UPROPERTY(VisibleAnywhere)
    float StaminaDamagePercentBonus;
    
    UPROPERTY(VisibleAnywhere)
    float StunDamagePercentBonus;
    
public:
    UParameterPlayerComponent();
    UFUNCTION(BlueprintCallable)
    void SubStunDamagePercentBonus(float StunDamagePercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubStaminaDamagePercentBonus(float StaminaDamagePercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubPostDamageInvincibilityBonusTime(float BonusTimeToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubMPRestorePercentBonus(float MPPercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubMaxStaminaBonusPercentage(float MaxStaminaBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubMaxMPBonusPercentage(float MaxMPBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubMaxHPBonusPercentage(float MaxHPBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubExpPercentBonus(float ExpBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubDamagePercentBonusWhenSwimming(float DamagePercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubDamagePercentBonusWhenGrounded(float DamagePercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubDamagePercentBonusWhenAirborne(float DamagePercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubDamagePercentBonusOnMaxHP(float DamagePercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubDamagePercentBonus(float DamagePercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubDamageCutPercentageForAttribute(EDamageAttribute DamageAttribute, float DamageCutToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubDamageCutPercentage(float DamageCutToSub);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinLevelOverride(int32 NewSkinLevelOverride, bool bForceOverride);
    
    UFUNCTION(BlueprintCallable)
    int32 SetSkinLevel(int32 NewSkinLevel);
    
    UFUNCTION(BlueprintCallable)
    int32 SetLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    int32 SetFinalPassivePartCount(int32 NewFinalPassivePartCount);
    
private:
    UFUNCTION()
    void OnItemParameterAdded(const FInventoryBaseItemData& InventoryParameterData);
    
    UFUNCTION()
    void OnChallengeMaxPlayerLevelChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMaxLevel(bool bIgnoreOverride) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSkinLevelOverride() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSkinLevel(bool bWithoutOverride) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNecessaryExpPointsForLevelUp() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevel(bool bIgnoreOverride) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFinalPassivePartMaxCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFinalPassivePartCount() const;
    
    UFUNCTION(BlueprintPure)
    float GetExperienceRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetExperiencePoints() const;
    
    UFUNCTION(BlueprintPure)
    float GetExpBonusPercent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBonusRateAdjustedExperiencePoints(int32 DefaultPoints) const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackBonusPercentage() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSkinLevelOverride();
    
    UFUNCTION(BlueprintCallable)
    void AddStunDamagePercentBonus(float StunDamagePercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddStaminaDamagePercentBonus(float StaminaDamagePercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSkinLevel();
    
    UFUNCTION(BlueprintCallable)
    void AddPostDamageInvincibilityBonusTime(float BonusTimeToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddMPRestorePercentBonus(float MPPercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddMaxStaminaBonusPercentage(float MaxStaminaBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddMaxMPBonusPercentage(float MaxMPBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddMaxHPBonusPercentage(float MaxHPBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddFinalPassivePartCount();
    
    UFUNCTION(BlueprintCallable)
    void AddExpPercentBonus(float ExpBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddExperiencePoints(int32 PointsToAdd, bool bAppliedBonusExpRate);
    
    UFUNCTION(BlueprintCallable)
    void AddDamagePercentBonusWhenSwimming(float DamagePercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddDamagePercentBonusWhenGrounded(float DamagePercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddDamagePercentBonusWhenAirborne(float DamagePercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddDamagePercentBonusOnMaxHP(float DamagePercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddDamagePercentBonus(float DamagePercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageCutPercentageForAttribute(EDamageAttribute DamageAttribute, float DamageCutToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageCutPercentage(float DamageCutToAdd);
    
};

