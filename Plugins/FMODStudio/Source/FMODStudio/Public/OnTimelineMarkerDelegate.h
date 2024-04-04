#pragma once
#include "CoreMinimal.h"
#include "OnTimelineMarkerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimelineMarker, const FString&, Name, int32, Position);

