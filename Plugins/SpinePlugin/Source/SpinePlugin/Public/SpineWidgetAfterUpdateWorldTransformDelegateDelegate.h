#pragma once
#include "CoreMinimal.h"
#include "SpineWidgetAfterUpdateWorldTransformDelegateDelegate.generated.h"

class USpineWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineWidgetAfterUpdateWorldTransformDelegate, USpineWidget*, Skeleton);

