#pragma once
#include "CoreMinimal.h"
#include "GameViewportZenithSwapControllerEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameViewportZenithSwapControllerEvent, int32, OldControllerID, int32, NewControllerID);

