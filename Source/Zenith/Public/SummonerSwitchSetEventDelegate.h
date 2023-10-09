#pragma once
#include "CoreMinimal.h"
#include "ESummonSet.h"
#include "SummonerSwitchSetEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSummonerSwitchSetEvent, ESummonSet, PrevSummonSet, ESummonSet, NewSummonSet);

