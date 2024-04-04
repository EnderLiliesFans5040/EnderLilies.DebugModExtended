#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "EDamageAttribute.h"
#include "AbilityEffectDamageComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityEffectDamageComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageAttribute DamageAttribute;
    
public:
    UAbilityEffectDamageComponent(const FObjectInitializer& ObjectInitializer);

};

