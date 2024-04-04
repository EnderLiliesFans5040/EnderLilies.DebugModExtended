#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECommandInputTypes.h"
#include "ESummonSet.h"
#include "SpiritEquipEventDelegate.h"
#include "SpiritSwitchSetEventDelegate.h"
#include "SummonSetData.h"
#include "Templates/SubclassOf.h"
#include "SpiritEquipComponent.generated.h"

class AZenithSpirit;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USpiritEquipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritEquipEvent OnEquipSpiritDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritEquipEvent OnUnequipSpiritDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritSwitchSetEvent OnSwitchSummonSetDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AZenithSpirit>, AZenithSpirit*> SpiritForSpiritClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESummonSet, FSummonSetData> SummonSets;
    
public:
    USpiritEquipComponent(const FObjectInitializer& ObjectInitializer);

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
    UFUNCTION(BlueprintCallable)
    void OnSpiritLevelChanged(const FName& SpiritID, int32 NewSpiritLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapSwitch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpiritEquipped(ESummonSet SummonSet, FName SpiritID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSummonSetData GetSummonSetDataAsReadOnly(ESummonSet SummonSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESummonSet GetCurrentSummonSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ESummonSet, FSummonSetData> GetAllSummonSets() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDisappearAllSpirits();
    
    UFUNCTION(BlueprintCallable)
    void EquipSpiritToCurrentSet(FName SpiritID, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable)
    void EquipSpirit(ESummonSet SummonSet, FName SpiritID, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeEquipment() const;
    
};

