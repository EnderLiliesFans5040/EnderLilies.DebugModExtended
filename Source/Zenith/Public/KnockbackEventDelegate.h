#pragma once
#include "CoreMinimal.h"
#include "KnockbackRuntimeData.h"
#include "KnockbackEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKnockbackEvent, FKnockbackRuntimeData, KnockbackRuntimeData);

