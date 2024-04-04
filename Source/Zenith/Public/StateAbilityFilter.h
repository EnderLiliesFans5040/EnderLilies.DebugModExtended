#pragma once
#include "CoreMinimal.h"
#include "EAbilityType.h"
#include "State.h"
#include "StateAbilityFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class ZENITH_API UStateAbilityFilter : public UState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityType AbilityType;
    
    UStateAbilityFilter();

};

