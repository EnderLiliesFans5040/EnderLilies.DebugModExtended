#pragma once
#include "CoreMinimal.h"
#include "BaseInventory.h"
#include "ItemSpiritLevelChangedEventDelegate.h"
#include "ItemSpiritInventory.generated.h"

UCLASS()
class UItemSpiritInventory : public UBaseInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FItemSpiritLevelChangedEvent OnSpiritLevelChanged;
    
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, int32> SpiritLevels;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FName> SpiritCheckedList;
    
public:
    UItemSpiritInventory();
    UFUNCTION(BlueprintPure)
    bool UnlockedAllSpirits() const;
    
    UFUNCTION(BlueprintCallable)
    int32 SetSpiritLevel(const FName& SpiritID, int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void MarkSpiritAsChecked(const FName& SpiritID);
    
    UFUNCTION(BlueprintPure)
    bool IsSpiritMaxLevel(const FName& SpiritID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpiritChecked(const FName& SpiritID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllObtainedSpiritsChecked() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpiritMaxLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpiritLevel(const FName& SpiritID, bool bIgnoreLevelOverride) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpiritCount(bool bCountBossSpirit) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCommonSpiritCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossSpiritCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddSpiritLevel(const FName& SpiritID);
    
};

