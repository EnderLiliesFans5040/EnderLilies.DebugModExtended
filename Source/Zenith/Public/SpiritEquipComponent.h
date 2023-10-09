#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "SpiritEquipEventDelegate.h"
#include "ESummonSet.h"
#include "SpiritSwitchSetEventDelegate.h"
#include "SummonSetData.h"
#include "ECommandInputTypes.h"
#include "SpiritEquipComponent.generated.h"

class AZenithSpirit;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USpiritEquipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpiritEquipEvent OnEquipSpiritDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSpiritEquipEvent OnUnequipSpiritDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSpiritSwitchSetEvent OnSwitchSummonSetDelegate;
    
private:
    UPROPERTY(Transient)
    TMap<TSubclassOf<AZenithSpirit>, AZenithSpirit*> SpiritForSpiritClasses;
    
    UPROPERTY(Transient)
    TMap<ESummonSet, FSummonSetData> SummonSets;
    
public:
    USpiritEquipComponent();
    UFUNCTION(BlueprintCallable)
    void UnequipSpiritFromCurrentSet(ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable)
    void UnequipSpirit(ESummonSet SummonSet, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable)
    void UnequipAllSpirits();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSummonSet();
    
    UFUNCTION(BlueprintCallable)
    void SwitchSummonSet(ESummonSet NewSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCanChangeEquipment(bool bNewCanChangeEquipment);
    
    UFUNCTION(BlueprintCallable)
    void ReequipSpirits();
    
private:
    UFUNCTION()
    void OnSpiritLevelChanged(const FName& SpiritID, int32 NewSpiritLevel);
    
    UFUNCTION()
    void OnGameMapSwitch();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSpiritEquipped(ESummonSet SummonSet, FName SpiritID);
    
    UFUNCTION(BlueprintPure)
    FSummonSetData GetSummonSetDataAsReadOnly(ESummonSet SummonSet) const;
    
    UFUNCTION(BlueprintPure)
    ESummonSet GetCurrentSummonSet() const;
    
    UFUNCTION(BlueprintPure)
    TMap<ESummonSet, FSummonSetData> GetAllSummonSets() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDisappearAllSpirits();
    
    UFUNCTION(BlueprintCallable)
    void EquipSpiritToCurrentSet(FName SpiritID, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable)
    void EquipSpirit(ESummonSet SummonSet, FName SpiritID, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintPure)
    bool CanChangeEquipment() const;
    
};

