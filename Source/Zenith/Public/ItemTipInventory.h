#pragma once
#include "CoreMinimal.h"
#include "BaseInventory.h"
#include "ItemTipInventory.generated.h"

UCLASS(Blueprintable)
class UItemTipInventory : public UBaseInventory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> TipsReadStatus;
    
public:
    UItemTipInventory();

    UFUNCTION(BlueprintCallable)
    bool MarkAsRead(const FName& TipID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlreadyRead(const FName& TipID) const;
    
};

