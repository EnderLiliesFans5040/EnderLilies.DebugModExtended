#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "KnockbackData.h"
#include "AE_KnockbackComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_KnockbackComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bBypassStaminaCheck;
    
    UPROPERTY(EditDefaultsOnly)
    FKnockbackData KnockbackData;
    
public:
    UAE_KnockbackComponent();
    UFUNCTION(BlueprintPure)
    FKnockbackData GetKnockbackData() const;
    
};

