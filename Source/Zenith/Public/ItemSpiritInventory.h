#pragma once
#include "CoreMinimal.h"
#include "BaseInventory.h"
#include "ItemSpiritLevelChangedEventDelegate.h"
#include "ItemSpiritInventory.generated.h"

UCLASS(Blueprintable)
class UItemSpiritInventory : public UBaseInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSpiritLevelChangedEvent OnSpiritLevelChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SpiritLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> SpiritCheckedList;
    
public:
    UItemSpiritInventory();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UnlockedAllSpirits() const;
    
    UFUNCTION(BlueprintCallable)
    int32 SetSpiritLevel(const FName& SpiritID, int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void MarkSpiritAsChecked(const FName& SpiritID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpiritMaxLevel(const FName& SpiritID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpiritChecked(const FName& SpiritID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllObtainedSpiritsChecked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpiritMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpiritLevel(const FName& SpiritID, bool bIgnoreLevelOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpiritCount(bool bCountBossSpirit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCommonSpiritCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossSpiritCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddSpiritLevel(const FName& SpiritID);
    
};

