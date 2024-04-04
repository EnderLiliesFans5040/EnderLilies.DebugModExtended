#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CompanionData.h"
#include "ESummonSet.h"
#include "SpiritCompanionEventDelegate.h"
#include "SpiritData.h"
#include "SummonSetCompanions.h"
#include "SpiritCompanionComponent.generated.h"

class AZenithCompanionCharacter;
class AZenithSpirit;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USpiritCompanionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritCompanionEvent OnSpawnCompanion;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritCompanionEvent OnDestroyCompanion;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESummonSet, FSummonSetCompanions> CompanionsForSummonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCompanionData> ExtraCompanions;
    
public:
    USpiritCompanionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetCurrentSetStateAndLocation();
    
    UFUNCTION(BlueprintCallable)
    AZenithCompanionCharacter* RequestExtraCompanion(const TSoftClassPtr<AZenithCompanionCharacter>& CompanionClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnequipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
    UFUNCTION(BlueprintCallable)
    void OnSummonSetSwitch(ESummonSet PrevSummonSet, ESummonSet NewSummonSet);
    
    UFUNCTION(BlueprintCallable)
    void OnSpiritDisappear(AZenithSpirit* Spirit);
    
    UFUNCTION(BlueprintCallable)
    void OnSpiritAppear(AZenithSpirit* Spirit);
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AZenithCompanionCharacter*> GetOrderedCurrentCompanions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AZenithCompanionCharacter*> GetExtraCompanions() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllExtraCompanions();
    
};

