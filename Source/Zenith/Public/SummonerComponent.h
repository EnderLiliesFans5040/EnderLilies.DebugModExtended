#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESummonSet.h"
#include "SpiritData.h"
#include "SummonerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USummonerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USummonerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUnpossessed();
    
    UFUNCTION(BlueprintCallable)
    void OnUnequipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
    UFUNCTION(BlueprintCallable)
    void OnSwitchSummonSet(ESummonSet PrevSummonSet, ESummonSet NewSummonSet);
    
    UFUNCTION(BlueprintCallable)
    void OnPossessed();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
};

