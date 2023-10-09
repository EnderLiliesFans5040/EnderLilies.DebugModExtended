#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AE_RestoreMPToInvokerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_RestoreMPToInvokerComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 MpToRestore;
    
public:
    UAE_RestoreMPToInvokerComponent();
};

