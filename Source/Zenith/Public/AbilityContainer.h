#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityTimeline.h"
#include "AbilityContainer.generated.h"

UCLASS(Abstract)
class ZENITH_API AAbilityContainer : public AAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAbilityTimeline AbilityTimeline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAutoStop;
    
public:
    AAbilityContainer();
};

