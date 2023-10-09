#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDamageAttribute.h"
#include "ParameterComponent.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UParameterComponent();
    UFUNCTION(BlueprintPure)
    float GetStunDamageFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetStaminaDamageFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetPostDamageInvincibilityBonusTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMPRestoreBonusPercentage() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageCutPercentageForAttribute(EDamageAttribute DamageAttribute) const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageCutPercentage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDamageAfterDamageCut(int32 RawDamage, EDamageAttribute DamageAttribute) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttackFromRate(float Rate, bool bIgnoreOverride) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttack(bool bIgnoreOverride) const;
    
};

