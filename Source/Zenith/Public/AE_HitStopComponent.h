#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectTimedComponent.h"
#include "AE_HitStopComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_HitStopComponent : public UAbilityEffectTimedComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExecuteOnInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExecuteOnTarget;
    
public:
    UAE_HitStopComponent(const FObjectInitializer& ObjectInitializer);

};

