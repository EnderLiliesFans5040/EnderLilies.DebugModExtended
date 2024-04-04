#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "BaseInventoryEventDelegate.h"
#include "InventoryBaseItemData.h"
#include "Templates/SubclassOf.h"
#include "BaseInventory.generated.h"

class UDataTable;
class UGetItemTrigger;

UCLASS(Abstract, Blueprintable)
class UBaseInventory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseInventoryEvent OnTryAddItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseInventoryEvent OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseInventoryEvent OnItemRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDuplicates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInventoryBaseItemData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGetItemTrigger>, UGetItemTrigger*> InstanceForTriggerClasses;
    
public:
    UBaseInventory();

    UFUNCTION(BlueprintCallable)
    void RemoveItemByRowName(const FName& ItemRowName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(const FDataTableRowHandle& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemByRowName(const FName& ItemRowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem(const FDataTableRowHandle& ItemData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetValidDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemHandleAtIndex(int32 Index, FDataTableRowHandle& out_ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemAtIndex(int32 Index, FInventoryBaseItemData& out_Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInventoryBaseItemData> GetAllItems() const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowDuplicate() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(const FDataTableRowHandle& ItemData);
    
};

