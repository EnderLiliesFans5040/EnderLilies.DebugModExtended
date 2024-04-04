#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "EventUserWidgetEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventUserWidgetEvent, const FKeyEvent&, KeyEvent);

