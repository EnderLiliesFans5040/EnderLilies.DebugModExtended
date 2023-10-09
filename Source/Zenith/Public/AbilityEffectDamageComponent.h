#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "EDamageAttribute.h"
#include "AbilityEffectDamageComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityEffectDamageComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EDamageAttribute DamageAttribute;
    
public:
    UAbilityEffectDamageComponent();
};

