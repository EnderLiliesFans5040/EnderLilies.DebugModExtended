#pragma once
#include "CoreMinimal.h"
#include "SpineEvent.h"
#include "SpineAnimationEventDelegateDelegate.generated.h"

class UTrackEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpineAnimationEventDelegate, UTrackEntry*, Entry, FSpineEvent, evt);

