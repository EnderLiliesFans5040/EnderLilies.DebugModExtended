#pragma once
#include "CoreMinimal.h"
#include "EAutoClimbType.h"
#include "UObject/NoExportTypes.h"
#include "AutoClimbEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAutoClimbEvent, EAutoClimbType, ClimbType, bool, DirectlyAbove, FVector, TargetLocation);

