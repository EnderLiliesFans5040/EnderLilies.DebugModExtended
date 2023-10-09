#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AE_StunDamageAbsolute.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_StunDamageAbsolute : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 Damage;
    
public:
    UAE_StunDamageAbsolute();
};

