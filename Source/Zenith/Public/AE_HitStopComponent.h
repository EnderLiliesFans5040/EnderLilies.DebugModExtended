#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectTimedComponent.h"
#include "AE_HitStopComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_HitStopComponent : public UAbilityEffectTimedComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool ExecuteOnInvoker;
    
    UPROPERTY(EditDefaultsOnly)
    bool ExecuteOnTarget;
    
public:
    UAE_HitStopComponent();
};

