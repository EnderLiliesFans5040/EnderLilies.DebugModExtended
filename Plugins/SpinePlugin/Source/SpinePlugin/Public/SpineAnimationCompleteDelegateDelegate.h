#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationCompleteDelegateDelegate.generated.h"

class UTrackEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineAnimationCompleteDelegate, UTrackEntry*, Entry);

