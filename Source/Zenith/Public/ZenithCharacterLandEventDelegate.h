#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ZenithCharacterLandEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZenithCharacterLandEvent, FHitResult, HitResult);

