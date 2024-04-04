#pragma once
#include "CoreMinimal.h"
#include "EDamageAttribute.h"
#include "InventoryBaseItemData.h"
#include "ParameterComponent.h"
#include "ParameterPlayerEventDelegate.h"
#include "ParameterPlayerLevelEventDelegate.h"
#include "ParameterPlayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UParameterPlayerComponent : public UParameterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParameterPlayerEvent OnAddedExperiencePointsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParameterPlayerLevelEvent OnLevelChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParameterPlayerEvent OnSkinLevelChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperiencePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkinLevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinalPassivePartCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFinalPassivePartCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHPBonusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMPBonusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStaminaBonusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPRestoreBonusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCutPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageAttribute, float> DamageCurPercentagePerAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpBonusPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostDamageInvincibilityBonusTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentBonusOnMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentBonusWhenGrounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentBonusWhenAirborne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentBonusWhenSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaDamagePercentBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDamagePercentBonus;
    
public:
    UParameterPlayerComponent(const FObjectInitializer& ObjectInitializer);

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
    UFUNCTION(BlueprintCallable)
    void OnItemParameterAdded(const FInventoryBaseItemData& InventoryParameterData);
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeMaxPlayerLevelChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxLevel(bool bIgnoreOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSkinLevelOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkinLevel(bool bWithoutOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNecessaryExpPointsForLevelUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel(bool bIgnoreOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFinalPassivePartMaxCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFinalPassivePartCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExperienceRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExperiencePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpBonusPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusRateAdjustedExperiencePoints(int32 DefaultPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

