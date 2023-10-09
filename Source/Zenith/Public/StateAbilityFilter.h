#pragma once
#include "CoreMinimal.h"
#include "State.h"
#include "EAbilityType.h"
#include "StateAbilityFilter.generated.h"

UCLASS(Abstract)
class ZENITH_API UStateAbilityFilter : public UState {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EAbilityType AbilityType;
    
    UStateAbilityFilter();
};

