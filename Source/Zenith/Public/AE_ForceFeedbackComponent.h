#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AE_ForceFeedbackComponent.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_ForceFeedbackComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
public:
    UAE_ForceFeedbackComponent(const FObjectInitializer& ObjectInitializer);

};

