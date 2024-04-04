#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CurrencyEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrencyEvent, ECurrencyType, CurrencyType, int32, AddedCurrency);

