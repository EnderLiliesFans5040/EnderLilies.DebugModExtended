#pragma once
#include "CoreMinimal.h"
#include "EventActionEventDelegate.generated.h"

class UExecuteEventActionAsync;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventActionEvent, UExecuteEventActionAsync*, EventActionAsync);

