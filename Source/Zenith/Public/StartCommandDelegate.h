#pragma once
#include "CoreMinimal.h"
#include "StartCommandDelegate.generated.h"

class UCommandAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartCommand, UCommandAction*, CommandAction);

