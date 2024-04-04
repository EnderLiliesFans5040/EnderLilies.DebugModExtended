#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "ShakeData.h"
#include "AE_ShakeTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_ShakeTargetComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShakeData GroundShakeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShakeData AirShakeData;
    
public:
    UAE_ShakeTargetComponent(const FObjectInitializer& ObjectInitializer);

};

