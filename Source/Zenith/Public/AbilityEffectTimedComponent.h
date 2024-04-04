#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectComponent.h"
#include "AbilityEffectTimedComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityEffectTimedComponent : public UAbilityEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityEffectDuration;
    
public:
    UAbilityEffectTimedComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbilityEffectDuration() const;
    
};

