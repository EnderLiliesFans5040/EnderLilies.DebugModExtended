#pragma once
#include "CoreMinimal.h"
#include "ECommandRemoveTypes.h"
#include "CommandActionEndEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommandActionEndEvent, ECommandRemoveTypes, RemoveType);

