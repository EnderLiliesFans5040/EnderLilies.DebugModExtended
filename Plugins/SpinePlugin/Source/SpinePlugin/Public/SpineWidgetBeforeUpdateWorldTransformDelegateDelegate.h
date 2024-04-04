#pragma once
#include "CoreMinimal.h"
#include "SpineWidgetBeforeUpdateWorldTransformDelegateDelegate.generated.h"

class USpineWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineWidgetBeforeUpdateWorldTransformDelegate, USpineWidget*, Skeleton);

