#pragma once
#include "CoreMinimal.h"
#include "ESummonSet.h"
#include "SpiritData.h"
#include "SpiritEquipEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpiritEquipEvent, ESummonSet, SummonSet, const FSpiritData&, SpiritData);

