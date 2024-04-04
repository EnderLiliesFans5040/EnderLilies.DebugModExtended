#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationInterruptDelegateDelegate.generated.h"

class UTrackEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineAnimationInterruptDelegate, UTrackEntry*, Entry);

