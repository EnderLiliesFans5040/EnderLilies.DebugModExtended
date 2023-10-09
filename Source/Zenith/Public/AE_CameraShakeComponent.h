#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilityEffectComponent.h"
#include "AE_CameraShakeComponent.generated.h"

class UCameraShakeBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_CameraShakeComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCameraShakeBase> Shake;
    
public:
    UAE_CameraShakeComponent();
};

