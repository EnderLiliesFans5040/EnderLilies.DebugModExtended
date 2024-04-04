#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPassiveEquipResult.h"
#include "ItemPassiveData.h"
#include "PassiveEquipEventDelegate.h"
#include "PassiveEquipRuntimeData.h"
#include "PassiveEquipComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UPassiveEquipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPassiveEquipEvent OnPassiveEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPassiveEquipEvent OnPassiveUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPassiveEquipEvent OnSlotCountChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPassiveEquipCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPassiveEquipRuntimeData> EquippedPassives;
    
public:
    UPassiveEquipComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnequipPassive(const FName& PassiveID);
    
    UFUNCTION(BlueprintCallable)
    int32 SetSlotCount(int32 NewSlotCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassiveEquipped(const FName& PassiveID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsedSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxEquippablePassiveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPassiveEquipRuntimeData> GetEquippedPassives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSlotCount() const;
    
    UFUNCTION(BlueprintCallable)
    EPassiveEquipResult EquipPassive(const FName& PassiveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPassiveEquipResult CanEquipPassive(const FItemPassiveData& ItemPassiveData) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddSlotCount(int32 SlotToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSlot();
    
};

