#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AbilityEffectTimedComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityEffectTimedComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float AbilityEffectDuration;
    
public:
    UAbilityEffectTimedComponent();
    UFUNCTION(BlueprintPure)
    float GetAbilityEffectDuration() const;
    
};

