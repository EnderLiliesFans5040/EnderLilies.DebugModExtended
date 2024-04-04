#pragma once
#include "CoreMinimal.h"
#include "ParameterPlayerLevelEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FParameterPlayerLevelEvent, bool, bExecuteVisuals);

