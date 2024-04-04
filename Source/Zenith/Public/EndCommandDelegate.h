#pragma once
#include "CoreMinimal.h"
#include "ECommandRemoveTypes.h"
#include "EndCommandDelegate.generated.h"

class UCommandAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndCommand, UCommandAction*, CommandAction, ECommandRemoveTypes, RemoveType);

