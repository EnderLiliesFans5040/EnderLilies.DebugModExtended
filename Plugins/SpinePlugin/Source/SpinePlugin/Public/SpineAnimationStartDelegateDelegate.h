#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationStartDelegateDelegate.generated.h"

class UTrackEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineAnimationStartDelegate, UTrackEntry*, Entry);

