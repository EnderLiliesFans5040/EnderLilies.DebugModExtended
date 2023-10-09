#pragma once
#include "CoreMinimal.h"
#include "BaseInventory.h"
#include "ItemTipInventory.generated.h"

UCLASS()
class UItemTipInventory : public UBaseInventory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, bool> TipsReadStatus;
    
public:
    UItemTipInventory();
    UFUNCTION(BlueprintCallable)
    bool MarkAsRead(const FName& TipID);
    
    UFUNCTION(BlueprintPure)
    bool IsAlreadyRead(const FName& TipID) const;
    
};

