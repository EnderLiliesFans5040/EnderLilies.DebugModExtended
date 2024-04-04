#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectDamageComponent.h"
#include "EDamageEffectType.h"
#include "AE_DamageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_DamageComponent : public UAbilityEffectDamageComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageEffectType DamageEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPercentageDamage;
    
public:
    UAE_DamageComponent(const FObjectInitializer& ObjectInitializer);

};

