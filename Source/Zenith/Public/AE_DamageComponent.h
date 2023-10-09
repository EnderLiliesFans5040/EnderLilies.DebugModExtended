#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectDamageComponent.h"
#include "EDamageEffectType.h"
#include "AE_DamageComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_DamageComponent : public UAbilityEffectDamageComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EDamageEffectType DamageEffectType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AbsoluteDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetPercentageDamage;
    
public:
    UAE_DamageComponent();
};

