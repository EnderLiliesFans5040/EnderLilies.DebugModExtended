#pragma once
#include "CoreMinimal.h"
#include "ParameterPlayerLevelEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FParameterPlayerLevelEvent, bool, bExecuteVisuals);

