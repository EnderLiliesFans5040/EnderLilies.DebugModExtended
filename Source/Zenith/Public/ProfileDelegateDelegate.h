#pragma once
#include "CoreMinimal.h"
#include "ProfileDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FProfileDelegate, bool, bValidSelection);

