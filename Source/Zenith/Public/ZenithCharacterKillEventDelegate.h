#pragma once
#include "CoreMinimal.h"
#include "ZenithCharacterKillEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZenithCharacterKillEvent, AActor*, KilledEnemy);

