#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDisposeDelegateDelegate.generated.h"

class UTrackEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineAnimationDisposeDelegate, UTrackEntry*, Entry);

