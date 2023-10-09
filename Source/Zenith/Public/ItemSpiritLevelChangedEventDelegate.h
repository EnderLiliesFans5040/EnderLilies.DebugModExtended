#pragma once
#include "CoreMinimal.h"
#include "ItemSpiritLevelChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemSpiritLevelChangedEvent, const FName&, SpiritID, int32, NewLevel);

