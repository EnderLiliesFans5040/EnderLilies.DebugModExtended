#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "ShakeData.h"
#include "AE_ShakeTargetComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_ShakeTargetComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FShakeData GroundShakeData;
    
    UPROPERTY(EditDefaultsOnly)
    FShakeData AirShakeData;
    
public:
    UAE_ShakeTargetComponent();
};

