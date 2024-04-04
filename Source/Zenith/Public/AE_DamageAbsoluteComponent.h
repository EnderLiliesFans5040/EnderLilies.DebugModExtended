#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectDamageComponent.h"
#include "AE_DamageAbsoluteComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_DamageAbsoluteComponent : public UAbilityEffectDamageComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
public:
    UAE_DamageAbsoluteComponent(const FObjectInitializer& ObjectInitializer);

};

