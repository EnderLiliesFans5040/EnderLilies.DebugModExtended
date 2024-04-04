#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "KnockbackData.h"
#include "AE_KnockbackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAE_KnockbackComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypassStaminaCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackData KnockbackData;
    
public:
    UAE_KnockbackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKnockbackData GetKnockbackData() const;
    
};

