#pragma once
#include "CoreMinimal.h"
#include "ESummonSet.h"
#include "SpiritSwitchSetEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpiritSwitchSetEvent, ESummonSet, PrevSummonSet, ESummonSet, NewSummonSet);

