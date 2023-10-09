#pragma once
#include "CoreMinimal.h"
#include "ZenithCharacterOnJustEventDelegate.generated.h"

class AAbility;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FZenithCharacterOnJustEvent, AAbility*, Ability, AActor*, Invoker, bool, bWillForwardEventToAttacker);

