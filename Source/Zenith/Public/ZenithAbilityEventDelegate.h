#pragma once
#include "CoreMinimal.h"
#include "ZenithAbilityEventDelegate.generated.h"

class AAbility;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZenithAbilityEvent, AAbility*, Ability, AActor*, Invoker);

