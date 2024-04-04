#pragma once
#include "CoreMinimal.h"
#include "ESummonSet.h"
#include "SpiritData.h"
#include "SummonerEquipEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSummonerEquipEvent, ESummonSet, SummonSet, FSpiritData, SpiritData);

