#pragma once
#include "CoreMinimal.h"
#include "HPDamageEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHPDamageEvent, AActor*, From, int32, Damage);

