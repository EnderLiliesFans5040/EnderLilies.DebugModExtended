#pragma once
#include "CoreMinimal.h"
#include "ClearableEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClearableEvent, bool, bAlreadyCleared);

