#pragma once
#include "CoreMinimal.h"
#include "SaveGameResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSaveGameResult, bool, bSuccess);

