#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "Templates/SubclassOf.h"
#include "AE_CameraShakeComponent.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_CameraShakeComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> Shake;
    
public:
    UAE_CameraShakeComponent(const FObjectInitializer& ObjectInitializer);

};

