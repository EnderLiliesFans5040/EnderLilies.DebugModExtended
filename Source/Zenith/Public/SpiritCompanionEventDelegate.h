#pragma once
#include "CoreMinimal.h"
#include "CompanionData.h"
#include "SpiritCompanionEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpiritCompanionEvent, const FCompanionData&, CompanionData);

