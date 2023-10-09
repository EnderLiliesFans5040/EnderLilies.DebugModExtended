#pragma once
#include "CoreMinimal.h"
#include "PassiveEquipEventDelegate.h"
#include "Components/ActorComponent.h"
#include "ItemPassiveData.h"
#include "PassiveEquipRuntimeData.h"
#include "EPassiveEquipResult.h"
#include "PassiveEquipComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UPassiveEquipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPassiveEquipEvent OnPassiveEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FPassiveEquipEvent OnPassiveUnequipped;
    
    UPROPERTY(BlueprintAssignable)
    FPassiveEquipEvent OnSlotCountChanged;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxSlotCount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPassiveEquipCount;
    
    UPROPERTY(Transient)
    TArray<FPassiveEquipRuntimeData> EquippedPassives;
    
public:
    UPassiveEquipComponent();
    UFUNCTION(BlueprintCallable)
    bool UnequipPassive(const FName& PassiveID);
    
    UFUNCTION(BlueprintCallable)
    int32 SetSlotCount(int32 NewSlotCount);
    
    UFUNCTION(BlueprintPure)
    bool IsPassiveEquipped(const FName& PassiveID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUsedSlotCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxSlotCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxEquippablePassiveCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPassiveEquipRuntimeData> GetEquippedPassives() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAvailableSlotCount() const;
    
    UFUNCTION(BlueprintCallable)
    EPassiveEquipResult EquipPassive(const FName& PassiveID);
    
    UFUNCTION(BlueprintPure)
    EPassiveEquipResult CanEquipPassive(const FItemPassiveData& ItemPassiveData) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddSlotCount(int32 SlotToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSlot();
    
};

