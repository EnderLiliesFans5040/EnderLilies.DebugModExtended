#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityTimeline.h"
#include "AbilityContainer.generated.h"

UCLASS(Abstract, Blueprintable)
class ZENITH_API AAbilityContainer : public AAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityTimeline AbilityTimeline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStop;
    
public:
    AAbilityContainer(const FObjectInitializer& ObjectInitializer);

};

