#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationEndDelegateDelegate.generated.h"

class UTrackEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineAnimationEndDelegate, UTrackEntry*, Entry);

