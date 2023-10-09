#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryBaseItemData.h"
#include "BaseInventoryEventDelegate.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "BaseInventory.generated.h"

class UGetItemTrigger;
class UDataTable;

UCLASS(Abstract, BlueprintType)
class UBaseInventory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBaseInventoryEvent OnTryAddItem;
    
    UPROPERTY(BlueprintAssignable)
    FBaseInventoryEvent OnItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FBaseInventoryEvent OnItemRemoved;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 ItemLimit;
    
    UPROPERTY(VisibleAnywhere)
    bool bAllowDuplicates;
    
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FInventoryBaseItemData> Items;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<UGetItemTrigger>, UGetItemTrigger*> InstanceForTriggerClasses;
    
public:
    UBaseInventory();
    UFUNCTION(BlueprintCallable)
    void RemoveItemByRowName(const FName& ItemRowName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(const FDataTableRowHandle& ItemData);
    
    UFUNCTION(BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemByRowName(const FName& ItemRowName) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItem(const FDataTableRowHandle& ItemData) const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetValidDataTable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemLimit() const;
    
    UFUNCTION(BlueprintPure)
    bool GetItemHandleAtIndex(int32 Index, FDataTableRowHandle& out_ItemHandle) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetItemAtIndex(int32 Index, FInventoryBaseItemData& out_Item) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInventoryBaseItemData> GetAllItems() const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintPure)
    bool AllowDuplicate() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(const FDataTableRowHandle& ItemData);
    
};

