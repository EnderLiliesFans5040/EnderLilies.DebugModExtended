#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GameViewportZenithKeyDownEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameViewportZenithKeyDownEvent, const FKeyEvent&, KeyEvent);

