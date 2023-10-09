#pragma once
#include "CoreMinimal.h"
#include "SpiritData.h"
#include "ESummonSet.h"
#include "SummonerEquipEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSummonerEquipEvent, ESummonSet, SummonSet, FSpiritData, SpiritData);

