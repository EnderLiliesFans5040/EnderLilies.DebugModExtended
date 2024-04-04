#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "BaseInventoryEventDelegate.h"
#include "CurrencyEventDelegate.h"
#include "ECurrencyType.h"
#include "InventoryBaseItemData.h"
#include "InventoryComponent.generated.h"

class UItemAptitudeInventory;
class UItemInventory;
class UItemParameterInventory;
class UItemPassiveInventory;
class UItemSpiritInventory;
class UItemTipInventory;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseInventoryEvent OnAptitudeItemAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseInventoryEvent OnAptitudeItemRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseInventoryEvent OnTipItemAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyEvent OnCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyEvent OnCurrencyAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyEvent OnCurrencySubtracted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, int32> Currencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PassiveSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemInventory* ItemGenericInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemParameterInventory* ItemParameterInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSpiritInventory* ItemSpiritInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemAptitudeInventory* ItemAptitudeInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemPassiveInventory* ItemPassiveInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTipInventory* ItemTipInventory;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 SpendCurrency(ECurrencyType CurrencyType, int32 CurrencyToSpend);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTryAddSpiritItem(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnTipItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnSpiritItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnPassiveItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnParameterItemAdded(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnAptitudeItemRemoved(const FInventoryBaseItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnAptitudeItemAdded(const FInventoryBaseItemData& ItemData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasItem(FDataTableRowHandle ItemToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemTipInventory* GetItemTipInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemSpiritInventory* GetItemSpiritInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemPassiveInventory* GetItemPassiveInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemParameterInventory* GetItemParameterInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemInventory* GetItemGenericInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemAptitudeInventory* GetItemAptitudeInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrency(ECurrencyType CurrencyType);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(FDataTableRowHandle ItemToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCurrency(ECurrencyType CurrencyType, int32 CurrencyToAdd);
    
};

