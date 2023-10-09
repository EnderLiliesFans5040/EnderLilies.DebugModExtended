#pragma once
#include "CoreMinimal.h"
#include "ZenithCharacterOnGotJustEventDelegate.generated.h"

class AAbility;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZenithCharacterOnGotJustEvent, AAbility*, Ability, AActor*, Target);

