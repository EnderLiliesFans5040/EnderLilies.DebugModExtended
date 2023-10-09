#pragma once
#include "CoreMinimal.h"
#include "GameViewportZenithOverlayRenderOpacityEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameViewportZenithOverlayRenderOpacityEvent, float, RenderOpacity);

