#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AE_RestoreMPToInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_RestoreMPToInvokerComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MpToRestore;
    
public:
    UAE_RestoreMPToInvokerComponent(const FObjectInitializer& ObjectInitializer);

};

