#pragma once
#include "CoreMinimal.h"
#include "SpiritData.h"
#include "ESummonSet.h"
#include "SpiritEquipEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpiritEquipEvent, ESummonSet, SummonSet, const FSpiritData&, SpiritData);

