#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpiritData.h"
#include "ESummonSet.h"
#include "SummonerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USummonerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USummonerComponent();
private:
    UFUNCTION()
    void OnUnpossessed();
    
    UFUNCTION()
    void OnUnequipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
    UFUNCTION()
    void OnSwitchSummonSet(ESummonSet PrevSummonSet, ESummonSet NewSummonSet);
    
    UFUNCTION()
    void OnPossessed();
    
    UFUNCTION()
    void OnEquipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData);
    
};

