#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "EStaminaDamageEffectType.h"
#include "AE_StaminaDamageAbsolute.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_StaminaDamageAbsolute : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EStaminaDamageEffectType DamageEffectType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Damage;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetPercentDamage;
    
public:
    UAE_StaminaDamageAbsolute();
};

