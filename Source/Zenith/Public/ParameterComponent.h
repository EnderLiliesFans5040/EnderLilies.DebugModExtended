#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDamageAttribute.h"
#include "ParameterComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UParameterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunDamageFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaDamageFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPostDamageInvincibilityBonusTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMPRestoreBonusPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageCutPercentageForAttribute(EDamageAttribute DamageAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageCutPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageAfterDamageCut(int32 RawDamage, EDamageAttribute DamageAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttackFromRate(float Rate, bool bIgnoreOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttack(bool bIgnoreOverride) const;
    
};

