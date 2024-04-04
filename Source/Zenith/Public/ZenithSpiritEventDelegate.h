#pragma once
#include "CoreMinimal.h"
#include "ZenithSpiritEventDelegate.generated.h"

class AZenithSpirit;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZenithSpiritEvent, AZenithSpirit*, ZenithSpirit);

