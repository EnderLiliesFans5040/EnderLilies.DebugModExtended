#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "EStaminaDamageEffectType.h"
#include "AE_StaminaDamageAbsolute.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_StaminaDamageAbsolute : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaminaDamageEffectType DamageEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPercentDamage;
    
public:
    UAE_StaminaDamageAbsolute(const FObjectInitializer& ObjectInitializer);

};

