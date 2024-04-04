#pragma once
#include "CoreMinimal.h"
#include "InventoryBaseItemData.h"
#include "BaseInventoryEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBaseInventoryEvent, const FInventoryBaseItemData&, InventoryItemData);

