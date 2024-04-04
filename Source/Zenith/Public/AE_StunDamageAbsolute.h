#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AE_StunDamageAbsolute.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_StunDamageAbsolute : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
public:
    UAE_StunDamageAbsolute(const FObjectInitializer& ObjectInitializer);

};

