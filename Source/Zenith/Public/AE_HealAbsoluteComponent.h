#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AE_HealAbsoluteComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_HealAbsoluteComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Heal;
    
public:
    UAE_HealAbsoluteComponent(const FObjectInitializer& ObjectInitializer);

};

