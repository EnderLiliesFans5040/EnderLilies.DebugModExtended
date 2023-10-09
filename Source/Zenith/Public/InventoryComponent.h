#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseInventoryEventDelegate.h"
#include "ECurrencyType.h"
#include "CurrencyEventDelegate.h"
#include "InventoryBaseItemData.h"
#include "Engine/DataTable.h"
#include "InventoryComponent.generated.h"

class UItemParameterInventory;
class UItemSpiritInventory;
class UItemInventory;
class UItemAptitudeInventory;
class UItemPassiveInventory;
class UItemTipInventory;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBaseInventoryEvent OnAptitudeItemAddedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FBaseInventoryEvent OnAptitudeItemRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FBaseInventoryEvent OnTipItemAddedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCurrencyEvent OnCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCurrencyEvent OnCurrencyAdded;
    
    UPROPERTY(BlueprintAssignable)
    FCurrencyEvent OnCurrencySubtracted;
    
private:
    UPROPERTY(VisibleAnywhere)
    TMap<ECurrencyType, int32> Currencies;
    
    UPROPERTY(VisibleAnywhere)
    int32 PassiveSlotCount;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UItemInventory* ItemGenericInventory;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UItemParameterInventory* ItemParameterInventory;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UItemSpiritInventory* ItemSpiritInventory;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UItemAptitudeInventory* ItemAptitudeInventory;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UItemPassiveInventory* ItemPassiveInventory;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UItemTipInventory* ItemTipInventory;
    
public:
    UInventoryComponent();
    UFUNCTION(BlueprintCallable)
    int32 SpendCurrency(ECurrencyType CurrencyType, int32 CurrencyToSpend);
    
private:
    UFUNCTION()
    void OnTryAddSpiritItem(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION()
    void OnTipItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION()
    void OnSpiritItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION()
    void OnPassiveItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION()
    void OnParameterItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION()
    void OnAptitudeItemRemoved(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION()
    void OnAptitudeItemAdded(const FInventoryBaseItemData& ItemData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasItem(FDataTableRowHandle ItemToAdd);
    
    UFUNCTION(BlueprintPure)
    UItemTipInventory* GetItemTipInventory();
    
    UFUNCTION(BlueprintPure)
    UItemSpiritInventory* GetItemSpiritInventory();
    
    UFUNCTION(BlueprintPure)
    UItemPassiveInventory* GetItemPassiveInventory();
    
    UFUNCTION(BlueprintPure)
    UItemParameterInventory* GetItemParameterInventory();
    
    UFUNCTION(BlueprintPure)
    UItemInventory* GetItemGenericInventory();
    
    UFUNCTION(BlueprintPure)
    UItemAptitudeInventory* GetItemAptitudeInventory();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrency(ECurrencyType CurrencyType);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(FDataTableRowHandle ItemToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCurrency(ECurrencyType CurrencyType, int32 CurrencyToAdd);
    
};

