#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAutoClimbType.h"
#include "AutoClimbEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAutoClimbEvent, EAutoClimbType, ClimbType, bool, DirectlyAbove, FVector, TargetLocation);

