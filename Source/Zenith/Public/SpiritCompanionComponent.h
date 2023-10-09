#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpiritCompanionEventDelegate.h"
#include "SpiritData.h"
#include "SummonSetCompanions.h"
#include "ESummonSet.h"
#include "CompanionData.h"
#include "SpiritCompanionComponent.generated.h"

class AZenithSpirit;
class AZenithCompanionCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USpiritCompanionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpiritCompanionEvent OnSpawnCompanion;
    
    UPROPERTY(BlueprintAssignable)
    FSpiritCompanionEvent OnDestroyCompanion;
    
private:
    UPROPERTY(Transient)
    TMap<ESummonSet, FSummonSetCompanions> CompanionsForSummonSet;
    
    UPROPERTY(Transient)
    TArray<FCompanionData> ExtraCompanions;
    
public:
    USpiritCompanionComponent();
    UFUNCTION(BlueprintCallable)
    void ResetCurrentSetStateAndLocation();
    
    UFUNCTION(BlueprintCallable)
    AZenithCompanionCharacter* RequestExtraCompanion(const TSoftClassPtr<AZenithCompanionCharacter>& CompanionClass);
    
private:
    UFUNCTION()
    void OnUnequipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
    UFUNCTION()
    void OnSummonSetSwitch(ESummonSet PrevSummonSet, ESummonSet NewSummonSet);
    
    UFUNCTION()
    void OnSpiritDisappear(AZenithSpirit* Spirit);
    
    UFUNCTION()
    void OnSpiritAppear(AZenithSpirit* Spirit);
    
    UFUNCTION()
    void OnGameMapSwitch();
    
    UFUNCTION()
    void OnEquipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<AZenithCompanionCharacter*> GetOrderedCurrentCompanions() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AZenithCompanionCharacter*> GetExtraCompanions() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllExtraCompanions();
    
};

