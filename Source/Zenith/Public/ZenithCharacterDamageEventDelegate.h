#pragma once
#include "CoreMinimal.h"
#include "ZenithCharacterDamageEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZenithCharacterDamageEvent, AActor*, DamagedEnemy, int32, DamageDone);

