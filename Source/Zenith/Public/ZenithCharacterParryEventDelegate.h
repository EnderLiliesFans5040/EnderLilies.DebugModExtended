#pragma once
#include "CoreMinimal.h"
#include "ZenithCharacterParryEventDelegate.generated.h"

class AAbility;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FZenithCharacterParryEvent, AAbility*, Ability, AActor*, Invoker, bool, bWillForwardEventToAttacker, bool, bTriggerParryAbility);

