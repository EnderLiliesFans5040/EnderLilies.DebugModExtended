#pragma once
#include "CoreMinimal.h"
#include "FadeEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFadeEvent, bool, bWasFadeIn);

