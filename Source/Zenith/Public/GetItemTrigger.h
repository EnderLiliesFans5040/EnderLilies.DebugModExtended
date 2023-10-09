#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "GetItemTrigger.generated.h"

class AController;

UCLASS(Abstract, Blueprintable)
class UGetItemTrigger : public UObject {
    GENERATED_BODY()
public:
    UGetItemTrigger();
    UFUNCTION(BlueprintImplementableEvent)
    void OnGetItem(AController* Controller, const FDataTableRowHandle& Item);
    
};

